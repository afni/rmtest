.. _DealingWithGrads:

======================
Dealing with gradients
======================

.. contents::
   :depth: 3

Overview
========

In diffusion weighted imaging (DWI), magnetic field gradients are
applied along various spatial directions to probe relative diffusivity
along different orientations. In order to estimate the diffusion
tensor (DT), we need to have a recording of what was the
directionality of each gradient (**g**, a vector), and what was the
strength of the extra magnetic field (*b*, a scalar) was used.  

Many different programs and software, starting from the MRI machines
themselves, use different notations and methods of reading and writing
the gradient direction and strength information. Drat. Therefore,
there is some need for manipulating them during the analysis process
(sometimes even iteratively to make sure that everything matches).

Since each gradient and *b*\-value have a one-to-one correspondence
with an acquired DWI volume, we would also like to keep the processing
of any one type of data in line with the others.  For example, common
DWI processing includes averaging the *b*\=0 reference images
together, and possibly averaging repetitions of sets of DWIs together
(in both cases, to have higher SNR of individual datasets)-- programs
discussed here allow one to semi-automate these averaging processes
(as well as check that averaging is really feasible) while
appropriately updating gradient information.

Diffusion gradients
-------------------

The spatial orientations of the applied diffusion weighting gradients
are typically recorded as unit normal vectors which can be expressed
as (equivalently):

.. math::
   \mathbf{g} &= (g_x, g_y, g_z),~{\rm or}\\
              &= (g_1, g_2, g_3), 

where :math:`g_x^2 + g_y^2 + g_z^2\equiv1` for DWIs, and :math:`g_x =
g_y = g_z = 0` for the *b*\=0 reference images. For example, a
diffusion gradient applied entirely in the from 'top' to 'bottom' in
the *z*\-direction (of whatever set of axes the scanner is using)
might be expressed as (0, 0, 1), and one purely in the *xy*\-plane
could be (0.707, -0.707, 0) or (-0.950, -0.436, 0), etc. 

The gradient information is often saved in a text file as three rows
of numbers (for example, the ``*.bvecs`` files created by ``dcm2nii``)
or as three columns.  If the acquisition contained *N* reference
(*b*\=0) images and *M* DWIs, then these initial files typically have
dimensionality "3 by *N*\+\ *M*" or "*N*\+\ *M* by 3", respectively.
Additionally, a separate file may contain the list of DW factors
(i.e., the *b*\-values), and there would be *N*\+\ *M* in a single row
or column.

Diffusion matrices
------------------

The directionality diffusion gradients may also be encoded as a (3 by 3)
matrix:

.. math::
   \mathbf{G}= 
   \left[\begin{array}{ccc}
   G_{xx}&G_{xy}&G_{xz}\\
   G_{yx}&G_{yy}&G_{yz}\\
   G_{zx}&G_{zy}&G_{zz}
   \end{array}\right],~~{\rm or}~~
   \left[\begin{array}{ccc}
   G_{11}&G_{12}&G_{13}\\
   G_{21}&G_{22}&G_{23}\\
   G_{31}&G_{32}&G_{33}
   \end{array}\right].

The components of the matrix are related to the gradients above:
:math:`G_{xy}\equiv g_x g_y`, :math:`G_{12}\equiv g_1 g_2`,
etc. Formally, **G** is the outer (or dyadic) product of **g**. Here,
the main thing that results from this relation is that **G** is
symmetric (:math:`G_{xy}\equiv G_{yx}`), which means that there are
only six independent components in the 3 by 3 matrix.  Thus, six
numbers are recorded in this format. Generally, these are stored as
columns, so that the files would be (following the previous section's
notation) an "*N*\+\ *M* by 6" array of numbers.

*However, there is the little wrinkle that different programs write
out the components in different ways!*

The standard AFNI style is 'diagonal first': 

.. math::
   G_{xx}, G_{yy}, G_{zz}, G_{xy}, G_{xz}, G_{yz},

while, for example, the TORTOISE output style is 'row first' (and
explicitly includes the factors of two from the symmetry of the
off-diagonals):

.. math::
   G_{xx}, 2\,G_{xy}, 2\,G_{xz}, G_{yy}, 2\,G_{yz}, G_{zz}.

Each of these formats is record equivalent information, it's just a
matter of using the appropriate one with the appropriate software.
When using these dyadic matrices to record spatial information, the
*b*\-value information sits by itself again.

As a final case, one may include the magnitude of the magnetic fields
with the spatial directionality in a single expression, the
*b*\-matrix:

.. math::
   \mathbf{B}= b \mathbf{G},

where every component of the above dyadic matrix, **G**, is simply multiplied
by the DW factor, *b*.  All the other notations, symmetries and relations
remain the same, including the distinctions in row- or diagonal-first
notations.


Operating on gradients and DWIs
===============================

The relevant format (row or column gradient, row- or diagonal-first
matrix) can be converted among each other using ``1dDW_Grad_o_Mat``.


