#include<iostream>
#include<vector>
using namespace std;

pair<vector<int> , vector<int>> SeprateEvenOdd(vector<int> &arr , int n){
    vector<int> ansEven ;
    vector<int> ansOdd ;
    for(int i= 0 ;i<n;i++){
        if(arr[i]%2 == 0) {
            ansEven.push_back(arr[i]);
        }
        else ansOdd.push_back(arr[i]);
    }
    return  {ansEven , ansOdd};

}

int main(){
    vector<int> arr = {3,4,2,5,6,12,7,11};
    int n = arr.size();
    pair<vector<int> , vector<int>> ans = SeprateEvenOdd(arr,n);
     cout<< "even : ";
    for(auto even : ans.first){
        cout<<even;
    }
  cout<<"odd : ";
    for(auto odd : ans.second){
        cout<<odd;
    }
    
}