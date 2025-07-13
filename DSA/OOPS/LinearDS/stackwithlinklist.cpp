#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};

class Stack {
public:
    Node *top;
    Stack() {
        top = NULL;
    }

    void push(int d) {
        Node *newNode = new Node(d);
        if (top == NULL) {
            top = newNode;
            cout << "First Element Push into stack";
        } else {
            newNode->next = top;
            top = newNode;
            cout << "\nPush Element after First Element";
        }
    }

    int pop() {
        if (top == NULL) {
            cout << "\nStack is Empty";
            return -1;
        }
        int r;
        Node *temp = top;
        r = temp->data;
        top = top->next;
        delete temp;
        return r;
    }

    void display() {
        Node *temp = top;
        cout << "\nPrint Data of Stack\n";
        while (temp != NULL) {
            cout << "\n===>" << temp->data;
            temp = temp->next;
        }
    }

    int peek() {
        if (top == NULL) {
            cout << "\nStack is Empty";
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    Stack sk;
    sk.push(10);
    sk.push(20);
    sk.push(30);
    sk.push(40);
    sk.push(50);
    sk.display();
    cout << "\nDeleted Element from the Stack: " << sk.pop();
    cout << "\nDeleted Element from the Stack: " << sk.pop();
    cout << "\nTop Element of the Stack: " << sk.peek();
    cout << "\nIs Empty: " << sk.isEmpty();
    cout << "\nDeleted Element from the Stack: " << sk.pop();
    cout << "\nDeleted Element from the Stack: " << sk.pop();
    cout << "\nDeleted Element from the Stack: " << sk.pop();
    sk.display();
    return 0;
}
