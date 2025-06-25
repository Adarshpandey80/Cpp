
#include<iostream>
using namespace std;
int binary_search (int arr[], int search_element,int size){
    int low =0;
    int high = size;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]== search_element){
          return mid;
        } else if(search_element<arr[mid]){
            high = mid-1;
        } else {
            low = mid+1;
        }
    }
    return -1;
}
int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int search_element = 40;
    int r = binary_search(arr,search_element , 8);
   cout<<r;
   return 0;
}