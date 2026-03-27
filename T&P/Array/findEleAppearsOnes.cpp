#include <iostream>
#include <vector>
#include<map>
using namespace std;


vector<int> findSingleEle(vector<int> &arr, int n){
    map<int, int> mpp;
    vector<int> ans;
    for(int i = 0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto el : mpp){
        if(el.second ==1){
            ans.push_back(el.first);
        }
    }
    return ans;
}


int main(){
      vector<int> arr = {2,3,4,2,2,6,6,2,3,7,8,9};
    int n = arr.size();
    auto ans = findSingleEle(arr,n);
    for( auto el : ans){
        cout<<el<<" ";
    }
   
}