#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target){
    unordered_map<int,int> mp;

    for(int i = 0; i < arr.size(); i++){
        int need = target - arr[i];

        if(mp.find(need) != mp.end()){
            return {mp[need], i};
        }

        mp[arr[i]] = i;
    }
    return {};
}


// #include<iostream>
// using namespace std;
// class Rect{
//     private:
//     int l;
//     int b;
//     public:
//     void getdata(){
//         cout<<"\n enter the length and bredth of rectangel :";
//         cin>>l>>b;
//     }
//     void showdata(){
//         cout<<"\n length is : "<<l;
//         cout<<"\n bredth is : "<<b;
//     }
//     void getarea(){  
//         cout<<"\n the area of rectangel is : "<<(l*b);
//     }
//     void getpira(){  
//         cout<<"\n the pairameter of rectangel is : "<<2*(l+b);
//     }
// };

// int main(){
//     Rect r1;
//     r1.getdata();    
//     r1.showdata();
//     r1.getarea();
//     r1.getpira();
//     return 0;
// }


Node* reverseLL(Node* head){
    Node* prev = NULL;
    Node* curr = head;

    while(curr != NULL){
        Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int maxSubArray(vector<int>& arr){
    int sum = 0, maxi = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
        maxi = max(maxi, sum);

        if(sum < 0) sum = 0;
    }
    return maxi;
}


// int binarySearch(vector<int>& arr, int target){
//     int low = 0, high = arr.size()-1;

//     while(low <= high){
//         int mid = (low + high)/2;

//         if(arr[mid] == target) return mid;
//         else if(arr[mid] < target) low = mid + 1;
//         else high = mid - 1;
//     }
//     return -1;
// }


// int countSubarrays(vector<int>& arr, int k){
//     unordered_map<int,int> mp;
//     int sum = 0, count = 0;

//     mp[0] = 1;

//     for(int i = 0; i < arr.size(); i++){
//         sum += arr[i];

//         if(mp.find(sum - k) != mp.end()){
//             count += mp[sum - k];
//         }

//         mp[sum]++;
//     }
//     return count;
// }


// int longestDistinct(vector<int>& arr){
//     unordered_set<int> st;
//     int left = 0, maxLen = 0;

//     for(int right = 0; right < arr.size(); right++){
//         while(st.count(arr[right])){
//             st.erase(arr[left]);
//             left++;
//         }
//         st.insert(arr[right]);
//         maxLen = max(maxLen, right - left + 1);
//     }
//     return maxLen;
// }


// bool hasCycle(Node* head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast) return true;
//     }
//     return false;
// }

// int longestDistinct(vector<int>& arr){
//     unordered_set<int> st;
//     int left = 0, maxLen = 0;

//     for(int right = 0; right < arr.size(); right++){
//         while(st.count(arr[right])){
//             st.erase(arr[left]);
//             left++;
//         }
//         st.insert(arr[right]);
//         maxLen = max(maxLen, right - left + 1);
//     }
//     return maxLen;
// }


// bool hasCycle(Node* head){
//     Node* slow = head;
//     Node* fast = head;

//     while(fast && fast->next){
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast) return true;
//     }
//     return false;
// }

// vector<int> merge(vector<int>& a, vector<int>& b){
//     vector<int> ans;
//     int i = 0, j = 0;

//     while(i < a.size() && j < b.size()){
//         if(a[i] < b[j]) ans.push_back(a[i++]);
//         else ans.push_back(b[j++]);
//     }

//     while(i < a.size()) ans.push_back(a[i++]);
//     while(j < b.size()) ans.push_back(b[j++]);

//     return ans;
// }

// bool isValid(string s){
//     stack<char> st;

//     for(char c : s){
//         if(c=='(' || c=='{' || c=='[') st.push(c);
//         else{
//             if(st.empty()) return false;

//             char top = st.top();
//             if((c==')' && top!='(') ||
//                (c=='}' && top!='{') ||
//                (c==']' && top!='[')) return false;

//             st.pop();
//         }
//     }
//     return st.empty();
// }


// int maxProfit(vector<int>& prices) {
//     int minPrice = INT_MAX, profit = 0;

//     for (int price : prices) {
//         minPrice = min(minPrice, price);
//         profit = max(profit, price - minPrice);
//     }

//     return profit;
// }

// void moveZeroes(vector<int>& nums) {
//     int j = 0;

//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] != 0) {
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }


void dfs(vector<vector<char>>& grid, int i, int j) {
    int m = grid.size(), n = grid[0].size();

    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] == '0')
        return;

    grid[i][j] = '0';

    dfs(grid, i+1, j);
    dfs(grid, i-1, j);
    dfs(grid, i, j+1);
    dfs(grid, i, j-1);
}

int numIslands(vector<vector<char>>& grid) {
    int count = 0;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                dfs(grid, i, j);
                count++;
            }
        }
    }

    return count;
}