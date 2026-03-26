#include <iostream>
#include <vector>

using namespace std;

// using N natural Number
int findMissing(vector<int> &arr, int n){
    int sum = 0;
    int N = n+1;
    for(int i = 0 ;i<n;i++){
        sum+=arr[i];
    }
    int Nsum = N*(N+1)/2;;
    int num = Nsum - sum;
    return num;

}

// using hash

int findMissingM2(vector<int> &arr, int n){
    vector<int>  hash(n+1 ,0) ;
   for(int i = 0;i<n;i++){
       hash[arr[i]] = 1;
   }   
   for(int i = 1;i<=n;i++){
    if(hash[i] == 0)
       return i;
   }   
   
  return -1;
}


// using xor

int findMissingNum(vector<int>arr, int n){
     int xor1 = 0;
     int xor2 = 0;

     for(int i =0 ;i<n ;i++){
        xor1 ^= arr[i];
     
     }
     for(int i =1 ;i<=n+1 ;i++){
        xor2 ^= i;
     }
     return xor1^xor2;

}
   



int main(){
    vector<int> arr = {1,2,3,4,6,7};
    int n = arr.size();
    // cout<<"missing number is : "<<findMissing(arr,n); // using Sum of N natural Number
    // cout<<"missing number is : "<<findMissingM2(arr,n); // Using hash
    cout<<"missing number is : "<<findMissingNum(arr,n);  // using xor
}