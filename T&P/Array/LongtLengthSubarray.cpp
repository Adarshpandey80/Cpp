#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int longestSubarray(vector<int> &arr , int n){
    int longest = INT_MIN;
    for(int i =0 ;i<n;i++){
        int sum = 0;
        for(int j =i ;i<n;j++){
            if(arr[j]!=arr[j+1]){
                sum +=arr[j];
                longest = max(longest , sum);
            }
        }
    }
    return longest;
}

int main(){
    vector<int> arr= {1,2,4,4,6,7,6};
    int n = arr.size();
    cout<<" longest subArray "<<longestSubarray(arr,n);
}