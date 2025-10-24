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

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int maxProfit(vector<int> prices) {
//     int bestbuy = prices[0];
//     int maxprofit = 0;

//     for (int i = 1; i < prices.size(); i++) {
//         maxprofit = max(maxprofit, prices[i] - bestbuy);
//         bestbuy = min(bestbuy, prices[i]);
//     }
//     return maxprofit;
// }

// int main() {
//     vector<int> prices = {7,1,5,3,6,4};
//     int result = maxProfit(prices);
//     cout << "Maximum profit: " << result << endl;
//     return 0;
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//      vector<int> vec = {1,8,3,4,5};
//     // vector<int> :: iterator it;
//     // for(it = vec.begin() ; it!=vec.end(); it++){
//     //     cout<<*(it)<<" ";
//     // } 
    
//     for( auto it = vec.rbegin() ; it!=vec.rend(); it++){
//         cout<<*(it)<<" ";
//     }
// }


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
//     int n = arr.size();
//     int maxSum = INT_MIN;
//     int currSum = 0;
//     for(int i=0; i<n; i++){
//         currSum += arr[i];
//         if(currSum > maxSum){
//             maxSum = currSum;
//         }
//         if(currSum < 0){
//             currSum = 0;
//         }
//     }
//     cout << "Maximum Subarray Sum is: " << maxSum << endl;
//     return 0;
// }

// Jump Game II  (Minimum number of jumps to reach the end of the array)

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr = {2,3,1,1,4};
//     int n = arr.size();
//     int jumps = 0;
//     int currEnd = 0;
//     int farthest = 0;   
//     for(int i=0; i<n-1; i++){
//         farthest = max(farthest, i + arr[i]);
//         if(i == currEnd){
//             jumps++;
//             currEnd = farthest;
//         }
//     }
//     cout << "Minimum number of jumps to reach the end: " << jumps << endl;
//     return 0;
// }

// Move Zeros to the end of the array (Leetcode 283)

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> arr = {0,1,0,3,12};
//     int n = arr.size();
//     int j = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] != 0){
//             swap(arr[i], arr[j]);
//             j++;
//         }
//     }
//     cout << "Array after moving zeros to the end: ";
//     for(int i=0; i<n; i++){
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }