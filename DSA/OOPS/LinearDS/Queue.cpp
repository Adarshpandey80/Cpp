#include <iostream>
using namespace std;

int q[4];
int rear = -1;
int front = -1;

void enqu(int data)
{
    if (rear == 3)
    {
        cout << "\n queue is overflow";
    }
    else
    {
        if (rear == -1 && front == -1)
        {
             rear++;
            front++;
           q[rear] = data;
            cout << "\n frist element insert in queue";
        }
        else
        {
            rear++;
            q[rear] = data;
            cout << "\n rear increase ";
        }
    }
}
int dque()
{
    int r = 0;
    if (front == -1 && rear == -1)
    {
        cout << "\n Under flow condition";
        return -1;
    }
    else
    {
        if (front == rear)
        {
            r = q[front];
            front = -1;
            rear = -1;
        }
        else
        {
            r = q[front];
            front++;
        }
        return r;
    }
}


int peek()
{
    int r = 0;
    if (front == -1 && rear == -1)
    {
        cout << "\n Under flow condition";
        return 0;
    }
    else
    {
        r=q[front];
    }
    return r;
}



// implementing queue using stack

// method 1

class Q {
    public:
    stack<int> s1,s2;
    void push(int x){
        while(s1.size()){
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(s2.size()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    int  top(){
       return s1.top();
     }
     void pop(){
        s1.pop();
     }
};

// method 2 (when lops of push operation done);

class Q{
public:
    stack<int> s1, s2;

    void push(int x){
        s1.push(x);
    }

    void pop(){
        if(!s2.empty()){
            s2.pop();
        }
        else{
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            s1.pop();
        }
    }

    int top(){
        if(!s2.empty()){
            return s2.top();
        }
        else{
            while(s1.size() > 1){
                s2.push(s1.top());
                s1.pop();
            }
            int x = s1.top();
            s2.push(x);
            s1.pop();
            return x;
        }
    }
};

int main()
{
  enqu(10);
  enqu(20);
  enqu(30);
  enqu(40);
  enqu(50);
  cout << "\n deque element is :" << dque();
  cout << "\n peek element is :" << peek();
  cout << "\n deque element is :" << dque();
  return 0;
}