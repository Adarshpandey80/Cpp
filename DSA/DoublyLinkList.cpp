#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* back;
    public:
    Node(int data1 , Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* convertArray2DLL(vector<int> & arr){
   Node* head = new Node(arr[0]);
   Node* mover = head;
   for(int i=1;i<arr.size();i++){
   Node* temp = new Node(arr[i]);
    mover->next = temp;
    temp->back = mover;
    mover = temp;
   }
   return head;
}

void printDLL(Node* head){
    while(head != NULL){
         cout<<head->data<<" "; 
         head = head->next;
    }
}

Node* deletehead(Node* head){
    if(head==NULL) return NULL;
    Node* temp = head;
    head = head->next;
    delete(temp);
    return head;
}

Node* deletetail(Node* head){
     if(head==NULL) return NULL;
     if(head->next ==NULL){
        delete(head);
        return NULL;
     }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete(temp);
    return head;
}

Node* deletekthelement(Node* head , int k){
    if(head==NULL) return NULL;
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k)  break;
        
        temp = temp->next;
    } 
    Node* prev = temp->back;
    Node* front = temp->next;

    if(prev == NULL && front==NULL){
        return NULL;
    }
    if(prev == NULL){
        return deletehead(head);
    }
    if(front == NULL){
        return deletetail(head);
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    return head;
}


int main(){
    vector<int> arr = {2,3,4,5};
    Node* head = convertArray2DLL(arr);
    // printDLL(head);
    // head = deletehead(head);

    //  head = deletetail(head);

     head = deletekthelement(head , 4);
    printDLL(head);
}