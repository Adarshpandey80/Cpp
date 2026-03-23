#include<iostream>
#include<vector>
using namespace std;

vector<int> copyelement(vector<int> &arr , int n){
    vector<int> Newarr ;
    for(int i =0 ;i<n ;i++){
        Newarr.push_back(arr[i]);
    }
    return Newarr;
}

int main(){
    vector<int> arr = {2,1,3,1,4,5,6};
    int n = arr.size();
    vector<int> ans = copyelement(arr, n);
    for(auto el : ans){
        cout<<el<<",";
    }
}