# Batch script
echo Starting batch file
# Print "begintemplate Cell_A" on the 1st line
sed -i -r '/begintemplate Cell_A/ c\ ' ./Cell_template.hoc
sed -i -r '1s/^/begintemplate Cell_A\n/' ./Cell_template.hoc 

# Make sections public
sed -i -r '/public soma, dend, axon, somatic, axonal, basal/ c\ ' ./Cell_template.hoc 
sed -i -r '/create/ i\public soma, dend, axon, somatic, axonal, basal' ./Cell_template.hoc 

# Replace any existing endtemplate and put new one at last line
sed -i -r '/endtemplate Cell_A/ c\ ' ./Cell_template.hoc
sed -i -r '$ i\endtemplate Cell_A' ./Cell_template.hoc

# Replace celldef with init
sed -i -r '/celldef/ c\proc init() {' ./Cell_template.hoc

# Delete last line
sed -i -r '$ d' ./Cell_template.hoc


echo starting neuron
nrniv  SingleCell.hoc

echo starting plotting
python python_plot.py
