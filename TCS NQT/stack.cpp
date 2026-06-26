#include <iostream>
#include <vector>
#include<list>
using namespace std;

// using vector

// class Stack {
//      vector<int> st;
//      public: 
// void push(int val){
//    st.push_back(val);
// }
// void pop(){
//     st.pop_back();
// }

// int top(){
//     return st[st.size()-1];
// }
// bool isEmplty(){
//     st.empty();
// }

// };

// int main(){
//     Stack s;
//     s.push(30);
// }


// stack using ll;

class Stack{
    list<int> ll;

    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
};


// using stack wap to reverse a string

class reverseString{
    list<char> ll;
    public:
    void push(char val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    char top(){
        return ll.front();
    }
    void print(){
        for(char ch : ll){
            cout<<ch;
        }
    }
};

 // using stack to check the valid paranthesis

 class validParanthesis{
    list<char> ll;
    public:
    void push(char val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    char top(){
        return ll.front();
    }
    bool isEmpty(){
        return ll.empty();
    }
    bool isValid(string s){
        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                push(ch);
            } else {
                if(isEmpty()) return false;
                char topChar = top();
                if((ch == ')' && topChar == '(') || (ch == '}' && topChar == '{') || (ch == ']' && topChar == '[')){
                    pop();
                } else {
                    return false;
                }
            }
        }
        return isEmpty();   
    }
};
        
// using stack to reverse an array

class reverseArray{
    list<int> ll;
    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    void print(){
        for(int val : ll){
            cout<<val<<" ";
        }
    }
};

// using stack to find the next greater element

class nextGreaterElement{
    list<int> ll;
    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool isEmpty(){
        return ll.empty();
    }
    vector<int> findNextGreater(vector<int>& nums){
        vector<int> result(nums.size(), -1);
        for(int i = 0; i < nums.size(); i++){
            while(!isEmpty() && nums[i] > top()){
                result[ll.size() - 1] = nums[i];
                pop();
            }
            push(nums[i]);
        }
        return result;
    }
};

// using stack to evaluate postfix expression

class evaluatePostfix{
    list<int> ll;
    public:
    void push(int val){
        ll.push_front(val);
    }
    void pop(){
        ll.pop_front();
    }
    int top(){
        return ll.front();
    }
    bool isEmpty(){
        return ll.empty();
    }
    int evaluate(string s){
        for(char ch : s){
            if(isdigit(ch)){
                push(ch - '0');
            } else {
                int val2 = top(); pop();
                int val1 = top(); pop();
                switch(ch){
                    case '+': push(val1 + val2); break;
                    case '-': push(val1 - val2); break;
                    case '*': push(val1 * val2); break;
                    case '/': push(val1 / val2); break;
                }
            }
        }
        return top();
    }
};