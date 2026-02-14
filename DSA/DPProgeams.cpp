// Buy Sell Stocks

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr = {7,1,3,6,4,5};
//       int mini = arr[0];
//     int maxSell = arr[0];
//     for(int i=1 ;i<arr.size();i++){

//         mini = min(mini, arr[i]);
//         maxSell = max(maxSell , arr[i]);
//     }
//     cout<<"maxprofit"<<(maxSell - mini)<<endl;

// }


// Rearrange Array Elements by Sign

#include <iostream>
#include <vector>
using namespace std;

// int main()
// {
//     vector<int> arr = {3, 1, -2, 5, 2, -4};
//     vector<int> ans(arr.size());
//     int posIndex = 0;
//     int negIndex = 1;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         if (arr[i] < 0)
//         {
//             ans[negIndex] = ans[i];
//             negIndex += 2;
//         } else{
//             ans[posIndex] = ans[i];
//             posIndex += 2;
//         }
//     }
//     for(int i=0 ;i<ans.size();i++){
//         cout<<ans[i]<<"";
//     }
// }

#include <algorithm>
#include <climits>
int main(){
    vector<int> arr = {10,22,12,3,0,6};
    int n = arr.size();
    vector<int> ans;
    int maxi = INT_MIN;
    for(int i = n-1;i>=0;i--){
        if(arr[i]> maxi){
            ans.push_back(arr[i]);
        }
        maxi = max(maxi , arr[i]);
    }
   sort(ans.begin() , ans.end());
   for(int i = 0 ;i<ans.size() ; i++){
    cout<<ans[i]<<" ";
   }
}