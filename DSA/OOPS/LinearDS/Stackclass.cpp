// stack implementation using array
#include<iostream>
using namespace std;
int st[4];
int top =-1;
void push(int data){
    if(top==3){
        cout<<"\n this is overflow condition";
    }else {
        top++;
        st[top]=data;
        cout<<"\n Element push successfully";
    }
}
 int pop(){
    int  v = 0;
    if(top==-1){
        cout<<"\n Under flow coondition";
    }else {
        v=st[top];
        top--;
        return v ; 
    }
   
}

int peek(){
    
   if(top==-1){
        cout<<"\n Under flow coondition";
        return 0;
   }
   else {
        return st[top];
    }

}


int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    cout<<"\n poped element is :"<<pop();
    cout<<"\n peek element is :"<<peek();
}
