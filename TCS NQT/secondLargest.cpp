#include<iostream>
using namespace std;
// int secondLargest(vector<int> &arr) {
//     int n = arr.size();

//     // Sorting in descending order
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] < arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     return arr[1];
// }


int secondLargest(vector<int> &arr){
    int largest = INT_MIN;
    int secodLargest = INT_MIN;

    for(int i =0 ;i<arr.size();i++){
        if(arr[i]>largest){
            secodLargest = largest;
            largest = arr[i];
        }
        if(arr[i]> secodLargest && arr[i] != largest){
            secodLargest = arr[i];
        }
    }
    return secodLargest;
}

int main(){
    vector<int> arr = {4,2,6,5,1,8};
    int ans = secondLargest(arr);
    cout<<ans;
}