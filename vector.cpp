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

// Pair Sum in a sorted array using two-pointer technique (Leetcode 167)

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5};
//     int n = arr.size();
//     int target = 5;
//     vector<int> ans;
    
//     int i = 0, j = n - 1;
//     while (i < j) {
//         int sum = arr[i] + arr[j];
//         if (sum > target) {
//             j--;
//         } else if (sum < target) {
//             i++;
//         } else {
//             ans.push_back(arr[i]);
//             ans.push_back(arr[j]);
//             break; // Found the pair, exit the loop
//         }
//     }
    
//     if (!ans.empty()) {
//         cout << "Pair with sum " << target << ": " << ans[0] << ", " << ans[1] << endl;
//     } else {
//         cout << "No pair found with sum " << target << endl;
//     }
    
//     return 0;
// }

// Containe duplicate

// class Solution {
// public:
//     bool containsDuplicate(vector<int>& nums) {
//         unordered_set<int> s;
//         for(int n : nums){
//             if(s.count(n)) return true;
//             s.insert(n);
//         }
//         return false;
//     }
// };

// maxSubArray
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int current = nums[0], best = nums[0];
//         for(int i = 1; i < nums.size(); i++){
//             current = max(nums[i], current + nums[i]);
//             best = max(best, current);
//         }
//         return best;
//     }
// };


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int> mp;
//         for(int i = 0; i < nums.size(); i++){
//             int need = target - nums[i];
//             if(mp.count(need)) return {mp[need], i};
//             mp[nums[i]] = i;
//         }
//         return {};
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minPrice = INT_MAX, profit = 0;
//         for(int p : prices){
//             minPrice = min(minPrice, p);
//             profit = max(profit, p - minPrice);
//         }
//         return profit;
//     }
// };

// class Solution {
// public:
//     void moveZeroes(vector<int>& nums) {
//         int j = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] != 0){
//                 swap(nums[i], nums[j]);
//                 j++;
//             }
//         }
//     }
// };


// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n, 1);

//         int prefix = 1;
//         for(int i = 0; i < n; i++){
//             ans[i] = prefix;
//             prefix *= nums[i];
//         }

//         int suffix = 1;
//         for(int i = n-1; i >= 0; i--){
//             ans[i] *= suffix;
//             suffix *= nums[i];
//         }
//         return ans;
//     }
// };



// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int candidate = 0, count = 0;
//         for(int n : nums){
//             if(count == 0){
//                 candidate = n;
//             }
//             count += (n == candidate) ? 1 : -1;
//         }
//         return candidate;
//     }
// };


// class Solution {
// public:
//     int missingNumber(vector<int>& nums) {
//         int x = nums.size();
//         for(int i = 0; i < nums.size(); i++){
//             x ^= i ^ nums[i];
//         }
//         return x;
//     }
// };



// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         k %= nums.size();
//         reverse(nums.begin(), nums.end());
//         reverse(nums.begin(), nums.begin() + k);
//         reverse(nums.begin() + k, nums.end());
//     }
// };



// class Solution {
// public:
//     void merge(vector<int>& A, int m, vector<int>& B, int n) {
//         int i = m - 1, j = n - 1, k = m + n - 1;

//         while(j >= 0){
//             if(i >= 0 && A[i] > B[j])
//                 A[k--] = A[i--];
//             else
//                 A[k--] = B[j--];
//         }
//     }
// };


// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         int j = 1;
//         for(int i = 1; i < nums.size(); i++){
//             if(nums[i] != nums[i-1]) nums[j++] = nums[i];
//         }
//         return j;
//     }
// };


// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> s(nums.begin(), nums.end());
//         int longest = 0;

//         for(int n : s){
//             if(!s.count(n - 1)){  // start of sequence
//                 int len = 1;
//                 while(s.count(n + len)) len++;
//                 longest = max(longest, len);
//             }
//         }
//         return longest;
//     }
// };



// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {
//         unordered_set<int> s(nums.begin(), nums.end());
//         int longest = 0;

//         for(int n : s){
//             if(!s.count(n - 1)){  // start of sequence
//                 int len = 1;
//                 while(s.count(n + len)) len++;
//                 longest = max(longest, len);
//             }
//         }
//         return longest;
//     }
// };


// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end());

//         for(int i = 0; i < nums.size(); i++){
//             if(i > 0 && nums[i] == nums[i-1]) continue;

//             int l = i + 1, r = nums.size() - 1;

