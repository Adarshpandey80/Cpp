#include<iostream>
using namespace std;
int main(){
    int *ptr;
    int **ptr1;
    int a = 10;
    ptr = &a; ptr1 = &ptr;
    cout<<"the value of a ="<<a<<endl;
    cout<<"the address of a = "<<&a<<endl;
    cout<<"the value of ptr ="<<ptr<<endl;
     cout<<"the address of ptr = "<<&ptr<<endl;
     cout<<"the value of ptr1 ="<<ptr1<<endl;
     cout<<"the add of ptr1 ="<<&ptr1<<endl;
     cout<<"the single direffrence of ptr1 ="<< *ptr1<<endl;
     cout<<"the double direffrenceof ptr1 ="<< **ptr1<<endl;

    return 0;
}