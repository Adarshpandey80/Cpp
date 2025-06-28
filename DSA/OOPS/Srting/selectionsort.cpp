//selection Sort
#include<iostream>
using namespace std;

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){//i=0,1
		int minIndex=i;//3
		for(int j=i+1;j<n;j++){//j=2,3,4
			if(arr[j]>arr[minIndex]){
				minIndex=j;
			}
		}
			int t;
			t=arr[i];
			arr[i]=arr[minIndex];
			arr[minIndex]=t;
		
	}
}

int main(){
	int arr[]={100,10,90,20,70};
	cout<<"\nBefore Sorting \n";
	for(int i=0;i<5;i++){
		cout<<"\t"<<arr[i];
	}
	selectionSort(arr,5);
	cout<<"\nAfter  Sorting Selection Sort \n";
	for(int i=0;i<5;i++){
		cout<<"\t"<<arr[i];
	}
	return 0;
}
