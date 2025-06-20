#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next= NULL;
        cout<<"\n data inset in linklist";
    }
    void display(Node *head){
        Node *temp = head;
        while(temp!=NULL){
            cout<<"\t"<<temp->data;
            temp = temp->next;
        }
    }
};

int main(){
    Node *frist =new Node(10);
    Node *second =new Node(20);
    Node *third =new Node(30);
    Node *head = frist;
    frist->next = second;
    frist->next->next = third;
    // cout<<"\nfrist data"<<frist->data<<endl;
    // cout<<frist->next->data<<endl;
    // cout<<frist->next->next->data<<endl;
    head-> display(head);
    return 0;
}