//             while(l < r){
//                 int sum = nums[i] + nums[l] + nums[r];
//                 if(sum < 0) l++;
//                 else if(sum > 0) r--;
//                 else{
//                     ans.push_back({nums[i], nums[l], nums[r]});
//                     while(l < r && nums[l] == nums[l+1]) l++;
//                     while(l < r && nums[r] == nums[r-1]) r--;
//                     l++; r--;
//                 }
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& m) {
//         int r = m.size(), c = m[0].size();
//         bool col0 = false;

//         for(int i = 0; i < r; i++){
//             if(m[i][0] == 0) col0 = true;
//             for(int j = 1; j < c; j++){
//                 if(m[i][j] == 0){
//                     m[i][0] = m[0][j] = 0;
//                 }
//             }
//         }

//         for(int i = r - 1; i >= 0; i--){
//             for(int j = c - 1; j >= 1; j--){
//                 if(m[i][0] == 0 || m[0][j] == 0)
//                     m[i][j] = 0;
//             }
//             if(col0) m[i][0] = 0;
//         }
//     }
// };


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& m) {
//         vector<int> ans;
//         int top = 0, bottom = m.size() - 1;
//         int left = 0, right = m[0].size() - 1;

//         while(top <= bottom && left <= right){
//             for(int j = left; j <= right; j++) ans.push_back(m[top][j]);
//             top++;

//             for(int i = top; i <= bottom; i++) ans.push_back(m[i][right]);
//             right--;

//             if(top <= bottom){
//                 for(int j = right; j >= left; j--) ans.push_back(m[bottom][j]);
//                 bottom--;
//             }

//             if(left <= right){
//                 for(int i = bottom; i >= top; i--) ans.push_back(m[i][left]);
//                 left++;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int l = 0, r = nums.size() - 1;

//         while(l <= r){
//             int mid = (l + r) / 2;

//             if(nums[mid] == target) return mid;

//             // Left part sorted
//             if(nums[l] <= nums[mid]){
//                 if(nums[l] <= target && target < nums[mid]) r = mid - 1;
//                 else l = mid + 1;
//             }
//             else{ // right part sorted
//                 if(nums[mid] < target && target <= nums[r]) l = mid + 1;
//                 else r = mid - 1;
//             }
//         }
//         return -1;
//     }
// };


// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& m) {
//         vector<int> ans;
//         int top = 0, bottom = m.size() - 1;
//         int left = 0, right = m[0].size() - 1;

//         while(top <= bottom && left <= right){
//             for(int j = left; j <= right; j++) ans.push_back(m[top][j]);
//             top++;

//             for(int i = top; i <= bottom; i++) ans.push_back(m[i][right]);
//             right--;

//             if(top <= bottom){
//                 for(int j = right; j >= left; j--) ans.push_back(m[bottom][j]);
//                 bottom--;
//             }

//             if(left <= right){
//                 for(int i = bottom; i >= top; i--) ans.push_back(m[i][left]);
//                 left++;
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int l = 0, r = nums.size() - 1;

//         while(l <= r){
//             int mid = (l + r) / 2;

//             if(nums[mid] == target) return mid;

//             // Left part sorted
//             if(nums[l] <= nums[mid]){
//                 if(nums[l] <= target && target < nums[mid]) r = mid - 1;
//                 else l = mid + 1;
//             }
//             else{ // right part sorted
//                 if(nums[mid] < target && target <= nums[r]) l = mid + 1;
//                 else r = mid - 1;
//             }
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         int slow = nums[0], fast = nums[0];
//         do{
//             slow = nums[slow];
//             fast = nums[nums[fast]];
//         } while(slow != fast);

//         slow = nums[0];
//         while(slow != fast){
//             slow = nums[slow];
//             fast = nums[fast];
//         }
//         return slow;
//     }
// };

// class Solution {
// public:
//     int maxArea(vector<int>& h) {
//         int l = 0, r = h.size() - 1, ans = 0;

//         while(l < r){
//             ans = max(ans, min(h[l], h[r]) * (r - l));
//             if(h[l] < h[r]) l++;
//             else r--;
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     int findKthLargest(vector<int>& nums, int k) {
//         priority_queue<int> pq(nums.begin(), nums.end());
//         while(--k) pq.pop();
//         return pq.top();
//     }
// };

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         mp[0] = 1;
//         int sum = 0, count = 0;

//         for(int n : nums){
//             sum += n;
//             if(mp.count(sum - k)) count += mp[sum - k];
//             mp[sum]++;
//         }
//         return count;
//     }
// };

// class Solution {
// public:
//     int maxArea(vector<int>& h) {
//         int l = 0, r = h.size() - 1, ans = 0;

//         while(l < r){
//             ans = max(ans, min(h[l], h[r]) * (r - l));
//             if(h[l] < h[r]) l++;
//             else r--;
//         }
//         return ans;
//     }
// };


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 2;

        while(i >= 0 && nums[i] >= nums[i+1]) i--;

        if(i >= 0){
            int j = n - 1;
            while(nums[j] <= nums[i]) j--;
            swap(nums[i], nums[j]);
        }

        reverse(nums.begin() + i + 1, nums.end());
    }
};