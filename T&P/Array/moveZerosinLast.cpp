#include <iostream>
#include <vector>
using namespace std;

vector<int> moveZeros(vector<int> &arr , int n){
    vector<int> ans;
    for(int i = 0;i<n;i++){
        if(arr[i]!=0){
            ans.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(arr[i]==0){
            ans.push_back(arr[i]);
        }
    }
    return ans;
}


int main(){
    vector<int> arr = {2,0,1,4,0,5,6,0,7,0};
    int n = arr.size();
    auto ans =  moveZeros(arr,n);
  for(auto el : ans){
    cout<<el<<" ";
  }
}