#include<iostream>
using namespace std;
 class Node {
    public:
    Node *prev;
    int data;
    Node *next;
    Node(int d){
        prev =NULL;
        data=d;
        next= NULL;
    }
    void forword(Node *head){
        Node *temp = head;
        while(temp!=NULL){
            cout<<"\t===>"<<temp->data;
            temp =temp->next;
        }
    }
    void backword(Node *tail){
        Node *temp = tail;
        while(temp!=NULL){
            cout<<"\t===>"<<temp->data;
            temp =temp->prev;
        }
    }
 };

 int main(){
    Node *f1 = new Node(11);
    Node *f2 = new Node(22);
    Node *f3 = new Node(33);
    f1->next = f2;
    f2->prev=f1;

    f2->next = f3;
    f3->prev =f2;
    Node *head =f1;

    Node *tail =f3;
    cout<<"\n Print data in forword direction \n";
    head->forword(head);
    cout<<"\n Print data in backword direction \n";
    head->backword(tail);
 }