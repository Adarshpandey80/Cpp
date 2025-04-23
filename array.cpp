#include<iostream>
using namespace std;
int main(){
    int arr[5] = {23,33,44,55,66};
    cout<<*arr<<endl;
    cout<<*(arr+1)<<endl;
    cout<<arr[4]<<endl;;
    int sum = 0;
    for (int i =0 ; i<5 ; i++){
        cout<<arr[i]<<endl;
        sum = sum + arr [i]; // sum of array
    
    }
    cout<<sum;
    
}

// wap to sort the array in assending and desending order
