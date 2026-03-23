#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findoccurance(vector<int> & arr , int n , int m){
    int count = 0;
    for(int i = 0 ; i<=n; i++){
      if(arr[i]==m){
        count++;
      }
    }
    return count;
}

int main(){
     vector<int> arr = {1,3,1,5,2,1,6,1};
    int n = arr.size();
    int m = 1;
    cout<<"find occurance of element "<<findoccurance(arr, n , m);
}