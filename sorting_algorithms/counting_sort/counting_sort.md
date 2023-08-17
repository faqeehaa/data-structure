 # Counting sort
 Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array.The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array. This mapping is done by performing arithmetic calculations on those counts to determine the positions of each key value(unique element) in the output sequence.

 Its running time is linear in the number of items and the difference between the maximum and minimum key values, so it is only suitable for direct use in situations where the variation in keys is not significantly greater than the number of items. It is often used as a subroutine in another sorting algorithm, radix sort, that can handle larger keys more efficiently.
Because counting sort uses key values as indexes into an array, it is not a comparison sort, and the Ω(n log n) lower bound for comparison sorting does not apply to it.

## Complexity
Time Complexity:

 O(n+k) where n is the number of elements in input array and k is the range of input.
Auxiliary Space: 

O(n+k)
## Working
Step 1 – Take input array & range(no of unique integer values involved)


Step 2 – Create the output array of size same as input array. Create count array with size equal to the range & initialize values to 0.


Step 3 – Count each element in the input array and place the count at the appropriate index of the count array


Step 4 – Modify the count array by adding the previous counts(cumulative). The modified count array indicates the position of each object/element in the output array.


Step 5 – Output each object from the input array into the sorted output array followed by decreasing its count by 1.


Step 6 – Print the sorted output array
## Pseudocode

take input_array[size]

create output_array[size]

take range (or no of unique elements)

create count_array[range] & initialize all values to 0
for(int i=0 to i<range)

count_array[i] = 0

Count each element & place it in the count_array

for(int i = 0 to i<size)

++count_array[input_array[i]]

Modify count_array[] to store previous counts (cumulative)

for(int i = 1 to i < range)

count_array[i]=count_array[i]+count_array[i-1]

Place elements from input_array[] to output_array[] using this count_array[] that has the actual positions of elements
for(int i=0 to i<size)

output_array[–count_array[input_array[i]]] = input_array[i]

Transfer sorted values from output_array[] to input_array[]

for(i=0 to i<size)

input_array[i]=output_array[i]
