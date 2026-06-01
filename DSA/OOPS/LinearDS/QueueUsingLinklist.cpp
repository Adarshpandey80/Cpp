#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

Node *front = NULL;
Node *rear = NULL;

void enq(int d)
{
    Node *newNode = new Node(d);
    if (front == NULL && rear == NULL)
    {
        front = newNode;
        rear = newNode;
        cout << "\n Frist element added in Queue";
    }
    else
    {
        rear->next = newNode;
        rear = newNode;
        cout << "\n Elemet added after frist element";
    }
}

// method 1
int dque()
{
    int r = 0;
    if (front == NULL && rear == NULL)
    {
        cout << "\n Under flow condition";
        return -1;
    }
    else
    {
        r = front->data;
        Node *temp = front;
        front = front->next;
        delete temp;
        return r;
    }
}

int peek()
{
    int r = 0;
    if (front == NULL && rear == NULL)
    {
        cout << "\n Under flow condition";
        return -1;
    }
    else
    {
        r = front->data;
        return r;
    }
}   

// method 2 (when lops of pop operation done);

int dque()
{
    int r = 0;
    if (front == NULL && rear == NULL)
    {
        cout << "\n Under flow condition";
        return -1;
    }
    else
    {
        r = front->data;
        front = front->next;
        return r;
    }
}

int peek()
{
    int r = 0;
    if (front == NULL && rear == NULL)
    {
        cout << "\n Under flow condition";
        return -1;
    }
    else
    {
        r = front->data;
        return r;
    }
}




int main()
{
    enq(10);
    enq(20);
    enq(30);
    enq(40);
    return 0;
}