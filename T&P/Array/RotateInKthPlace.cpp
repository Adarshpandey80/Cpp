#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

vector<int> rotateinleft(vector<int> &arr , int n , int k){
      int low = 0; int high = k;
      while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high ] = temp;
        low++ ;high--;
      }
      return arr;
}

// rotate array from kth place 

vector<int> rotateinRight(vector<int> &arr , int n , int k){
      int low = k; int high = arr.size()-1;
     
      while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high ] = temp;
        low++ ;high--;
      }
      return arr;
}

int main(){
    vector<int> arr = {3,2,5,3,1,6,7,9,5};
    int n = arr.size();
    int k = 4;
    // vector<int> ans = rotateinleft(arr , n,k);
    // for(auto el :ans){
    //     cout<<el<<",";
    // }
    vector<int> ans = rotateinRight(arr , n,k);
    for(auto el :ans){
        cout<<el<<",";
    }
}