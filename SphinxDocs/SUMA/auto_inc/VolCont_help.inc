
.. _VolCont:

The Volume Controller:
----------------------

The volume controller is for controlling the way volumes are rendered. Each volume gets its own controller. You can use the switch button above to switch between them. The volume controller is initialized by the volume of the last selected voxel.
 After you have selected a voxel, you can launch the :ref:`Volume Controller <VolCont>` with: :ref:`ctrl+s <LC_Ctrl+s>` or :menuselection:`View-->Object Controller`

.. figure:: media/VolumeController.jpg
   :align: center


   ..




.. _VolCont->Volume_Properties:

Volume Properties:
==================

Block providing information about selected volume.

   .. _VolCont->Volume_Properties->more:

**more**: More info on Volume


Opens a dialog with detailed information about the object in geek speak.

.. _VolCont->Xhair_Info:

Information at crosshair:
=========================


   .. _VolCont->Xhair_Info->Xhr.r00:

**Xhr**: Crosshair coordinates.


Set/Get crosshair location in mm :term:`RAI` on
this controller's selected object.
Entering new coordinates 
makes the crosshair jump
to that location (like :ref:`'ctrl+j' <LC_Ctrl+j>`).
Use :ref:`'alt+l'<LC_Alt+l>` to center the
cross hair in your viewer.

   .. _VolCont->Xhair_Info->Ind.r00:

**Ind**: Voxel 1D index in volume


Set/Get the :term:`1D index` of the selected elementary surface datum: the voxel.


   .. _VolCont->Xhair_Info->IJK.r00:

**IJK**: Voxel 3D indices in volume


Triplet of indices (I) of selected voxel.
The mm RAI coordinate X = M I with M being the matrix transforming
voxel indices to voxel coordinates.


   .. _VolCont->Xhair_Info->Val.c00:

**Val.c00**: Data Values at voxel in focus


Data values at voxel in focus. :term:`Intensity`, :term:`Threshold`, and :term:`Brightness` show the triplets of values  at the selected voxel that correspond to the volume column choices in :ref:`I<VolCont->Dset_Mapping->I>`, :ref:`T<VolCont->Dset_Mapping->T>`, and :ref:`B<VolCont->Dset_Mapping->B>` selectors.

   .. _VolCont->Xhair_Info->Lbl.r00:

**Lbl**: Label at voxel in focus


Labels available at the selected datum.
If nothing is available, datum color
is displayed.

.. _VolCont->Slice_Controls:

Set up which and how many slices are displayed:
===============================================


   .. _VolCont->Ax_slc->lab:

**lab**: Select axial slice(s) to render (use BHelp for details)


Select axial slice(s) to render.
If the dataset is oblique, that would be the slice that is closest
to the axial plane.
Move slider bar or enter slice number directly in adjoining field.
To show a stack of axial slices set the second text field to N:S
where N is the number of slices in the stack and S is the spacing
in number of slices between consecutive slices. The stack is centered
on the chosen slice number. So when N > 1 and even, the 'selected' slice
is not rendered. In that case, set N to the next odd number to see it.
To hide/show all displayed axial slices, use right-side toggle button.

   .. _VolCont->Sa_slc->lab:

**lab**: Select sagittal slice(s) to render (use BHelp for details)


Select sagittal slice(s) to render.
If the dataset is oblique, that would be the slice that is closest
to the sagittal plane.
Move slider bar or enter slice number directly in adjoining field.
To show a stack of sagittal slices set the second text field to N:S
where N is the number of slices in the stack and S is the spacing
in number of slices between consecutive slices. The stack is centered
on the chosen slice number. So when N > 1 and even, the 'selected' slice
is not rendered. In that case, set N to the next odd number to see it.
To hide/show all displayed sagittal slices, use right-side toggle button.

   .. _VolCont->Co_slc->lab:

**lab**: Select coronal slice(s) to render (use BHelp for details)


