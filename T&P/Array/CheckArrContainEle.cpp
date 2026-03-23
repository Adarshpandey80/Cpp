#include<iostream>
#include<vector>

using namespace std;

bool checkElement(vector<int> &arr , int n , int el){
    for(int i =0 ; i<n ;i++){
        if(arr[i] == el) return true;
    }
    return false;
}

int main(){
    vector<int> arr = {3,4,2,5,6,1};
    int n = arr.size();
    int el = 7;
    cout<<"check element  :"<<checkElement(arr,n , el);
}