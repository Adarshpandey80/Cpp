#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findMax(vector<int> & arr ,int n){
    int Maxi = arr[0];
    for(int i= 0; i<n ;i++){
        if(arr[i]>Maxi){
            Maxi = arr[i];
        }
    }
    return Maxi;
}
// using STL
int MaxEl(vector<int> &arr ,int n){
    int Maxi = INT_MIN;
     for(int i =0 ;i<n ;i++){
        Maxi = max(arr[i] , Maxi);
     }
     return Maxi;
}

int findMin(vector<int> & arr ,int n){
    int Min = arr[0];
    for(int i= 0; i<n ;i++){
        if(arr[i]<Min){
            Min = arr[i];
        }
    }
    return Min;
}

// using STL
int MinEl(vector<int> &arr ,int n){
    int Mini = INT_MAX;
     for(int i =0 ;i<n ;i++){
        Mini = min(arr[i] , Mini);
     }
     return Mini;
}
int main(){
    vector<int> arr = {3,4,2,5,6,1};
    int n = arr.size();
    // cout<<"Max Element of the array :"<<findMax(arr,n);
    // cout<<"Max Element of the array :"<<MaxEl(arr,n); // using STL;

    // cout<<"Min Element of the array :"<<findMin(arr,n);   
    cout<<"Min Element of the array :"<<MinEl(arr,n);    // uisng stl;
         
}