Select coronal slice(s) to render.
If the dataset is oblique, that would be the slice that is closest
to the coronal plane.
Move slider bar or enter slice number directly in adjoining field.
To show a stack of coronal slices set the second text field to N:S
where N is the number of slices in the stack and S is the spacing
in number of slices between consecutive slices. The stack is centered
on the chosen slice number. So when N > 1 and even, the 'selected' slice
is not rendered. In that case, set N to the next odd number to see it.
To hide/show all displayed coronal slices, use right-side toggle button.

   .. _VolCont->Slice_Controls->Trn:

**Trn**: Choose the transparency for these slices.


Set the transparency level for this volume to one of the following options.
   Viewer: Surface's transparency is set            by the viewer's setting which can            be changed with the 'o', 'O' options.

           Cheesecloth transparency only is allowed in            this setting.

   A :   Alpha blending. May look good, but not always          accurate.

   0 :   No transparency, opaque.

   ...

   16:   Maximum transparency, invisibile



   .. _VolCont->Slice_Controls->Slices_At_+:

**Slices_At_+**: Make slices jump to crosshair location



.. _VolCont->Volume_Rendering_Controls:

Set the parameters for 3D rendering:
====================================


   .. _VolCont->VR->Ns:

**Ns**: VR params (use BHelp for details)


Volume Rendering Settings.


   .. _VolCont->VR->Ns->v:

**v**: View (ON)/Hide VrF


View (ON)/Hide Volume Rendering

.. _VolCont->Dset_Controls:

Dset Controls:
==============


   .. _VolCont->Dset_Controls->Lbl[1]:

**Lbl[1]**: 


Use BHelp on table's column and row titlesfor usage information.

   .. _VolCont->Dset_Controls->Dim:

**Dim**: Dimming factor to apply to colormap or color datasets.


Dimming factor to apply to colormap
before mapping the intensity (I) data.
The colormap, if displayed on the right,
is not visibly affected by Dim but the
colors mapped onto the surface, voxel grid, tracts, etc. are.
For RGB Dsets (e.g. .col files, or tract colors), Dim is
applied to the RGB colors directly.

Decreasing Dim is useful when the colors are too saturated
for lighting to reflect the object terrain.
When in doubt, just press the button and see what happens.

   .. _VolCont->Dset_Controls->Avl:

**Avl**: Choose method for computing color alpha value for voxels.


Choose the method for assigning an alpha value (A) to a voxel's color.
   Avg :  A = average of R, G, B values

   Max :  A = maximum of R, G, B values

   Min :  A = minimum of R, G, B values

   I :  A is based on I selection. I range parameters apply 

   T :  A is based on T selection. Full range is used.

   B :  A is based on B selection. B range parameters apply

   XXX: A is set to 0, nothing will show.



   .. _VolCont->Dset_Controls->Ath:

**Ath**: Threshold for voxel alpha value.


Alpha threshold of Dset's rendered slices.
When datasets' voxels get colored, they get an Alpha (A) value
in addition to the R, G, B values. A is computed based on
the setting of the 'Avl' menu.
Voxels (or more precisely, their openGL realization) 
with Alpha lower than this value will not get rendered.
This is another way to 'threshold' a rendered volume, and 
is comparable to thresholding with the slider bar if using a
monochromatic increasingly monotonic colormap with 'Avl' set to
one of Max, Min, or Avg.
Note that thresholding with the slider bar sets A for thresholded 
voxels to 0.0 regardless of the setting for 'Avl'.
Thresholding with Ath is faster than using the slider bar because 
it does not require recreating the whole texture.

.. _VolCont->Dset_Mapping:

Dset Color Mapping:
===================


   .. _VolCont->Dset_Mapping->IxT:

**IxT**: Set I, T selection linking modes.


Switch between methods for the automatic linking of I, T selectors.

None: Do nothing.

Same: Set the T selector to match the I selection.

