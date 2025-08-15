// to pair sum

// #include<iostream>
// #include<vector>
// using namespace std;
// vector<int> pairSum(vector<int> nums , int target){
//     vector<int> ans;
//     int i=0; int j = nums.size()-1;
//     while(i<j){
//         int sum = nums[i]+ nums[j];
//         if(sum> target){
//             j--;
//         }else if(sum< target){
//             i++;
//         }else{
//             ans.push_back(nums[i]);
//             ans.push_back(nums[j]);
//             return ans;
//     }
// }
//     return ans;
// }

// int main(){
//     vector<int> nums = {1,2,3,4,5};
//     int target = 5;
//     vector<int> result = pairSum(nums, target);
//     cout << "Pair with sum " << result[0] << result[1] << ": ";
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxProfit(vector<int> prices) {
    int bestbuy = prices[0];
    int maxprofit = 0;

    for (int i = 1; i < prices.size(); i++) {
        maxprofit = max(maxprofit, prices[i] - bestbuy);
        bestbuy = min(bestbuy, prices[i]);
    }
    return maxprofit;
}

int main() {
    vector<int> prices = {7,1,5,3,6,4};
    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;
    return 0;
}
