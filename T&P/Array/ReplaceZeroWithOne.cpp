#include <iostream>
#include <vector>
using namespace std;

// replace Zero element with One using two pointer
vector<int> replaceZerotwopointer(vector<int> &arr, int n){
    int low = 0;
    int high = n-1;

    while(low <= high){
        if(arr[low] == 0){
            arr[low] = 1;
        } 
        if(arr[high] ==0){
            arr[high] = 1;
        }
        low++; 
        high--;
    }
    return arr;
}
int main(){
    vector<int> arr = {3,0,5,0,6,3,0};
    int n = arr.size();
    vector<int> ans = replaceZerotwopointer(arr, n);
    for(auto el : ans){
        cout<<el<<",";
    }
}
