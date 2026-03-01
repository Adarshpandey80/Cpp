#include<iostream>
#include<vector>
#include<map>
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

// add two LL 

Node* addTwoLL(Node* num1 , Node* num2){
    Node* dummyhead = new Node(-1);
    Node* curr = dummyhead;
    Node* t1 = num1;
    Node* t2 = num2;
    int carry = 0;
    while(t1!=NULL || t2!=NULL){
        int sum = carry;
        if(t1) sum += t1->data;
        if(t2) sum += t2->data;
        Node* newnode = new Node(sum%10);
        carry = sum/10;
        curr->next = newnode;
        curr = curr->next;
        if(t1) t1 = t1->next;
        if(t2) t2 = t2->next;

    }

    if(carry){
        Node* newNode = new Node(carry);
        curr = curr->next;
    }
    return dummyhead->next;
}

///.  odd & event Linked list

Node* oddeven(Node* head){
    if(head==NULL ||  head->next == NULL){
        return head;
    }
    Node* odd = head;
    Node* even = head->next;
    Node* evenhead = head->next;
    while(even!=NULL && even->next != NULL){
        odd->next = odd->next->next;
        even->next = even->next->next;
       
        odd = odd->next;
        even = even->next;

    }
    odd->next = evenhead;
    return head;
}

///.   arrange Linkedlist 0s , 1s and 2s ;

Node* arrangezerosonestwos(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* zerohead = new Node(-1);
    Node* onehead = new Node(-1);
    Node* twohead = new Node(-1);
    Node* zero = zerohead;
    Node* one = onehead;
    Node* two = twohead;
    Node* temp = head;
    while(temp!=NULL){
        if(temp->data == 0){
            zero->next =temp;
            zero = zero->next;
        } else if(temp->data == 1){
            one->next = temp;
            one = one->next;
        } else {
            two->next = temp;
            two = two->next;
        }
        temp = temp->next;
    }
    zero->next = (onehead->next)? (onehead->next): (twohead->next);
    one->next = twohead->next;
    two->next = NULL;
    Node* newHead = zerohead->next;

    delete(zerohead);
    delete(onehead);
    delete(twohead);
    return newHead;
}

// delete kth node fron last node of the linkedlist

Node* deletekthelemetfromlast(Node* head, int k){

    if(head == NULL) 
        return NULL;

    int cnt = 0;
    Node* temp = head;

    // Count nodes
    while(temp != NULL){
        cnt++;
        temp = temp->next;
    }

    // If deleting head
    if(cnt == k){
        Node* newhead = head->next;
        delete head;
        return newhead;
    }

    int pos = cnt - k;  // node before deletion

    temp = head;

    for(int i = 1; i < pos; i++){
        temp = temp->next;
    }

    Node* deletenode = temp->next;
    temp->next = deletenode->next;
    delete deletenode;

    return head;
}

//  Better Method (One-Pass )
Node* deleteKthFromEnd(Node* head, int k){

    Node* fast = head;
    Node* slow = head;

    for(int i = 0; i < k; i++){
        fast = fast->next;
    }

    if(fast == NULL){
        Node* newhead = head->next;
        delete head;
        return newhead;
    }

    while(fast->next != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    Node* deletenode = slow->next;
    slow->next = deletenode->next;
    delete deletenode;

    return head;
}

// reverse a linkedlist 

Node* reverseLL(Node* head){
    Node* temp  = head;
    stack<int> st;

    while(temp!=NULL){
      st.push(temp->data);
      temp = temp->next;
    }
   temp = head;
    while(temp != NULL){
         temp->data = st.top();
         st.pop();
         temp = temp->next;
    }
    return head;
}

// mthod second 

Node* reverseLLM2(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp!= NULL){
        Node* front = temp->next;  // store next
        temp->next = prev;         // reverse link
        prev = temp;               // move prev
        temp = front; 
   
    }
    return prev;
}

// check palindrom or not 

bool palindrom(Node* head){
    if(head==NULL || head->next == NULL) return true;
    Node* temp = head;
    stack<int> st;
    while(temp!=NULL){
        st.push(temp->data);
        temp  = temp->next;
    }
    temp = head;
    while(temp!=NULL){
        if(temp->data != st.top()) {
             return false ;
        }
         temp = temp->next;
         st.pop();
    }
    return true;
}

//. find the intersection point of y ll;

// method1

Node* intersection(Node* head1 ,  Node* head2){
   map<Node* , int > mpp;
   Node* temp = head1;
   while(temp!=NULL){
      mpp[temp] = 1;
      temp = temp->next;
   }
   temp = head2;
   while(temp!=NULL){
    if(mpp.find(temp) != mpp.end()){
        return temp;
    }
    temp = temp->next;
   }
   return NULL;
}

