#include <iostream>
#include <vector>
using namespace std;

pair<int , int> findSumevenOdd(vector<int> &arr,int n){
    int evenSum = 0;
    int OddSum = 0;
    for(int i = 0;i<n ;i++){
        if(arr[i]%2==0){
            evenSum+=arr[i];
        } else{
            OddSum+= arr[i];
        }
    } 
    return {evenSum , OddSum};
}

int main(){
        vector<int> arr = {4,2,5,7,1,8,9,5};
     int n = arr.size();
     auto ans = findSumevenOdd(arr,n);
     cout<<ans.first<<" "<<ans.second;
}