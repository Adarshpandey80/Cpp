#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// find maximum sum of subarray better solution

int maxiSubArray(vector<int>&arr, int n){
    int maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        int sum = 0;
        for(int j =i ;j<n;j++){
           sum += arr[j];
           maxi = max(sum , maxi);
        }
    }
    return maxi;
}

// find maximum sum of subarray kadane's  algorithum

int maxiSubArray(vector<int>&arr, int n){
    int maxi = INT_MIN;
    int sum = 0;
    for(int i = 0;i<n;i++){
         sum += arr[i];
         if(sum>maxi){
            maxi = sum;
         }
         if(sum<0){
            sum = 0;
         }
    }
    return maxi;
}
int main(){
    vector<int> arr = {-2,-3,4,-1,-2,1,5,-3};
    int n = arr.size();
    cout<<"maxi sum sunarray "<<maxiSubArray(arr,n);
}