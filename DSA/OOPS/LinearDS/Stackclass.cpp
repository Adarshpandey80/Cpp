// stack implementation using array
#include<iostream>
#include<stack>
#include<list>

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

// implimenting stack using queue

#include<iostream>
#include<queue>
using namespace std;

class st{
    queue<int> q;

public:

    void push(int x){
        int s = q.size();
        q.push(x);

        for(int i=0;i<s;i++){
            q.push(q.front());
            q.pop();
        }
    }

    void pop(){
        q.pop();
    }

    int top(){
        return q.front();
    }
};

// Balanced Parenthesis using stack

bool isBalanced(string s){
    stack<char> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch=='('||ch=='{'||ch=='['){
            st.push(ch);
        }else {
            if(st.empty()){
                return false;
            }
            char top = st.top();
            st.pop();
            if((ch==')'&&top!='(')||(ch=='}'&&top!='{')||(ch==']'&&top!='[')){
                return false;
            }
        }
    }
    return st.empty();
}


// prefix to postfix conversion using stack
string prefix2postfix(string s){
    stack<string> st;
    for(int i=s.length()-1;i>=0;i--){
        char ch = s[i];
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            string op1 = st.top();
            st.pop();
            string op2 = st.top();
            st.pop();
            string temp = op1+op2+ch;
            st.push(temp);
        }else {
            st.push(string(1,ch));
        }
    }
    return st.top();
}   

// postfix to prefix conversion using stack
string postfix2prefix(string s){
    stack<string> st;
    for(int i=0;i<s.length();i++){
        char ch = s[i];         
        if(ch=='+'||ch=='-'||ch=='*'||ch=='/'){
            string op2 = st.top();
            st.pop();
            string op1 = st.top();
            st.pop();
            string temp = ch+op1+op2;
            st.push(temp);
        }else {
            st.push(string(1,ch));
        }
    }
    return st.top();
}

//Next greater element using stack(Monotonic stack)

//  vector<int> findnge(int arr[], int n) {
//     vector<int> nge(n, -1);
//     stack<int> st;
//     for (int i = 0; i < n; i++) {
//         while (!st.empty() && arr[st.top()] < arr[i]) {
//             nge[st.top()] = arr[i];
//             st.pop();
//         }
//         st.push(i); 
//     }
//     return nge;
// }

// method 2 using list

list<int> findnge(int arr[], int n) {
    list<int> nge(n);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && arr[st.top()] < arr[i]) {
            st.pop();
        }
        if(st.empty()){
            nge[i] = -1;
        } else {
            nge[i] = arr[st.top()];
        }
        st.push(arr[i]); 
    }
    return nge;
}

// Nearest smaller element using stack
list<int> findnsg(int arr[] , int n)
{
    list<int> nse[n] ; 
    stack<int> st;
    for(int i=0;i<n;i++){
        while(!st.empty()&& st.top()>=arr[i]){
            st.pop();
        }
        nse[i] = st.empty() ? -1 : st.top();
        st.push(arr[i]);
    }
    return nse;
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
