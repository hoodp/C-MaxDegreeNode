#!/bin/bash
gcc maxDegree.c -o maxDegree

# Check if results file already exists.
if [ -n results ]; then
    
    # Clear out exisiting results.
    echo -n "" > results
fi

# Associative array that will store the result as a key, and 
# the number of times it was returned as the value. 
declare -A degrees

# Start looping through all of the files in the files folder.
for i in files/file*; do
    result=$(./maxDegree < $i)

    # Check if the key already exists. 
    if [ ${degrees[$result]}+1 ]; then

	# Increment the number of times the degree was returned. 
	degrees[$result]=$((${degrees[$result]}+1))
    else

	# Insert the key and set the initial value to 1. 
	degrees[$result]=1
    fi
done

# Output the number of times a max degree was returned to results file. 
for i in "${!degrees[@]}"; do
    printf "%d %d\n" $i ${degrees[$i]} >> results
done

# Create graph of the results using gnuplot. 
gnuplot maxDegree.gnuplot


