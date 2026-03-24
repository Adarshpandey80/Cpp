#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> &arr ){
    int low = 0 ;
    int hight = arr.size()-1;

    while(low<hight){
       int temp = arr[low];
       arr[low] = arr[hight];
       arr[hight] = temp;
        low++ ; hight--;
    }
    return arr;
}

int main(){
    vector<int> arr = {3,2,5,3,1,6};
    vector<int> ans = reverse(arr);
    for(auto el :ans){
        cout<<el<<",";
    }
}