#include <iostream>
#include <vector>
using namespace std;

// replace negative element with Zero using two pointer
vector<int> replaceNegtwopointer(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        if(arr[low] < 0){
            arr[low] = 0;
        } 
        if(arr[high] < 0){
            arr[high] = 0;
        }
        low++; 
        high--;
    }
    return arr;
}

// replace negative element with Zero using for loop
vector<int> replaceNeg(vector<int> &arr, int n){

    for(int i = 0;i<n;i++){
     if(arr[i]<0){
        arr[i] = 0;
     }
    }
    return arr;
}

int main(){
    vector<int> arr = {3,-1,5,-2,6,3,-4};
    int n = arr.size();
    vector<int> ans = replaceNegtwopointer(arr, n);
    for(auto el : ans){
        cout<<el<<",";
    }
    // vector<int> ans = replaceNeg(arr, n);
    // for(auto el : ans){
    //     cout<<el<<",";
    // }
}