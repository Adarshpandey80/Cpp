#include <iostream>
#include <vector>
using namespace std;

vector<int> arrangeNuber(vector<int> &arr , int n){
    vector<int> ans(n);
    int posIndex = 0;
    int negIndex = 1;

    for(int i= 0;i<n ;i++){
        if(arr[i]>=0){
            ans[posIndex] = arr[i];
            posIndex+=2;
        } else {
            ans[negIndex] = arr[i];
            negIndex+=2;
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {2,3,-1,5-3,6,9,-4,-7};
    int n= arr.size();

    vector<int> ans = arrangeNuber(arr,n);

    for(auto el : ans){
        cout<<el<<" ";
    }
}