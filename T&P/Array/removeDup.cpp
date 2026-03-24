#include <iostream>
#include <vector>
#include<set>
#include<map>
using namespace std;

vector<int> removedup(vector<int> &arr ){
    set<int> st;
    vector<int> ans;
    for(int i= 0 ;i<arr.size();i++){
        if(st.find(arr[i]) == st.end()){
             ans.push_back(arr[i]);
             st.insert(arr[i]);
        }
    }
    return ans;
}

// using hash map;

map<int ,int> removeDuplicate(vector<int>&arr ){
   map<int ,int> mp;
    for(int i =0;i<arr.size();i++){
       mp[arr[i]]++;
    }
    return mp;
}

int main(){
    vector<int> arr = {1,2,4,1,2,6,4,1};
    //  vector<int> ans = removedup(arr);
    //  for(auto el : ans){
    //     cout<<el<<",";
    //  }

      map<int , int> ans2 = removeDuplicate(arr);
     for(auto el :ans2){
        cout<<el.first<<",";
     }
}