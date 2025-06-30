// #include<iostream>
// using namespace std;
//  class Node {
//     public:
//     Node *prev;
//     int data;
//     Node *next;
//     Node(int d){
//         prev =NULL;
//         data=d;
//         next= NULL;
//     }
//     void forword(Node *head){
//         Node *temp = head;
//         while(temp!=NULL){
//             cout<<"\t===>"<<temp->data;
//             temp =temp->next;
//         }
//     }
//     void backword(Node *tail){
//         Node *temp = tail;
//         while(temp!=NULL){
//             cout<<"\t===>"<<temp->data;
//             temp =temp->prev;
//         }
//     }
//  };

//  int main(){
//     Node *f1 = new Node(11);
//     Node *f2 = new Node(22);
//     Node *f3 = new Node(33);
//     f1->next = f2;
//     f2->prev=f1;

//     f2->next = f3;
//     f3->prev =f2;
//     Node *head =f1;

//     Node *tail =f3;
//     cout<<"\n Print data in forword direction \n";
//     head->forword(head);
//     cout<<"\n Print data in backword direction \n";
//     head->backword(tail);
//  }


#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d) {
        data = d;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node *head;

    DoublyLinkedList() {
        head = NULL;
    }

    void display() {
        Node *temp = head;
        while (temp != NULL) {
            cout << "<==>" << temp->data;
            temp = temp->next;
        }
        cout << endl;
    }

    void insertFirst(int d) {
        Node *newNode = new Node(d);
        if (head != NULL) {
            newNode->next = head;
            head->prev = newNode;
        }
        head = newNode;
    }

    void insertLast(int d) {
        Node *newNode = new Node(d);
        if (head == NULL) {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }

    void insertAtPos(int d, int pos) {
        if (pos < 1) {
            cout << "Invalid position!" << endl;
            return;
        }

        if (pos == 1) {
            insertFirst(d);
            return;
        }

        Node *newNode = new Node(d);
        Node *temp = head;

        for (int i = 1; i < pos - 1 && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }

        newNode->next = temp->next;
        newNode->prev = temp;
        if (temp->next != NULL) {
            temp->next->prev = newNode;
        }
        temp->next = newNode;
    }

    void deleteFirst() {
        if (head == NULL) return;
        Node *temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        delete temp;
    }

    void deleteLast() {
        if (head == NULL) return;
        if (head->next == NULL) {
            delete head;
            head = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->prev->next = NULL;
        delete temp;
    }

    void deleteAtPos(int pos) {
        if (head == NULL || pos < 1) return;

        if (pos == 1) {
            deleteFirst();
            return;
        }

        Node *temp = head;
        for (int i = 1; i < pos && temp != NULL; i++) {
            temp = temp->next;
        }

        if (temp == NULL) {
            cout << "Position out of range!" << endl;
            return;
        }

        if (temp->prev != NULL)
            temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;

        delete temp;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertLast(10);
    dll.insertLast(20);
    dll.insertLast(30);
    dll.insertLast(40);

    cout << "Original Doubly Linked List:\n";
    dll.display();

    dll.insertFirst(5);
    cout << "\nAfter inserting at first:\n";
    dll.display();

    dll.insertLast(50);
    cout << "\nAfter inserting at last:\n";
    dll.display();

    dll.insertAtPos(25, 4);
    cout << "\nAfter inserting 25 at position 4:\n";
    dll.display();

    dll.deleteFirst();
    cout << "\nAfter deleting first node:\n";
    dll.display();

    dll.deleteLast();
    cout << "\nAfter deleting last node:\n";
    dll.display();

    dll.deleteAtPos(3);
    cout << "\nAfter deleting node at position 3:\n";
    dll.display();

    return 0;
}