#include <iostream>
#include <vector>
using namespace std;

vector<int> findIntersection(vector<int> &arr1 , vector<int>&arr2 , int n1 ,int n2 ){
    vector<int> ans;
    vector<int> visited(n2 , 0); 
    for(int i = 0 ;i<n1 ;i++){
        for(int j = 0 ;j<n2;j++){
            if(arr1[i] == arr2[j] && visited[j]==0){
                  ans.push_back(arr1[i]);
                  visited[j] = 1;
                  break;
            }
         
        }
    }
    return ans;
}

// find intersection using two pointer

vector<int> findIntersectionM2(vector<int> &arr1 , vector<int>&arr2 , int n1 ,int n2 ){
    vector<int> ans;
     int i = 0 ;
     int j =0;
     while( i<n1 && j<n2){
         if(arr1[i]<arr2[j]){
           i++;
         }
         if(arr2[j]<arr1[i]){
           j++;
         }
         if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
         }
     }
    return ans;
}



int main(){
    vector<int> arr1 = {1,2,3,4,5,6};
    vector<int> arr2= {2,3,4,7,8};
    int n1 = arr1.size();
    int n2 = arr2.size();
    // auto ans = findIntersection(arr1,arr2,n1,n2);
    // for(auto el : ans){
    //     cout<<el<<" ";
    // }
    auto ans = findIntersectionM2(arr1,arr2,n1,n2);
    for(auto el : ans){
        cout<<el<<" ";
    }
}