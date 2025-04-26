#include<iostream>
using namespace std;
int myfun();
int main(){
    myfun();
    int x = myfun();
    cout<<x<<endl;
    return 0;
}

int myfun(){
    // cout<<"hello world"<<endl;
    return 5 ;
}