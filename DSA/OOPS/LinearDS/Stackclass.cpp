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

#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> findnge(int arr[], int n) {

    vector<int> nge(n);
    stack<int> st;

    for(int i = n-1; i >= 0; i--) {

        while(!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        if(st.empty()) {
            nge[i] = -1;
        }
        else {
            nge[i] = st.top();
        }

        st.push(arr[i]);
    }

    return nge;
}

// Nearest smaller element using stack
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

vector<int> findnsg(int arr[], int n)
{
    vector<int> nse(n);
    stack<int> st;

    for(int i = 0; i < n; i++)
    {
        while(!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }

        if(st.empty())
            nse[i] = -1;
        else
            nse[i] = st.top();

        st.push(arr[i]);
    }

    return nse;
}

// Trapping rain water 

int findtotal(int arr[] , int n){
    int lMax = 0;
    int rMax = 0;
    int total = 0;
    int L = 0;
    int r = n - 1;
    while(L < r){
        if(arr[L] <= arr[r]){
            if(arr[L] >= lMax){
                lMax = arr[L];
            }else {
                total += lMax - arr[L];
            }
            L++;
        } else {
            if(arr[r] >= rMax){
                rMax = arr[r];
            }else {
                total += rMax - arr[r];
            }
            r--;
        }
    }
    return total;
}

// sum of subarray minimums

// int main(){
//     int arr[] = {3,1,2,4};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int sum = 0;
//     int  mod = 1e9 + 7;
//     for(int i = 0; i < n; i++){
//         int mini = arr[i];
//         for(int j = i; j < n; j++){
//             mini = min(mini, arr[j]);
//             sum = (sum + mini) % mod;
//         }
//     }
   
//  cout<<"\n Total sum is :"<<sum<<endl;
// }

// Astroid collision

vector<int>  collision(int arr[] , int n){
    list<int> lst;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            lst.push_back(arr[i]);
        } else {
            while(!lst.empty() && lst.back()>0 && lst.back() < -arr[i]){
                lst.pop_back();
            }
            if(!lst.empty() && lst.back() == -arr[i]){
                lst.pop_back();
            } else if(lst.empty() || lst.back() < 0){
                lst.push_back(arr[i]);  
        }
    }
    }
    return vector<int>(lst.begin(), lst.end());
}



int main(){ 
    // push(10);
    // push(20);
    // push(30);
    // push(40);
    // push(50);
    // cout<<"\n poped element is :"<<pop();
    // cout<<"\n peek element is :"<<peek();
    // int arr[] = {0,1,0,2,1,0,1,3,2,1,2,1};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<"\n Total water trapped is :"<<findtotal(arr,n);

    int arr[] = {4,7,1,1,2,-3,-7,17,-1,2,3,-4};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> result = collision(arr,n);
    cout<<"\n Total astroid left is :";
    for(int i : result){
        cout<<i<<" ";
    }
}
