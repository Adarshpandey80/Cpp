//Insertion Sort
#include<iostream>
using namespace std;

int main(){
    int arr[]={100,20,90,30,80,10};
             //{20,90,100,30,80,10}
             //{20,30,90,100,80,10}
             //{20,30,80,90,100,10}
             //{10,20,30,80,90,100}
    int size=6;
    int i;
    int j;
    cout<<endl<<"Before Insertion Sort \n";
    for(i=0;i<size;i++){
        cout<<"\t"<<arr[i];
    }
    int temp;
    for(i=1;i<=size-1;i++){//3
    temp=arr[i];//30
    for(j=i-1;j>=0&&arr[j]<temp;j--){//j=0
   
        arr[j+1]=arr[j];//arr[2]=30
    }
    arr[j+1]=temp;//30
   
    }
    cout<<endl<<"After Insertion Sort \n";
    for(i=0;i<size;i++){
        cout<<"\t"<<arr[i];
    }
    return 0;
}