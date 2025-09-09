// merge sort using recursion

#include<iostream>
#include<vector>
using namespace std;
void  merge(vector<int> &arr , int st, int end , int mid){
        vector<int> temp ;
        int i=st, j=mid+1;
        while(i<= mid && j<= end){
            if(arr[i]<= arr[j]){
                temp.push_back(arr[i]);
                i++;
            } else{
                temp.push_back(arr[j]);
                j++;
            }
        }

        while(i<=mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx = 0 ; idx<temp.size(); idx++){
            arr[st + idx] = temp[idx];
        }
  }


void mergesort(vector<int> &arr , int st, int end){
    if(st<end){
        int mid = st + (end-st)/2;
        mergesort(arr, st ,mid);// left part
        mergesort(arr, mid+1 , end);// right part
        merge(arr, st ,end, mid );
    }
}



int main(){
    vector<int> arr = {38,27,43,3,9,82,10};
    mergesort(arr, 0 , arr.size()-1);
    for(auto i : arr){
        cout<<i<<" ";   
    }
}