#include <iostream>
#include <vector>
#include<map>
using namespace std;

  map<int , int> countfreq(vector<int> &arr ){
    map<int ,int> mp;
    for(int i =0 ;i<arr.size() ;i++){
        mp[arr[i]]++;
    }
    return mp;
}

int main(){
     vector<int> arr = {1,2,4,1,2,6,4,1};
     auto ans = countfreq(arr);
     for(auto el : ans){
        cout<<el.first<<"-->"<<el.second<<endl;
     }
}