#include <iostream>
#include <vector>
using namespace std;

//  Num Of element grater then given El 
int countNum(vector<int> &arr , int n, int el){
    int count = 0;
    for(int i=0;i<n-1;i++){
        if(arr[i]>el){
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> arr = {3,4,7,5,8,1};
    int n = arr.size();
    int el = 4;
    cout<<" Num Of element grater then given El : "<<countNum(arr,n,el);
}