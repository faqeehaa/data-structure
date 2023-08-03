 # Bubble Sort
 
Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong order.This algorithm is suitable for small data setsIts average and worst case complexity are of (n^2) where n is the number of items.It is known as bubble sort, because with every complete iteration the largest element bubbles up towards the last place or the highest index just like a water bubble rises up to the water surface.

## working

Step 1 – Starting with the first element(index = 0), compare the current element with the next element of the array.

Step 2 – If the current element is greater than the next element of the array, swap them.

Step 3 – If the current element is less than the next element, move to the next element.

Step 4 – Repeat Step 1 till the list is sorted.

## Pseudocode

declare variables – i, j

loop : i = 0 to n – 1    // outer loop

loop : j = 0 to n -i- 1 // inner loop

if ( a[j]>a[j+1] ) then

swap a[j] & a[j+1]

end loop // inner loop

end loop // outer loop

