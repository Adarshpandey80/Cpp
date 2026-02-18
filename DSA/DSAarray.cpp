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

#include <vector>

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