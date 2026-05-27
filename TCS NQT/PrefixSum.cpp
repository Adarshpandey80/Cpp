

#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

// divide array inot two equal parts

int isDevide(vector<int> &arr){
    int totalsum = 0;
    for(int i = 0;i<arr.size();i++){
        totalsum+=arr[i];
    }
    int prefixsum = 0;
    for(int i = 0;i<arr.size();i++){
      prefixsum+=arr[i];
      int sum = totalsum - prefixsum;
      if(sum==prefixsum){
        return 1;
      }
    }
    return 0;
}
// longest subarraySum k elements
int longestSum(vector<int>&arr , int k){
    int l = 0;int r = 0; int maxsum = 0; int sum = 0;
    while(r<k){
        sum += arr[r];
        maxsum = sum;
        r++; 
    }
    while(r<arr.size()){
        sum = sum - arr[l];
        l++;
        sum += arr[r];
        r++;
        maxsum = max(maxsum ,sum );
    }
    return maxsum;
}

// Kadane's Algorithm (longest sum contiguous subarray)

int longsum(vector<int> &arr){
    int sum = 0; int maxsum = 0;
    for(int i =0 ;i<arr.size();i++){
        sum+=arr[i];
        maxsum = max(maxsum , sum);
        if(sum<0){
            sum = 0;
        }
    }
    return maxsum;
}


// max diffrence btn two elements
int diffrence(vector<int> &arr ){
    int maxi = 0;
    int n = arr.size();
    vector<int> suffix(n);
    suffix[n-1] = arr[n-1];
    for(int i = n-1 ; i>=0;i--){
       suffix[i] = max(arr[i] , suffix[i+1]);
    }
    for(int i = 0 ;i<n ;i++){
        maxi = max(maxi , suffix[i]-arr[i]);
    }
    return maxi;
}

int main(){
    vector<int> arr = {3,4,-2,5,8,20,-10,8};
    cout<<isDevide(arr);
}