#include <iostream>
#include <vector>
using namespace std;

  // find second largest element
int secondLargest(vector<int> &arr , int n){
    int low = 0 ;int high = n-1;
    for(int i = 0 ;i<n;i++){
        for(int j = i ;j<n;j++){
            if(arr[i]<arr[j]){
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }
    }
    return arr[1];
}
  // find second smallest number
int secondSmallest(vector<int> &arr , int n){
    int low = 0 ;int high = n-1;
    for(int i = 0 ;i<n;i++){
        for(int j = i ;j<n;j++){
            if(arr[i]<arr[j]){
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }
    }
    return arr[n-2];
}

// 2nd Method to find largest

int secondlargest(vector<int> &arr){
    int largest = INT_MIN;
    int second = INT_MIN;
    for(int i = 0; i<arr.size() ; i++){
        if(arr[i]>largest){
            second = largest;
            largest = arr[i];
        } else if(arr[i]>second && arr[i]!=largest){
            second = arr[i];
        }
    }
    return second;
}

// find second smallest 

int secondsmallest(vector<int> &arr){
    int smallest = INT_MAX;
    int second = INT_MAX;
    for(int i = 0; i<arr.size() ; i++){
        if(arr[i]<smallest){
            second = smallest;
            smallest = arr[i];
        } else if(arr[i]<second && arr[i]!=smallest){
            second = arr[i];
        }
    }
    return second;
}

int main(){
     vector<int> arr = {3,1,5,4,6,7,2};
    int n = arr.size();
    // cout<<"second largest number is :"<<secondLargest(arr,n);
    // cout<<"second Smallest number is :"<<secondSmallest(arr,n);

    // cout<<"second largest number is :"<<secondlargest(arr);
    cout<<"second Smallest number is :"<<secondsmallest(arr);

}