#include <iostream>
#include <vector>
using namespace std;
  // sort element in Assending order
vector<int> sortAss(vector<int> &arr , int n){
    int low = 0 ;int high = n-1;
    for(int i = 0 ;i<n;i++){
        for(int j = i ;j<n;j++){
            if(arr[i]>arr[j]){
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }
    }
    return arr;
}
  // sort element in Descending order
vector<int> sortDes(vector<int> &arr , int n){
    int low = 0 ;int high = n-1;
    for(int i = 0 ;i<n;i++){
        for(int j = i ;j<n;j++){
            if(arr[i]<arr[j]){
              int temp = arr[i];
              arr[i] = arr[j];
              arr[j] = temp;
            }
        }
    }
    return arr;
}

vector<int> sortass(vector<int> &arr , int n){
    sort(arr.begin(), arr.end());
    return arr;
}
vector<int> sortdesc(vector<int> &arr , int n){
    sort(arr.begin(), arr.end() , greater<int>());
    return arr;
}

int main(){
    vector<int> arr = {3,1,5,4,6,7,2};
    int n = arr.size();
    // vector<int> ans = sortAss(arr, n);
    // for(auto el : ans){
    //     cout<<el<<",";
    // }
    // sort element in Descending order
    // vector<int> ans1 = sortDes(arr, n);
    // for(auto el : ans1){
    //     cout<<el<<",";
    // }


    // vector<int> ans2 = sortass(arr, n);  // sort assending using STL
    // for(auto el : ans2){
    //     cout<<el<<",";
    // }

    vector<int> ans3 = sortdesc(arr, n);  // sort descending using STL
    for(auto el : ans3){
        cout<<el<<",";
    }

}