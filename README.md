# data_structure

#  Binary search

Binary search algorithm falls under the category of interval search algorithms. This algorithm is much more efficient compared to linear search algorithm. Binary search only works on sorted data structures. This algorithm repeatedly target the center of the sorted data structure & divide the search space into half till the match is found.
The time complexity of binary search algorithm is O(Log n).

##  Working of binary search
1. Search the sorted array by repeatedly dividing the search interval in half
2. Begin with an interval covering the whole array.
3. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half.
4. Otherwise narrow it to the upper half.
5. Repeatedly check until the value is found or the interval is empty.
## Pseudocode
Take input array, left, right & x

START LOOP – while(left greater than or equal to right)

mid = left + (right-left)/2

if(arr[mid]==x) then

return m

else if(arr[mid] less than x) then

left = m + 1

else

right= mid – 1

END LOOP

return -1
#  Examples:
# include<iostream>

using namespace std;


int binarySearch(int arr[],int left,int right,int x){
	
	while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x) {
      return mid;
    } else if (arr[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;

}

int main(){

	int num;

	int myarr[10];

	int output;

	cout<<"Enter 10 integers in assending order:"<<endl;

	for(int i = 0;i<10;i++){

		cin>>myarr[i];

	}
	
	cout<<"Enter 1 integer that you want to search :"<<endl;

	cin>>num;

	output = binarySearch(myarr, 0, 9, num);


  if (output == -1) {

    cout << "No Match Found" << endl;

  } else {

    cout << "Match found at position: " << output << endl;

  }
	return 0;

}

