#include<iostream>
#include<vector>
using namespace std;

vector<int> shiftarrayleft(vector<int> &arr ){
    int fristEl = arr[0];
    for(int i = 0 ;i<arr.size();i++){
        arr[i] = arr[i+1];
    }
    arr[arr.size()-1] = fristEl;
    return arr;
}
vector<int> shiftarrayright(vector<int> &arr ){
    int n = arr.size();
    int lastEl = arr[n-1];
    for(int i = n ;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = lastEl;
    return arr;
}

int main(){
    vector<int> arr = {3,2,4,5,2,1,7};
    // vector<int> ans = shiftarrayleft(arr);
    vector<int> ans = shiftarrayright(arr);
    for(auto el : ans){
        cout<<el<<",";
    }
    
}