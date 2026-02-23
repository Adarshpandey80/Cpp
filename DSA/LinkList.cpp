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

// delete head

Node* deletehead(Node* head){
    if(head==NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

// delete last node

Node* deletelastnode(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

// delte node specific K place

Node* deleteknode(Node* head ,  int k){
    if(head==NULL) return head;
    if(k==1){
        Node* temp = head;
        head =  head->next;
        delete temp;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            prev->next = prev->next->next;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// print list

void printlist(Node* head){
   
    while(head != NULL){ 
        cout<<head->data<<" ";
        head = head->next;
    }
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

    // cout<<checkValueinLl(head , 4);

    // head = deletehead(head);  // delte head;
    printlist(head);
    // head = deletelastnode(head);
    // printlist(head);

    head = deleteknode(head , 3);
    printlist(head);
    
}