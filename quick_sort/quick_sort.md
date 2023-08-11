 # Quick Sort Algorithm
 Quick sort is divide and conquer algorithm.It oick an element as pivot and partitions the given array around the pivot.There are many different versions of quick sort that pick pivot in different 
 ways. It divides input array in two partitions, calls itself for the two partitions(recursively) and performs in-place sorting while doing so. A separate partition() function is used for performing this in-place sorting at every iteration. Quick sort is one of the most efficient sorting algorithms.

 Time Complexity: θ(nlog(n))
 Space Complexity: O(log(n))

 ## Working 
There are 2 Phases (3 major steps) in the Quick Sort Algorithm 

Division Phase:

 Divide the array(list) into 2 halves by finding the pivot point to perform the partition of the array(list).
The in-place sorting happens in this partition process itself.

Recursion Phase:

Call Quick Sort on the left partition (sub-list)
Call Quick Sort on the right partition (sub-list)

## Quick Sort Algorithm(Pseudo Code)

QuickSort(arr[],s,e){

     if(s<e)
     {
          p = partition(arr[],s,e)
          QuickSort(arr[],s,(p-1))
          QuickSort(arr[],(p+1),e)
     }
}


## Quick Sort Partition Function(Pseudo Code) 
    QuickSort(arr[],s,e){
         pivot = arr[e]
         pIndex = s
         for(i=s to e-1){
              if(arr[i]<=pivot){
                   swap(arr[i],arr pIndex[])
                   pIndex++
              }
              swap(arr[i],pIndex)
              return pIndex
         }