Stat: Swith T selector to match an I selection with 
'    'an obvious statistic. Matching is based on labels.

You can set your preference using environment variable
   SUMA_IxT_LinkMode


   .. _VolCont->Dset_Mapping->I:

**I**: Select Intensity (I) column, aka sub-brick. 


Use this menu to select which column in the dataset (Dset) should be used for an Intensity (I)measure.

Values in (I) are the ones that get colored by the colormap,however, no coloring is done if the :ref:`'v'<SurfCont->Dset_Mapping->I->v>` button on the right isturned off.

The (I) value for the selected :term:`datum` (n) is shown in the :ref:`'Val'<SurfCont->Xhair_Info->Val.c00>` tableof the :ref:`'Xhair Info' <SurfCont->Xhair_Info>` section on the left.
The value is also shown in the SUMA viewer

You can use a different type of selector to set (I). A right-click on 'I' opens a list widget, which is better when you have many columns from which to choose.

The style of this selector can also change depending on the numberof sub-bricks (columns) you have in your dataset. If the numberexceeds a threshold specified by the environment variable :ref:`SUMA_ArrowFieldSelectorTrigger<SUMA_ArrowFieldSelectorTrigger>`


   .. _VolCont->Dset_Mapping->I->v:

**v**: View (ON)/Hide volume voxel colors


View (ON)/Hide Dset node colors

   .. _VolCont->Dset_Mapping->T:

**T**: Select Threshold (T) column, aka sub-brick.  


Use this menu to select which column in the
dataset (Dset) should be used for a Threshold (T) measure.

T values are the ones used to determine if a :term:`datum` gets colored based on its (I) value.

A node n is not colored if:

    T(n)   < Tscale   

or if :ref:`'\|T\|'<SurfCont->Dset_Mapping->abs_T>` option below is turned ON: 

  | T(n) | < Tscale .

Thresholding is not applied when the :ref:`'v'<SurfCont->Dset_Mapping->T->v>` button on the right is turned off.

The (T) value for the selected :term:`datum` (n) is shown in the :ref:`'Val'<SurfCont->Xhair_Info->Val.c00>` tableof the :ref:`'Xhair Info' <SurfCont->Xhair_Info>` section on the left.
The value is also shown in the SUMA viewer

You can use a different type of selector to set (T). A right-click on 'T' opens a list widget, which is better when you have many columns from which to choose.

The style of this selector can also change depending on the numberof sub-bricks (columns) you have in your dataset. If the numberexceeds a threshold specified by the environment variable :ref:`SUMA_ArrowFieldSelectorTrigger<SUMA_ArrowFieldSelectorTrigger>`


   .. _VolCont->Dset_Mapping->T->v:

**v**: Apply (ON)/Ignore thresholding



   .. _VolCont->Dset_Mapping->B:

**B**: Select Brightness (B) column, aka sub-brick. 


Use this menu to select which column in the dataset (Dset) should be used for color Brightness (B) modulation.

(B) values are the ones used to control the brightness of a :term:`datum's<datum>` color.

Brightness modulation is controlled by ranges in the 'B' cells of the table below.

Brightness modulation is not applied when the :ref:`'v'<SurfCont->Dset_Mapping->B->v>` button on 
the right is turned off.

The (B) value for the selected :term:`datum` (n) is shown in the :ref:`'Val'<SurfCont->Xhair_Info->Val.c00>` tableof the :ref:`'Xhair Info' <SurfCont->Xhair_Info>` section on the left.
The value is also shown in the SUMA viewer

You can use a different type of selector to set (B). A right-click on 'B' opens a list widget, which is better when you have many columns from which to choose.

The style of this selector can also change depending on the numberof sub-bricks (columns) you have in your dataset. If the numberexceeds a threshold specified by the environment variable :ref:`SUMA_ArrowFieldSelectorTrigger<SUMA_ArrowFieldSelectorTrigger>`


   .. _VolCont->Dset_Mapping->B->v:

