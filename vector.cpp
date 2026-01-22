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


// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n = nums.size(), i = n - 2;

//         while(i >= 0 && nums[i] >= nums[i+1]) i--;

//         if(i >= 0){
//             int j = n - 1;
//             while(nums[j] <= nums[i]) j--;
//             swap(nums[i], nums[j]);
//         }

//         reverse(nums.begin() + i + 1, nums.end());
//     }
// };


// class Solution {
// public:
//     int trap(vector<int>& h) {
//         int l = 0, r = h.size() - 1;
//         int leftMax = 0, rightMax = 0, water = 0;

//         while(l < r){
//             if(h[l] < h[r]){
//                 if(h[l] >= leftMax) leftMax = h[l];
//                 else water += leftMax - h[l];
//                 l++;
//             }
//             else{
//                 if(h[r] >= rightMax) rightMax = h[r];
//                 else water += rightMax - h[r];
//                 r--;
//             }
//         }
//         return water;
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
//     int findPeakElement(vector<int>& nums) {
//         int l = 0, r = nums.size() - 1;
//         while(l < r){
//             int mid = (l + r) / 2;
//             if(nums[mid] > nums[mid + 1]) r = mid;
//             else l = mid + 1;
//         }
//         return l;
//     }
// };
     
// class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {
//         for(int i = 1; i < nums.size(); i++){
//             if((i % 2 == 1 && nums[i] < nums[i-1]) ||
//                (i % 2 == 0 && nums[i] > nums[i-1]))
//                 swap(nums[i], nums[i-1]);
//         }
//     }
// };


// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int total = accumulate(nums.begin(), nums.end(), 0);
//         int left = 0;
//         for(int i = 0; i < nums.size(); i++){
//             if(left == total - left - nums[i]) return i;
//             left += nums[i];
//         }
//         return -1;
//     }
// };

// class Solution {
// public:
//     vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
//         unordered_map<int,int> mp;
//         for(int x : arr1) mp[x]++;
//         vector<int> ans;
//         for(int x : arr2){
//             while(mp[x]-- > 0) ans.push_back(x);
//         }
//         for(auto &p : mp){
//             while(p.second-- > 0) ans.push_back(p.first);
//         }
//         sort(ans.begin() + arr2.size(), ans.end());
//         return ans;
//     }
// };

// class Solution {
// public:
//     int findShortestSubArray(vector<int>& nums) {
//         unordered_map<int,int> cnt, first;
//         int degree = 0, res = nums.size();

//         for(int i = 0; i < nums.size(); i++){
//             if(!first.count(nums[i])) first[nums[i]] = i;
//             cnt[nums[i]]++;
//             if(cnt[nums[i]] > degree){
//                 degree = cnt[nums[i]];
//                 res = i - first[nums[i]] + 1;
//             }
//             else if(cnt[nums[i]] == degree){
//                 res = min(res, i - first[nums[i]] + 1);
//             }
//         }
//         return res;
//     }
// };

// class Solution {
// public:
//     int findPeakElement(vector<int>& nums) {
//         int l = 0, r = nums.size() - 1;
//         while(l < r){
//             int mid = (l + r) / 2;
//             if(nums[mid] > nums[mid + 1]) r = mid;
//             else l = mid + 1;
//         }
//         return l;
//     }
// };

// class Solution {
// public:
//     int maxSubarraySumCircular(vector<int>& nums) {
//         int total = 0, maxSum = nums[0], curMax = 0;
//         int minSum = nums[0], curMin = 0;

//         for(int x : nums){
//             curMax = max(x, curMax + x);
//             maxSum = max(maxSum, curMax);

//             curMin = min(x, curMin + x);
//             minSum = min(minSum, curMin);

//             total += x;
//         }
//         if(maxSum < 0) return maxSum;
//         return max(maxSum, total - minSum);
//     }
// };

// class Solution {
// public:
//     vector<int> countSmaller(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> ans(n), idx(n);
//         for(int i = 0; i < n; i++) idx[i] = i;

//         mergeSort(nums, idx, ans, 0, n - 1);
//         return ans;
//     }

//     void mergeSort(vector<int>& nums, vector<int>& idx, vector<int>& ans, int l, int r){
//         if(l >= r) return;
//         int mid = (l + r) / 2;
//         mergeSort(nums, idx, ans, l, mid);
//         mergeSort(nums, idx, ans, mid + 1, r);

//         vector<int> temp;
//         int i = l, j = mid + 1, rightCount = 0;

//         while(i <= mid && j <= r){
//             if(nums[idx[j]] < nums[idx[i]]){
//                 rightCount++;
//                 temp.push_back(idx[j++]);
//             } else {
//                 ans[idx[i]] += rightCount;
//                 temp.push_back(idx[i++]);
//             }
//         }
//         while(i <= mid){
//             ans[idx[i]] += rightCount;
//             temp.push_back(idx[i++]);
//         }
//         while(j <= r) temp.push_back(idx[j++]);

//         for(int k = l; k <= r; k++)
//             idx[k] = temp[k - l];
//     }
// };


class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size(), ans = 0;
        vector<int> up(n), down(n);

        for(int i = 1; i < n; i++)
            if(arr[i] > arr[i-1]) up[i] = up[i-1] + 1;

        for(int i = n - 2; i >= 0; i--)
            if(arr[i] > arr[i+1]) down[i] = down[i+1] + 1;

        for(int i = 0; i < n; i++){
            if(up[i] && down[i])
                ans = max(ans, up[i] + down[i] + 1);
        }
        return ans;
    }
};
