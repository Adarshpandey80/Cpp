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