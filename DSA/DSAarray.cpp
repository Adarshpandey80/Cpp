// #include<iostream>
// using namespace std;

// // largest element in the array

// int larget(int arr[] ,int n){
//     int larg = arr[0];
//     for(int i= 1;i<n;i++){
//         if(arr[i]>larg){
//             larg = arr[i];
//         }
//     }
//     return larg;
// }

// int main(){
// int arr[5] = {1,2,3,4,5};
// int sz = 5;
// cout<<"the largest element in the array is "<<larget(arr,sz)<<endl;
// }

// // second largest and second smallest element in the array

// int secondLargest(int arr[] ,int n){
//     int largest= arr[0];
//     int slargest = -1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             slargest = largest;
//             largest = arr[i];
//         }
//         else if(arr[i]<largest && arr[i] > slargest){
//             slargest = arr[i];
//         }
//     }
//     return slargest;
// }

// int secondSmallest(int arr[] ,int n)
// {
//     int smallest = arr[ 0];
//     int ssmallest = INT16_MAX;
//     for(int i=i;i<n;i++){
//         if(arr[i] < smallest){
//             ssmallest = smallest;
//             smallest = arr[i];
//         } else if(arr[i]!=smallest && arr[i] < ssmallest){
//             ssmallest = arr[i];
//         }
//     }
//     return ssmallest;
// }
// int main(){
// int arr[5] = {1,2,3,4,5};
// int sz = 5;
// cout<<"the largest element in the array is "<<larget(arr,sz)<<endl;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sz= 5;
//     cout<<"the second largest element in the array is "<<secondLargest(arr,sz)<<endl;
//     cout<<"the second smallest element in the array is "<<secondSmallest(arr,sz)<<endl;
// }

// // check if the array is sorted or not

// int isSorted(int arr[] , int n){
//     for(int i=1 ; i<n;i++){
//         if(arr[i] >= arr[i-1]){
//             continue;
//         } else {
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     int sz = 5;
//     if(isSorted(arr,sz)){
//         cout<<"the array is sorted"<<endl;
//     } else {
//         cout<<"the array is not sorted"<<endl;
//     }
//     return 0;
// }

// // Remove duplicate from the array

// int removeDuplicate(int arr[] , int n){
//      int i=0;
//      for(int j=1;j<n;j++){
//         if(arr[i]!=arr[j]){
//             arr[i+1] = arr[j];
//             i++;
//         }
//      }
//      return i+1;
// }

// int main(){
// int arr[5] = {1,2,3,4,5};
// int sz = 5;
// cout<<"remove duplicte  in the array "<<removeDuplicate(arr,sz)<<endl;

// }

// find missing element

// #include <iostream>
// using namespace std;
// int missing(int arr[], int n)
// {
//     int sum = (n +1)  * (n + 2) / 2;

//     int valueSum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         valueSum += arr[i];
//     }
//     int num = sum-valueSum;
//     return num;
// }

// int main(){
//     int arr[4] = {1,2,4,5};
//     int n = 4;
//     cout<<missing(arr , n);
// }

// #include <vector>

// int main(){
//     vector<int> arr = {1,1,0,1,1,1,0,1,1};
//     int maxi = 0;
//     int count =0;
//     for(int i=0 ; i<arr.size();i++){
//        if(arr[i] == 1){
//         count ++;
//         maxi = max(maxi , count );
//        } else {
//         count = 0;
//        }
//     }
//     cout<<maxi;
// }

// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     int target = 12;
//     vector<int> arr = {1,2,5,2,3,5,8};
//     int left =0 ; int right = 6;
//     sort(arr.begin() , arr.end());
//    while(left<right){
//     int sum = arr[left]+arr[right];
//     if(sum==target) {
//        cout<<"yes";
//     } else if(sum<target) left++;
//     else right--;
//    }
// cout<<"no";

// }

// longest consecutive sequence
// int longestSuccessiveElement(vector<int> &a){
//    int n - a.size();
//    if(n==0 ) return 0;
//    int longest = 1;
//    unorder_set<int> st;
//    for(int i=0;i<n;i++){
//       st.insert(arr[i]);

//    }
//    for(auto if : st){
//       if(st.find(it - 1) == st.end()){
//          int cnt = 1;
//          int x = it;
//          while(st.finf(x+1) != st.end()){
//             x = x+1;
//             cnt = cnt+1;
//          }
//          longest = max(longest , cnt);
//       }
//    }
//    return longest;
// }

// find subarray sum for element

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> arr = {1,2,4,3,5,-2,-1,1,3,2};
//     int k = 5;
//     int n = arr.size();
//     int st = 0; int end = n-1;
//     int count = 0;
//     while(st<=end){
//         if(arr[st]+arr[end] == k){
//             count ++ ;
//         }
//         st++;
//         end--;
//     }
//     cout<<count;
// }

