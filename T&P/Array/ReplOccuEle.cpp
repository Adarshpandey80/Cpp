#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> findoccuranceandreplace(vector<int> & arr , int n , int m, int r){
    int count = 0;
    for(int i = 0 ; i<=n; i++){
      if(arr[i]==m){
        arr[i] = r;
      }
    }
    return arr;
}

// uisng two pointer 

vector<int> replaceOccu(vector<int> &arr , int n, int m , int r){
    int low = 0;
    int high = n-1;
    while(low<=high){
        if(arr[low] == m ) {
            arr[low] = r;
           
        }  if( arr[high] == m){
             arr[high] = r;
           
        } 
        low++;
        high--;
    }
    return arr;
}

int main(){
     vector<int> arr = {1,3,1,5,2,1,6,1};
    int n = arr.size();
    int m = 1;
    int r = 9;
//    vector<int> newarr = findoccuranceandreplace(arr,n,m,r);
   vector<int> newarr = replaceOccu(arr,n,m,r); // using two pointers 
    for(int st : newarr){
        cout<<st;
    }
}