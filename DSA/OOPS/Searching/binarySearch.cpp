
// #include<iostream>
// using namespace std;
// int binary_search (int arr[], int search_element,int size){
//     int low =0;
//     int high = size;
//     while(low<=high){
//         int mid = (low+high)/2;
//         if(arr[mid]== search_element){
//           return mid;
//         } else if(search_element<arr[mid]){
//             high = mid-1;
//         } else {
//             low = mid+1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {10,20,30,40,50,60,70,80};
//     int search_element = 40;
//     int r = binary_search(arr,search_element , 8);
//    cout<<r;
//    return 0;
// }

// #include<iostream>
// using namespace std;
// int binarysearch(vector<int> arr, int element){
//     int st = 0;
//     int end = arr.size()-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(element < arr[mid])
//         end = mid -1;
//         else if (element > arr[mid])
//         st = mid + 1;
//         else
//         return mid;
//     }
//     return -1;
// }

// int main(){
//     // vector<int> arr = {1,2,3,4,5,6,7};
//     // int element = 4;
//       vector<int> arr = {7,6,5,4,3,2};
//     int element = 5;
//     cout<<"Element forund in index : " <<binarysearch(arr, element) << endl;
//     return 0;
// }





//  Book Allocation Problem
//  Given n books and m students, find the minimum number of pages that can be allocated
//  to each student such that no student reads more than a certain number of pages.
//  The goal is to minimize the maximum number of pages allocated to any student.

// #include <iostream>
// #include <vector>
// using namespace std;


// bool isValid(vector<int> &arr, int n,int m ,int amxAllowedPage){
//     int student = 1, pages = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]> amxAllowedPage){
//             return false; // If a single book has more pages than allowed, return false
//         }
//         if(pages + arr[i] <= amxAllowedPage){
//             pages += arr[i]; // Add pages to current student
//         } else {
//             student ++; // Assign to next student
//             pages = arr[i]; // Start new count with current book
//         }
//     }
//     return student >m ? false : true; // Check if the number of students is within limit
// }

// int allocateBooks(vector<int> &arr, int n, int m ){
//     int sum = 0;
//     for(int i=0;i<n;i++){
//         sum += arr[i]; // Calculate total pages
//     }
//     int ans = -1;
//     int st =0, end = sum;
//     while(st<=end){
//         int mid =  st + (end-st)/2; // Midpoint of current range
//         if(isValid(arr,n,m,mid)){
//             ans = mid;
//             end = mid-1; // Try for a smaller maximum allowed pages

//         } else {
//             st = mid + 1; // Increase the allowed pages
//         }
//     }
//     return ans; // Return the minimum maximum pages that can be allocated
// }

// int main(){
//     vector<int> arr = {2,1,3,4};
//     int n=4, m=2; // n is number of books, m is number of students
//     cout << "Minimum maximum pages allocated: " << allocateBooks(arr, n, m) << endl;
//     return 0;
// }



// Painter's Partition Problem
// Given n books and m painters, find the minimum time required to paint all the books such
// that no painter paints more than a certain number of books in a given time.
// The goal is to minimize the maximum time allocated to any painter.

// #include<iostream>
// #include<vector>
// using namespace std;

// bool isValid(vector<int> &arr, int n, int m, int maxAllwoedTime ){
//     int painter = 1, time =0;
//     for(int i=0; i<n;i++){
//         if(arr[i]> maxAllwoedTime){
//             return false ; // If a single book requires more time than allowed, return false
//         } 
//         if(time + arr[i] <= maxAllwoedTime){
//             time += arr[i]; // Add time to current painter
//         } else {
//             painter++; // Assign to next painter
//             time = arr[i]; // Assign to next painter and start new count with current book
//         }
//     }
//     return painter >  m ? false : true; // Check if the number of painters is within limit
// }

// int minAllocateTime (vector<int> &arr, int n, int m){
//     if(m>n){
//         return -1; // If there are more students than books, allocation is not possible
//     }
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum += arr[i]; // Calculate total time required for all books
//     }
//     int st= 0, end = sum;
//     int ans = -1;
//     while(st<=end){
//         int mid = st + (end-st)/2 ; // Midpoint of current range
//         if(isValid(arr,n,m,mid)){
//             ans = mid; // If valid allocation found, update answer
//             end = mid - 1; // Try for a smaller maximum allowed time
//         } else {
//             st = mid + 1; // Increase the allowed time
//         }
//     }
//     return ans; // Return the minimum maximum time that can be allocated
// }


// int main(){
//     vector<int> arr = {40,30,10,20};
//     int n=4,m=2; // n is number of books, m is number of painters
//     cout << "Minimum maximum time allocated: " << allocateTime(arr, n, m) << endl;
//     return 0;
// } 

// Aggressive Cows Problem
// Given n stalls and c cows, find the maximum distance that can be maintained between any two cows
// placed in the stalls. The goal is to maximize the minimum distance between any two cows

// #include <iostream>
// #include <vector>
// using namespace std;

// bool isPossible(vector<int> &arr , int n,int c, int minAllowedDist){
//     int cows =1, lastStandPossition = arr[0]; // Place the first cow at the first position
//     for(int i=1;i<n;i++){
//         if(arr[i]-lastStandPossition >= minAllowedDist){
//             cows++; // Place a cow at the current position
//             lastStandPossition = arr[i]; // Update the last position where a cow was placed
//         } 
//         if(cows == c){ // If all cows are placed, return true
//             return true;
//         }
//     }
//     return false; // If not all cows could be placed, return false 
// }

// int getDistance(vector<int> &arr, int N, int C){
//     sort(arr.begin(), arr.end()); // Sort the array of positions
//     int st =1 , end = arr[N-1]-arr[0]; // Set search range for distance
//     int ans = -1;
//     while(st<=end){
//         int mid = st+ (end-st)/2; // Midpoint of current range
//         if(isPossible(arr,N,C,mid)){
//             ans = mid;  // If a valid distance is found, update answer
//             st =mid+1; // Try for a larger distance
//         } else {
//             end = mid-1; // Reduce the distance
//         }
//     } 
//     return ans; // Return the maximum distance that can be maintained
// }

// int main(){
//     vector<int> arr = {1,2,4,8,9}; // Positions of the stalls
//     int N = arr.size(); // Number of stalls
//     int C = 3; // Number of cows to place
//     cout << "Maximum distance between cows: " << getDistance(arr, N, C) << endl;
//     return 0;
// }