// method 2

Node* findintersection(Node* fristhead , Node* seconhead){
    if(fristhead == NULL || seconhead == NULL) return NULL;
    Node* temp1 = fristhead;
    Node* temp2 = seconhead;
    while(temp1 != temp2){
        temp1 = temp1->next;
        temp2 = temp2->next;
        if(temp1 == temp2 ) return temp1;
        if(temp1 == NULL ) temp1 = seconhead;
        if(temp2 == NULL) temp2 = fristhead;
    }
    return temp1;
}

// find middle of the Ll;

// method 1

Node* findmiddle(Node* head){
    if(head==NULL || head->next==NULL) return head;
    Node* temp = head;
    int cnt= 0;
    while(temp!=NULL){
      cnt++;
      temp = temp->next;
    }
   int middle = (cnt/2) ;
   temp =  head;
   while(middle--){
    temp = temp->next;
   }
   return temp;
}

// method2;

Node* findmiddle2(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Delete a loop i the ll
// method 1 hashing
bool findloop(Node* head){
    map<Node* , int> mpp;
    Node*temp = head;
    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;

    }
    return false;
}

// method 2 tontoise and hare

bool findloop2(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast!=NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}

// length of the loop in ll
// method 1;
int  findlength(Node* head){
    Node* temp = head;
  int  timer = 1;
    map<Node* , int> mpp;
 while(temp!= NULL){
    if(mpp.find(temp)!= mpp.end()){
       int  value = mpp[temp];
        return (timer-value);

    }
    mpp[temp] = timer;
    timer++;
    temp = temp->next;
 }
 return 0;

}

// method 2 tontoise and head;

// int findlength(slow, fast){
//     int cnt = 1;
//     fast = fast->next;
//     while(slow!=fast){
//         cnt++;
//         fast = fast->next;
//     }
//     return cnt;
// }

// int finflengthofloop(Node* head){
//     Node* slow = head;
//     Node*fast = head;
//     while(fast!=NULL && fast->next!= NULL){
//         slow = slow->next;
//         fast = fast->next->next;
//         if(slow == fast){
//             return findlength(slow, fast);
//         }
//     }
//     return 0;
// }

Node* deletemiddleNode(Node*head){
    Node* next ;
    Node* temp = head;
    Node* slow = head;
    Node* fast = head;
    while(fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    Node* deletenode = slow;
    next = slow->next;
      while(temp!=NULL){
        if(temp->next == slow) break;
        temp = temp->next;
      }
      temp->next = next;
      delete(deletenode);
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
    vector<int> arr = {3,1,4,6,2};
    // vector<int> arr1 = { 1,2,4,5,4,6,2}; // used for find intersection ;
    // vector<int> arr = {1,2,0,2,0,1,0,2,1,0}; // only for arrangezerosonestwos function
    // vector<int> arr = {1,2,3,2,3 };  // only for palindrom check
    // Node* y = new Node(arr[0]);
    // cout<<y->data;

    Node* head = convertArr2LL(arr); // convert array into LL
    // Node* head1 = convertArr2LL(arr1); // convert array into LL
   
    // cout<<head->data;
    // Node* temp = head;
    // while(temp){
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    
    // cout<<lengthofLl(head); // length find;

    // cout<<checkValueinLl(head , 4);

    // head = deletehead(head);  // delete head;
    // printlist(head);
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

    // head = insertinKthposition(head , 3,100);
    // printlist(head);

    // head =  addTwoLL(head , head); // add two LL
    // printlist(head);

    // head = oddeven(head); // odd even 
    // printlist(head);

    // head = arrangezerosonestwos(head);
     
    // head = reverseLL(head); // reverse LL 
    // head = reverseLLM2(head); // reverse LL M2
    // cout<<palindrom(head); // check palinrom


    // head = intersection(head, head1);  // OLD - WRONG
    
    // Find intersection point
    // Node* intersectNode = intersection(head, head1);
    
    // if(intersectNode != NULL){
    //     cout << "Intersection point data: " << intersectNode->data << endl;
    // } else {
    //     cout << "No intersection found" << endl;
    // }
    
    // If you want to print from intersection point onwards:
    // printlist(intersectNode);

    // head = findmiddle(head); // find middle method 1;
    // head = findmiddle2(head); //  find middle method 2
    // cout<<head->data;

    head = deletemiddleNode(head);
    printlist(head);
}
