
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

#include<iostream>
using namespace std;
int binarysearch(vector<int> arr, int element){
    int st = 0;
    int end = arr.size()-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(element < arr[mid])
        end = mid -1;
        else if (element > arr[mid])
        st = mid + 1;
        else 
        return mid;
    }
    return -1;
}

int main(){
    // vector<int> arr = {1,2,3,4,5,6,7};
    // int element = 4;
      vector<int> arr = {7,6,5,4,3,2};
    int element = 5;
    cout<<"Element forund in index : " <<binarysearch(arr, element) << endl;
    return 0;
}