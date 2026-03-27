#include <iostream>
#include <vector>
using namespace std;

int   countSubArray(vector<int> &arr , int n , int k){
    int count = 0;
  
    for(int i = 0;i<n;i++){
          int sum = 0;
        for(int j= i ; j<n ;j++){
            sum += arr[j];
            if(sum == k) count++;
            
        }
    }
    return count;
}






int main(){
    vector<int> arr = {3,2,6,5,4,1};
    int n = arr.size();
    int k = 5;
    cout<<" the count of sub array "<<countSubArray(arr,n , k); // print only count 
   

    // vector<pair<int,int>> ans = countSubArrayandPrint(arr,n,sum); // also print pairs 
    // for(auto el : ans){
    //     cout<<el.first<<" "<<el.second<<endl;
    // }
}