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