#include<iostream>
#include<vector>
using namespace std;
int sumOfelement(vector<int> &arr , int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    vector<int> arr = {3,4,2,5,6,1};
    int n = arr.size();
    cout<<"Sum of element is :"<<sumOfelement(arr,n);
}