**v**: View (ON)/Ignore brightness modulation



   .. _VolCont->Dset_Mapping->ThrVal[0]:

**ThrVal[0]**: Threshold Value (append 'p' to set by p value, '%' to set by percentile)


Set/Get the threshold value.
When statistical parameters are set under :ref:`T <VolCont->Dset_Mapping->T>`, you can 
append a 'p' to set by the p value, as in 0.001p.

For percentile thresholding, append a '%' to
the value, such as 25%


   .. _VolCont->Dset_Mapping->Cmap->bar:

**bar**: Colorbar for 'I' values


Colorbar used for colorizing values in 'I' sub-brick.
Colorization depends on the settings of ...
Use ctrl+h over the colorbar for help on manipulating the displayed
map.


   .. _VolCont->Dset_Mapping->Cmap->scale:

**scale**: Set the threshold for 'T' values


Set threshold value to determine which nodes/voxels/edges will get coloredVoxels for which the value in the 'T' sub-brick is below that of the threshold will not get colored.

   .. _VolCont->Dset_Mapping->Cmap->pval:

**pval**: Nominal p-value per node; FDR q-value


Shows the estimated significance
(p-value) of the threshold above,
if possible.

   * If not possible, will display as '[N/A]' instead.

   * p's that display as 1.2-7 should be interpreted as 1.2 x 10^(-7)

   * p-value here is significance PER NODE/VOXEL/etc.

* If FDR curves are pre-computed in the dataset's header, then the False Discovery Rate q-value will also be shown.

* You can add FDR curves to a dataset with '3drefit -addFDR'.


   .. _VolCont->Dset_Mapping->SetRangeTable.c00:

**SetRangeTable.c00**: Clipping ranges


Used for setting the clipping ranges. Clipping is only done for 
color mapping. Actual data 
values do not change.

   .. _VolCont->Dset_Mapping->SetRangeTable.r01:

**SetRangeTable.r01**: Intensity clipping range (append '%' for percentiles, see BHelp)


Intensity clipping range rules:

   Values in the intensity data that are less than Min are colored by the first (bottom) color of the colormap. 

   Values larger than Max are mapped to the top color.

   Intermediate values are mapped according to the :ref:`'Col'<SurfCont->Dset_Mapping->Col>` menu below.

You can set the range as a percentile of the dataset's values by appending  '%' to the percentile for Min and/or Max such as 5% or 90%. Note that the percentile always gets replaced by the actual value in the dataset.

A left-click on 'I' locks ranges from automatic resetting, and the locked range applies to the current Dset only. A locked range is indicated with the reverse video mode.

A right-click resets values to the default range (usually 2% to 98%) in the dataset.

   .. _VolCont->Dset_Mapping->SetRangeTable.r02:

**SetRangeTable.r02**: Brightness modulation clipping range 


Values in the brightness (B) :ref:`column<SurfCont->Dset_Mapping->B>` are clipped to the Min to Max range in this row before calculating their modulation factor per the values in the next table row.

You can set the range as a percentile of the dataset's values by appending  '%' to the percentile for Min and/or Max such as 8% or 75%. Note that the percentile always gets replaced by the actual value in the dataset.

A left-click locks ranges in this row from automatic resetting, and a locked range is applied to the current Dset only. A locked range is indicated with the reverse video mode.

A right-click resets values to the default range (usually 2% to 98%) for the dataset.

   .. _VolCont->Dset_Mapping->SetRangeTable.r03:

**SetRangeTable.r03**: Brightness modulation factor range 


Brightness modulation factor range.
Brightness modulation values, after
clipping per the values in the row above,
are scaled to fit the range specified
here.

   .. _VolCont->Dset_Mapping->Col:

**Col**: Switch between color mapping modes.


Switch between modes for mapping values to the color map.

