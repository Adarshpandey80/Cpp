#include <iostream>
#include <vector>
#include<map>
using namespace std;

// find Majority Element 
int findMajority(vector<int> &arr , int n){
    map<int ,int> mpp;
    for(int i =0 ;i<n ;i++){
        mpp[arr[i]]++;
    }
    int element = INT_MIN;
    for(auto el : mpp){
        if(el.second> element){
            element = el.first;
        }
    }

    return element;
}

// find Majoriry element grater then N/2;

int findMajorityM2(vector<int> &arr , int n){
    map<int ,int> mpp;
    for(int i =0 ;i<n ;i++){
        mpp[arr[i]]++;
    }
    
    for(auto el : mpp){
        if(el.second>n/2){
            return el.first;
        }
    }

    return -1;
}

int main(){
    vector<int> arr = {2,3,4,2,2,6,6,2,3,7,8,9};
    int n = arr.size();
    cout<<" majority element is "<<findMajority(arr,n);
    cout<<" majority element is "<<findMajorityM2(arr,n); // greater then N/2;
}