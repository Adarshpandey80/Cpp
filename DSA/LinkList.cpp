#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data1 , Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
} ;

// convert array to linklist;

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
// find the length of the linklist 
int lengthofLl(Node* head){
    int count = 0;
    Node * temp = head;
    while(temp){
        temp = temp->next;
        count++;
    }
    return count;
}

int checkValueinLl(Node* head , int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr = {2,3,4,5};
    // Node* y = new Node(arr[0]);
    // cout<<y->data;

    Node* head = convertArr2LL(arr); // convert array into LL
    // cout<<head->data;
    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    
    // cout<<lengthofLl(head); // length find;
    cout<<checkValueinLl(head , 4);
}