The bottom color of the map C0 maps to the minimum value in the :ref:`I range<SurfCont->Dset_Mapping->SetRangeTable.r01>` row, and the top color to the maximum value. Colors for values in between the minimum and maximum of :ref:`I range<SurfCont->Dset_Mapping->SetRangeTable.r01>`, the following methods apply

Int: Interpolate linearly between colors in colormap to find color at

   icol=((V-Vmin)/Vrange * Ncol) 

NN : Use the nearest color in the colormap. The index into the colormap of Ncol colors is given by 

   icol=floor((V-Vmin)/Vrange * Ncol) 

with icol clipped to the range 0 to Ncol-1

Dir: Use intensity values as indices into the colormap. In Dir mode, the intensity  clipping range is of no use.

   icol=floor(V) with clipping to the range 0 to Ncol-1

   .. _VolCont->Dset_Mapping->Cmp:

**Cmp**: Switch between available color maps. 


Switch between available color maps.
If the number of colormaps is too large
for the menu button, right click over
the 'Cmp' label and a chooser with a 
slider bar will appear.

More help is available via
ctrl+h while mouse is over the
colormap.

   .. _VolCont->Dset_Mapping->Cmp->New:

**New**: Load new colormap


Load new colormap.
Loaded map will replace a
pre-existing one with the
same name.

See ScaleToMap -help for 
details on the format of 
colormap file. The formats
are described in the section
for the option -cmapfile.

A sample colormap would be::

 0 0 1
 1 1 1
 1 0 0

saved into a cmap file called
cmap_test.1D.cmap

   .. _VolCont->Dset_Mapping->abs_T:

**abs_T**: Absolute threshold ON/OFF


Toggle Absolute thresholding.

OFF: Mask node color for nodes that have:   T(n) < Tscale

ON:  Mask node color for nodes that have:
| T(n) | < Tscale
where:

Tscale is the value set by the threshold scale.

T(n) is the node value in the selected threshold column (T). This value is seen in the second cell of the 'Value' table on the left side.

   .. _VolCont->Dset_Mapping->sym_I:

**sym_I**: Intensity range symmetry about 0 


Toggle Intensity range symmetry about 0. 

ON : Intensity clipping range is forced to go from  -val to val. This allows you to mimic AFNI's ranging mode.

OFF: Intensity clipping range can be set to your liking.

   .. _VolCont->Dset_Mapping->shw_0:

**shw_0**: Color masking of nodes with intensity = 0 


Toggle color masking of nodes with intensity = 0 

ON : 0 intensities are mapped to the colormap as any other values.

OFF: 0 intensities are masked, a la AFNI

   .. _VolCont->Dset_Mapping->RangeTable.c00:

**RangeTable.c00**: Full range in Dset


Full range of values in Dset.

   .. _VolCont->Dset_Mapping->RangeTable.r01:

**RangeTable.r01**: Range of values in intensity (I) column



   .. _VolCont->Dset_Mapping->RangeTable.r02:

**RangeTable.r02**: Range of values in threshold (T) column



   .. _VolCont->Dset_Mapping->RangeTable.r03:

**RangeTable.r03**: Range of values in brightness (B) column



   .. _VolCont->Dset_Mapping->RangeTable.c01:

**RangeTable.c01**: Minimum value in Dset column


Minimum value in Dset column.

   .. _VolCont->Dset_Mapping->RangeTable.c02:

**RangeTable.c02**: Node index at minimum


Node index at minimum.
Right click in cell to
have crosshair jump to
node's index.
Same as 'ctrl+j' or
an entry in the 'Node' cell
under Xhair Info block.

   .. _VolCont->Dset_Mapping->RangeTable.c03:

**RangeTable.c03**: Maximum value in Dset column


Maximum value in Dset column.

   .. _VolCont->Dset_Mapping->RangeTable.c04:

**RangeTable.c04**: Node index at maximum


Node index at maximum.
Right click in cell to
have crosshair jump to
node's index.
Same as 'ctrl+j' or
an entry in the 'Node' cell
under Xhair Info block.

