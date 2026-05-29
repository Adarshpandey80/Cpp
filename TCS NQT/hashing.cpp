#include <iostream>
#include <vector>
#include<algorithm>
#include <map>
using namespace std;

void removeDuplicate(vector<int>&arr ){
    int n = arr.size();
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto el : mp){
        cout << el.first << " "<<el.second<<" "<<endl;
    }
}

// max diffrence btn two elements
int diffrence(vector<int> &arr ){
    int maxi = 0;   
    int n = arr.size();
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n;j++){   
            maxi = max(maxi , arr[j] - arr[i]);
        }
    }
    return maxi;        
}



int main(){
    vector<int> arr = {1,2,1,4,3,5,1,3,1,2};
    removeDuplicate(arr);
}