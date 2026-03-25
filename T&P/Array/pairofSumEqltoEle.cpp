#include <iostream>
#include <vector>
using namespace std;

pair<int , int> pairOfelement(vector<int> &arr , int n , int el){
    int low = 0;
    int high = n-1;
    while (low<=high)
    {
        if(arr[low]+arr[high] == el){
            return {arr[low] , arr[high]};
        }
        low++;
        high--;
    }
    return {0 ,0};
    
}

int main(){
      vector<int> arr = {3,2,5,7,1,9};
    int n = arr.size();
    int el = 3;
    auto ans = pairOfelement(arr, n, el);
    cout<<ans.first<<" "<<ans.second;
}