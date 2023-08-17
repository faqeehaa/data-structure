 # Merge sort algorithm
 Merge sort is a divide and conquer algorithm.It divides input array in two halves,calls itself for the two halves (recursively)
 and then merges the two sorted halves.
 A separate merge()function is used for merging two halves.
 Time complexity in merge sort algorithm is O(nlog(n))

 ## Merge sort algorithm (WORKING)

 mergeSort(arr[],l,r){

   step 1. find the middle point to divide array in to two halves

     middle m = (l+r)/2

                                                     (Division)
   step 2. call merge sort for first half

        mergeSort(arr,l,m)

   step 3. call merge sort for second half

       mergeSort(arr,m+1,r)
                                                    (Recursion)

step 4. merge the 2 halves sorted in step 2 & 3                                    

     merge(arr,l,m,r)
                                                    (Merging)
 }

 int arr[5] = { 7,3,6,5,9}

 Division Phase – Divide the array(list) into 2 halves by finding the midpoint of the array(list).

Midpoint (m) = (left + right)/ 2

Here left is the starting index & right is the last index of the array(list)

Recursion Phase

Call Merge Sort on the left sub-array (sub-list)
Call Merge Sort on the right sub-array (sub-list)

Merge Phase 

Call merge function to merge the divided sub-arrays back to the original array.Perform sorting of these smaller sub arrays before merging them back.
## Merge Sort Algorithm(Pseudo Code)

mergeSort(arr[],l,r)  //arr is array, l is left, r is right

{

   if(l<r)

      {

      midpoint = (l+r)/2

      mergeSort(arr,l,m)

      mergeSort(arr,m+1,r)

      merge(arr,l,m,r)
   }

        }
