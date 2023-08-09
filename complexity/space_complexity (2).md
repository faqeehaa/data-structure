  # Space complexity

 The space complexity of an algorithm or a computer program is the amount of memory space required to solve an instance of computational problem as a function of size of the input.It is the memory required by an algorithm to execute a program and produce its output.
 Similar to time complexity space complexity is expressed in Big 
 notation like O(n),O(nlog(n)),O(n^2).Where n is the input size in units of bits needed to represent yhe input.
 ## Auxiliary space

 is the temporary space (excluding the input) allocated by your algorithm to solve the problem,with respect to input size.
 space complexity includes both auxiliary space and space used by input

        Space complexity = Input size + Auxiliary space 

 ###        Algorithm  addition of 2 numbers

 function add(n1,n2){

   sum = n1+n2;
   return sum
 }

 ###  sum of all elements in array
     function addArr(arr[],N){
         sum = 0;
         for(i =0 to N){
           sum  = sum+arr[i];
         }

         print sum;
     }
###  factorial of a number
 
int fact = 1;
for(i=0;i>N;==i){
  fact* = 1;
}
return fact;
###  factorial of a number(recursive)
   if(n<=1>){
     return 1;
   }
        else {
          return(n*factorial2(n-1);)
        }