#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low, j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j){
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[low], arr[j]);   // ✅ correct place
    return j;                 // ✅ return pivot index
}

void quickSort(vector<int> &arr, int low, int high){
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int main(){
    vector<int> arr = {38,27,43,3,9,82,10};

    quickSort(arr, 0, arr.size() - 1);

    for(auto i : arr){
        cout << i << " ";
    }
}
