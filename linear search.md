# data_structure
 

# Linear Search

In computer science, a linear search algorithm or sequential search is a method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.

## Working

starts at one end and goes through each element of a list until the desired element is found, otherwise the search continues till the end of the data set.

## Pseudocode

Take the input array arr[] from user.

Take element(x) you want to search in this array from user.

Set flag variable as -1

LOOP : arr[start] -> arr[end]

if match found i.e arr[current_postion] == x then

Print “Match Found at position” current_position.

flag = 0

abort

After loop check flag variable.

if flag == -1

print “No Match Found”

STOP