// find all sub array with given sum k

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int findsubarray(vector<int> &arr, int k)
// {
//     unordered_map<int, int> mpp;
//     mpp[0] = 1;
//     int preSum = 0;
//     int cnt = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         preSum += arr[i];
//         int remove = preSum - k;
//         cnt += mpp[remove];
//         mpp[preSum] += 1;
//     }
//     return cnt;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> arr = {1, 2, 3, -3, 1, 1, 1, 4, 2, -3};
//     int k = 3;
//     int count = 0;
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = i+1 ; j < arr.size(); j++)
//         {
//             if (arr[i] + arr[j] == k)
//             {
//                 count++;
//               cout << arr[i] << " , " << arr[j] << endl;
//             }

//         }

//     }
//     cout << count;
// }
// ===================================pascal trangel============================

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> generateTrangle(int row){
//     long long ans = 1;
//     vector<int> ansRow;
//     ansRow.push_back(1);
//     for(int col = 1; col<row ; col++){
//         ans = ans*(row-col);
//         ans = ans/col;
//         ansRow.push_back(ans);
//     }
//     return ansRow;
// }
// vector<vector<int>> pascalTriangle(int n){
//     vector<vector<int>> ans;
//     for(int i=1;i<=n;i++){
//         ans.push_back(generateTrangle(i));
//     }
//     return ans;
// }

// print any Nth Row of the pascal traingal

// int printPascalRow(int n){
//     vector<int> ansRow;
//     int ans = 1;
//     cout<<ans<<" ";
//     for(int i=1;i<n;++i){
//         ans = ans*(n-i);
//         ans = ans/(i);
//         cout<<ans<<" ";
//     }

// }

// Give row and col tell the element of that place r = 5 , col = 3

// int nCr(int n, int r){
//     long long ans = 1;
//     for(int i=0 ;i<r ;i++){
//          ans = ans*(n-i);
//           ans = ans/(i+1);
//     }
//     return ans;
// }

// int main(){
// int n;
// cin>>n;
//  vector<vector<int>> result = pascalTriangle(n);

// for(auto row : result){
//     for(auto val : row){
//         cout << val << " ";
//     }
//     cout << endl;
// }

// print specific row

// printPascalRow(n);

// Print row nd col element

// cout<<nCr(5-1,3-1);

// }

// ====================# 3 sum ==========================

// #include<iostream>
// #include<vector>
// #include<algorithm>

// using namespace std;
// int main(){
//     vector<int> arr = {-1,0,1,2,-1,-4};

//     int n = arr.size();
//     for(int i=0;i<n; i++){
//         for(int j=i+1;j<n;j++){
//             for(int k= j+1 ; k<n;k++){
//               if(arr[i]+arr[j]+arr[k] == 0){
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//               }
//             }
//         }
//     }
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> arr = {-1,0,1,2,-1,-4};
//     vector<vector<int>> ans;
//     sort(arr.begin() , arr.end());
//     int n = arr.size();
//     for(int i=0;i<n;i++){
//         if(i>0 && arr[i] == arr[i-1] ) continue;
//         int j= i + 1;
//         int k = n - 1;

//      while(j<k){
//         int sum = arr[i] + arr[j] + arr[k];
//         if(sum<0){
//           j++;
//         } else if(sum>0){
//          k--;
//         } else {
//           vector<int> temp = {arr[i], arr[j] , arr[k]};
//           ans.push_back(temp);
//           j++;
//           k--;
//           while(j < k && arr[j]==arr[j-1]) j++;
//           while(j < k && arr[k]==arr[k+1]) k--;
//         }
//      }

//     }
//    for(auto it : ans){
//       cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
//    }
// }

// ==========================4 sum (equal to the target)============

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int> arr = {1,1,1,2,2,2,3,3,3,4,4,4,5,5};
// int target = 8;
//     vector<vector<int>> ans;
//     sort(arr.begin() , arr.end());
//     int n = arr.size();
//     for(int i = 0 ; i<n;i++){
//         if(i>0  && arr[i] == arr[i-1]) continue;
//         for(int j=i+1 ;j<n;j++){
//             if(j !=  (i+1) && arr[j]==arr[j-1]) continue;
//             int k = j+1;
//             int l = n-1;
//             while(k<l){
//                 long long sum = arr[i];
//                 sum += arr[j];
//                 sum += arr[k];
//                 sum += arr[l];
//                 if(sum == target){
//                    vector<int > temp = {arr[i] , arr[j] , arr[k] , arr[l]};
//                    ans.push_back(temp);
//                    k++; l--;
//                    while(k<l && arr[k] == arr[k-1]) k++;
//                    while(k<l && arr[l] == arr[l+1]) l--;

//                 } else if (sum<target) k++;
//                 else l--;
//             }
//         }
//     }
//     for(auto it : ans){
//         cout<<it[0]<<" " <<it[1]<<" "<<it[2]<<" "<<it[3]<<endl;;
//     }
// }

// ==================count subarray with xor as k=================

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//     vector<int> arr = {4,2,2,6,4};
//     int k =6;
//     int count = 0;
//       for(int i=0;i<arr.size();i++){
//         int xr = 0;
//         for(int j= i; j < arr.size() ; j++){
//             xr = xr^arr[j];
//             if(xr == k){
//                 count ++;
//             }
//         }
//       }
//       cout<<count;
// }