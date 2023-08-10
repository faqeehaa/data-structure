# include<iostream>
using namespace std;
//sorting algorithm


//merge function
void merge(int arr[],int l,int m, int r){
	int i = 1; //starting point of left array
	int j = m+1;   //starting point of right array
	int k = 1;  //starting point of temporary array
	int temp[5];
	while(j=m &&j<=r){
		if(arr[i]<=arr[j]){
			temp[k] =  arr[i];//arr[i] is smaller than arr[j]
			i++;
			k++;
		}
		else{
			temp[k] = arr[i]; //arr[j] is smaller than arr[i]
			i++;
			k++;
		}
	}
	while(i<=m){
		temp[k] = arr[i]; // copying all elements from left sub array to as it is
			i++;
			k++;
	}
	
	while(j<=r){
		temp[k] = arr[j]; // copying all elements from left sub array to as it is
			j++;
			k++;
	}
	for(int s=l;s<r;s++){
		arr[s] = temp[s];
	}
	
}


//merge sort function
void mergeSort(int arr[],int l,int r){
	if(l<r){
		int m = (l+r)/2;
		
	mergeSort(arr,l,m);
	
	mergeSort(arr,m+1,r);
	
	merge(arr,l,m,r);
	}
	
}

int main(){
	cout<<"Enter 5 elements in array:"<<endl;
	int myarr[5];
	for(int i =0;i<5;i++){
		cin>> myarr[i];
	}
	cout<<" "<<"Before merge sorting:"<<endl;
	for(int i =0;i<5;i++){
		 cout<<" "<< myarr[i];
	}
	// merge sort function call
	
	mergeSort(myarr,0,4);
	cout<<" After merge sorting:"<<endl;
	for(int i =0;i<5;i++){
		 cout<< myarr[i];
	}
	
	return 0;
}