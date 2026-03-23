#include<iostream>
#include<vector>

using namespace std;

pair<int , int > countEvenOdd(vector<int> &arr , int n){
    int evenel =0;
    int odd = 0;
    for(int i= 0 ;i<n;i++){
        if(arr[i]%2 == 0) {
            evenel++;
        }
        else odd++;
    }
    return {evenel , odd};
}

int main(){
    vector<int> arr = {3,4,2,5,6,12,7,11};
    int n = arr.size();
    pair<int ,int> ans = countEvenOdd(arr,n);
    cout<<"count even and odd :"<< ans.first<<" "<<ans.second;
    
}