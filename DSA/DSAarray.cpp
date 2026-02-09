#include<iostream>
using namespace std;

// largest element in the array

int larget(int arr[] ,int n){
    int larg = arr[0];
    for(int i= 1;i<n;i++){
        if(arr[i]>larg){
            larg = arr[i];
        }
    }
    return larg;
}

int main(){ 
int arr[5] = {1,2,3,4,5};
int sz = 5;
cout<<"the largest element in the array is "<<larget(arr,sz)<<endl;
}

// second largest and second smallest element in the array 

int secondLargest(int arr[] ,int n){
    int largest= arr[0];
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        } 
        else if(arr[i]<largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    return slargest;
}

int secondSmallest(int arr[] ,int n)
{
    int smallest = arr[ 0];
    int ssmallest = INT16_MAX;
    for(int i=i;i<n;i++){
        if(arr[i] < smallest){
            ssmallest = smallest;
            smallest = arr[i];
        } else if(arr[i]!=smallest && arr[i] < ssmallest){
            ssmallest = arr[i];
        }
    } 
    return ssmallest;
}
int main(){ 
int arr[5] = {1,2,3,4,5};
int sz = 5;
cout<<"the largest element in the array is "<<larget(arr,sz)<<endl;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int sz= 5;
    cout<<"the second largest element in the array is "<<secondLargest(arr,sz)<<endl;
    cout<<"the second smallest element in the array is "<<secondSmallest(arr,sz)<<endl;
}

// check if the array is sorted or not 

int isSorted(int arr[] , int n){
    for(int i=1 ; i<n;i++){
        if(arr[i] >= arr[i-1]){
            continue;
        } else {
            return false;
        }
    } 
    return true;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int sz = 5;
    if(isSorted(arr,sz)){
        cout<<"the array is sorted"<<endl;
    } else {
        cout<<"the array is not sorted"<<endl;
    }
    return 0;
}

// Remove duplicate from the array 

int removeDuplicate(int arr[] , int n){
     int i=0;
     for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1] = arr[j];
            i++;
        }
     }
     return i+1;
}


int main(){ 
int arr[5] = {1,2,3,4,5};
int sz = 5;
cout<<"remove duplicte  in the array "<<removeDuplicate(arr,sz)<<endl;
   
}