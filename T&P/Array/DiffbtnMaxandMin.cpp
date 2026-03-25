#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int findMax(vector<int> & arr ,int n){
    int Maxi = arr[0];
    for(int i= 0; i<n ;i++){
        if(arr[i]>Maxi){
            Maxi = arr[i];
        }
    }
    return Maxi;
}

int findMin(vector<int> & arr ,int n){
    int Min = arr[0];
    for(int i= 0; i<n ;i++){
        if(arr[i]<Min){
            Min = arr[i];
        }
    }
    return Min;
}

int diffMaxandMin(vector<int> &arr , int n){
    int maxi = findMax(arr, n);
    int mini = findMin(arr, n);
    int ans = maxi - mini;
    return ans;
}

int main(){
    vector<int> arr = {3,2,5,7,1,9};
    int n = arr.size();
    cout<<" Diff Btn Max and Min Element :"<<diffMaxandMin(arr,n);
}