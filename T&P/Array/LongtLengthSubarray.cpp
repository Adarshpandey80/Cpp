#include <iostream>
#include <vector>
#include<algorithm>
#include<set>
using namespace std;

// find longest subarray with same element
int longestSubarray(vector<int> &arr , int n){
    int count = 1;
    int maxi = 1;
    for(int i = 1;i<n;i++){
        if(arr[i] == arr[i-1]){
            count++;
        } else {
            count = 1;
        }
        maxi = max(maxi , count);
    }
    return maxi;
}

// using set
int longestSubarrayM2(vector<int> &arr , int n){
    set<int> st;
    int count = 1;
    int maxi = 1;
    for(int i = 0;i<n;i++){
        if(st.find(arr[i]) == st.end()){
            st.insert(arr[i]);
            count++;
        } else {
            st.clear();
            st.insert(arr[i]);
            count = 1;
        }
        maxi = max(maxi , count);
    }
    return maxi;
}

int main(){
    vector<int> arr= {1,2,4,4,6,7,6};
    int n = arr.size();
    cout<<" longest subArray "<<longestSubarray(arr,n);
    cout<<" longest subArray M2 "<<longestSubarrayM2(arr,n);

}