#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int searchEl(vector<int> &arr , int n , int tar){
    for(int i = 0 ; i<n;i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {3,4,2,5,6,1};
    int n = arr.size();
    int tar = 2;
    cout<<"search element index :"<<searchEl(arr,n , tar);
}