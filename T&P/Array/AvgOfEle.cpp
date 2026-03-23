#include<iostream>
#include<vector>
using namespace std;
float Avg(vector<int> &arr ,int n){
     float sum = 0;
     int count = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        count ++;
    }
    return sum/count;
}
int main(){
    vector<int> arr = {3,4,2,5,6,1};
    int n = arr.size();
    cout<<"Sum of element is :"<<Avg(arr,n);
}