
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {5, 3, 8, 1, 9};
//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = i + 1; j < 5; j++)
//         {
//             if (arr[i] > arr[j])
//             {
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     cout << "Sorted array: ";
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }


#include<iostream>
using namespace std;
void bubbleSort(int arr[] , int n){
    for(int i=0 ; i<n ;i++){
        for(int j =i+1; j<n;j++){
            if(arr[i] >arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void inssersion(int arr[] ,int n){
    for(int i=0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
         j--;
        }
    }
}

int main(){
    int arr[5] = {5, 3, 8, 1, 9};
    bubbleSort(arr , 5);
    cout<<"Sorted array: ";
    for(int i=0 ; i<5 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}