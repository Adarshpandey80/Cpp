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

// delete element node


Node* deleteEle(Node* head ,  int el){
    if(head==NULL) return head;
    if(head->data == el){
        Node* temp = head;
        head =  head->next;
        delete temp;
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
     
        if(head->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

// update element in kth place with new value

Node* addValueKnode(Node* head ,  int k , int val){
    if(head==NULL) return head;
    if(k==1){
        head->data = val;
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    // Node* prev = NULL;
    while(temp != NULL){
        cnt++;
        if(cnt == k){
            temp->data = val;
        }
        temp = temp->next;
    }
    return head;
}

// ==========================================Insetion==================

// insert new head ;
Node* insertnewhead(Node* head , int newNode){
    Node* temp = new Node(newNode);
    temp->next = head;
    return temp;
}

// insert new teal node 

Node* insertTealNode(Node* head , int newNodeValue){
    if(head==NULL) {
        Node* head = new Node(newNodeValue);
        return head;
    }
    Node* temp = head;
    while (temp->next != NULL)
    {
       temp = temp->next;
    }
    Node* newNode = new Node(newNodeValue);
    temp->next = newNode;
    return head;
}

//. insert node  in kth position  


Node* insertinKthposition(Node* head ,int k , int value){
    if(head==NULL){
        Node* temp = new Node(value);
        return temp;
    }
    if(k==1){
        return new Node(value , head);
    }

    int cnt = 0;
    Node* temp = head;
    while(temp!=NULL){
        cnt++;
        if(cnt == (k-1)){
            Node* newNode = new Node(value);
            newNode->next = temp->next;
            temp->next = newNode;
            break;
        }
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

    // head = deletehead(head);  // delete head;
    printlist(head);
    // head = deletelastnode(head); // delete last node 
    // printlist(head);

    // head = deleteknode(head , 3); // delete kth node
    // printlist(head);

    // head = deleteEle(head , 4); // delete elemet node;
    // printlist(head);

    // head = addValueKnode(head , 3 , 14); // update Value int kth place 
    // printlist(head);

    // head = insertnewhead(head , 10);
    // printlist(head);
     
    // head = insertTealNode(head , 16);
    // printlist(head);

    head = insertinKthposition(head , 3,100);
    printlist(head);
}