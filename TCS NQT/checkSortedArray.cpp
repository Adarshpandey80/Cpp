#include<iostream>
using namespace std;
#include<vector>

class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        bool assen = true;
        bool dec = true;
        for(int i =0 ;i<arr.size()-1.;i++){
            if(arr[i]>arr[i+1]){
                assen = false;
            }
             if(arr[i]<arr[i+1]){
                dec = false;
            }
        }
        return assen || dec;
    }
};