#include <iostream>
#include <vector>
using namespace std;

bool checkSortedArr(vector<int> &arr , int n){
    for(int i = 0;i<n-1;i++){
       
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}


int main(){
    vector<int> arr = {1,2,3,4,5,7};
    int n = arr.size();
    cout<<checkSortedArr(arr,n);
}