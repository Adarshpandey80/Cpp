#include <iostream>
#include <vector>
using namespace std;

bool compaireArray(vector<int> &arr1 , vector<int> &arr2){
     int n1 = arr1.size();
    int n2 = arr2.size();
    if(n1!=n2) return false;
    int i =0;
    while(i<n1 ){
           if(arr1[i] != arr2[i])  return false;
           i++;
    }
    return true;
}

  int main(){
        vector<int> arr1 = {7, 9, 11, 6, 8};
        vector<int> arr2 = {7, 9, 11, 6,8 };
        cout<<compaireArray(arr1, arr2);
  }