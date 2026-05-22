#include<iostream>
using namespace std;
#include<vector>

class Solution {
  public:
    string equilibrium(vector<int> &arr) {
        // code here
    int total = 0;
    for(int i = 0;i<arr.size();i++){
        total+=arr[i];
        
    }
    
    
    int leftSum = 0;
    for(int i=0;i<arr.size();i++){
      int  rightSum = total - leftSum - arr[i];
        if(leftSum == rightSum){
            return "true";
            
        }
        leftSum += arr[i];
    }
    return "false";
    }
};