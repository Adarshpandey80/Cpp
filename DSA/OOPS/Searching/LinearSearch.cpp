#include<iostream>
using namespace std;
int linear_search (int arr[], int search_element,int size){
    int pos=-1;
    for(int i=0; i<size;i++){
        if(arr[i]==search_element){
            pos= i+1;
        } 
    }
    return pos;
}
int main(){
    int arr[] = {10,2,3,20,30,40,6};
    int search_element = 6;
    int r = linear_search(arr,search_element , 7);
    if(r==-1){
        cout << "\n Element is not found" << r <<endl;
    } else{
        cout << "\n Element found at " << r << endl;
    }
    return 0;
}
