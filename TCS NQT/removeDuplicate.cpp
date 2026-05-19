#include<iostream>
#include<set>
#include<map>
using namespace std;

// using set;
// vector<int> removeDup(vector<int> &arr){
//     set<int> st;
//     vector<int> ans;
//     for(int i =0 ;i<arr.size() ;i++){
//         if(st.find(arr[i]) == st.end()){
//           ans.push_back(arr[i]);
//           st.insert(arr[i]);
//         }
//     }
//     return ans;
// }

// using map;

map<int ,int > removeDupli(vector<int> &arr){
    map<int ,int> mpp;
    
    for(int i =0 ;i<arr.size();i++){
        mpp[arr[i]]++;
    }
   return mpp;
}

int main(){
    vector<int> arr = {3,4,5,3,6,4,7,3};
    map<int,int> ans = removeDupli(arr);
    for (auto el : ans){
       cout<<el.first;
    }
}