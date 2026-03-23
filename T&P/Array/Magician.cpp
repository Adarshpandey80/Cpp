#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int miniElement(vector<int> &arr , int n){
    int sum = 0;
    int mini = INT_MAX;
    for(int i= 0;i<n;i++){
        sum+= arr[i];
    }
    for(int i= 0;i<n;i++){
        int newSum = sum;
        if((newSum-arr[i])%7 == 0){
           mini = min(arr[i] , mini);
        }
        newSum = sum;
    }
    return mini; // return minimum element 
}
int miniElementIndex(vector<int> &arr , int n){
    int sum = 0;
    int index = -1;
    int mini = INT_MAX;
    for(int i= 0;i<n;i++){
        sum+= arr[i];
    }
    for(int i= 0;i<n;i++){
       
        if((sum-arr[i])%7 == 0){
           if(arr[i]<mini){
            mini = arr[i];
            index =i;

           }
        }
        
    }
    return index; // return minimum Index
}

int main(){
    vector<int> arr = {14,7,8,3,6,2,4,5};
    int n = arr.size();
    // cout<<"minimum element "<<miniElement(arr, n);
    cout<<"minimum element index "<<miniElementIndex(arr, n);
}