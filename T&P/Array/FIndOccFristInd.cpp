#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findfristindex(vector<int> arr , int m){
    int n = arr.size();
    int index = INT_MAX;
    for(int i=0 ; i<n ;i++){
        if(arr[i]==m){
         index = min(i , index);
        }
    }
    return index;
}

// find min index of Occurrance element when element is not given 

int findfristelementindex(vector<int> &arr ){
    int maxFreq =0;
    int element ;
   
    int index = INT_MAX;
    int n = arr.size();
    unordered_map<int, int> mp;
    for(int i = 0 ;i<n;i++){
        mp[arr[i]]++;
    }
   for(auto el : mp){
    if(el.second>maxFreq){
        maxFreq = el.second;
        element = el.first;
    }
   }
   for(int i = 0;i<n ;i++){
       if(arr[i] == element){
        index = min(i , index);
       }
   }
   return index;
}

int findlastindex(vector<int> arr , int m){
    int n = arr.size();
    int index = INT_MIN;
    for(int i=0 ; i<n ;i++){
        if(arr[i]==m){
         index = max(i , index);
        }
    }
    return index;
}

int main(){
    vector<int> arr = { 3,4,1,3,1,5,2,1,6,1};
    int m = 1;
    // cout<<" frist index of occurance  element "<<findfristindex(arr , m);
    // cout<<" last index of occurance  element "<<findlastindex(arr , m);
    cout<<" frist index of occurance  element  "<<findfristelementindex(arr );

}