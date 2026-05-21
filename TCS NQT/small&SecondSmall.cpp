#include<iostream>
using namespace std;
#include<vector>
vector<int> smallAndSecondSmall(vector<int> &arr)
{
   int small = INT_MAX;
   int secondSmall = INT_MAX;
   for(int i = 0;i<arr.size();i++){
    if(arr[i]<small){
        secondSmall = small;
        small = arr[i];
    } else if(arr[i]<secondSmall && arr[i] != small){
        secondSmall = arr[i];
    } else if(secondSmall == INT_MAX){
        return {-1};
    }
   }
   return {small , secondSmall};
}