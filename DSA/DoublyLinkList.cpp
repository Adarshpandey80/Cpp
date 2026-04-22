#include <iostream>
#include <vector>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

public:
    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }

public:
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node *convertArray2DLL(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp;
        temp->back = mover;
        mover = temp;
    }
    return head;
}

void printDLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deletehead(Node *head)
{
    if (head == NULL)
        return NULL;
    Node *temp = head;
    head = head->next;
    delete (temp);
    return head;
}

Node *deletetail(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete (head);
        return NULL;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    prev->next = nullptr;
    temp->back = nullptr;
    delete (temp);
    return head;
}

Node *deletekthelement(Node *head, int k)
{
    if (head == NULL)
        return NULL;
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;

        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;

    if (prev == NULL && front == NULL)
    {
        return NULL;
    }
    if (prev == NULL)
    {
        return deletehead(head);
    }
    if (front == NULL)
    {
        return deletetail(head);
    }
    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;
    return head;
}

// ====================insert in DLL =============================

Node *inserthead(Node *head, int val)
{

    //  Node* newhead = new Node(val);  // manual set
    //  newhead->next = head;
    //   head->back = newhead;
    //   return newhead;

    Node *newhead = new Node(val, head, nullptr); // constructor use
    head->back = newhead;
    return newhead;
}

Node *insertail(Node *head, int val)
{
    if (head == NULL)
    {
        return inserthead(head, val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);
    newNode->back = temp;
    temp->next = newNode;
    return head;
}

Node *insertbeforetail(Node *head, int val)
{
    if (head == NULL)
    {
        return inserthead(head, val);
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

Node *insertkthelemet(Node *head, int k, int val)
{
    if (k == 1)
    {
        return inserthead(head, val);
    }
    int cnt = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        cnt++;
        if (cnt == k)
            break;
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
    return head;
}

// =====================================DSA Problems=================

// reverse DLL;

Node *reverseDLL(Node *head)
{
    stack<int> st;
    Node *temp = head;
    while (temp != NULL)
    {
        st.push(temp->data);
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        temp->data = st.top();
        st.pop();
        temp = temp->next;
    }
    return head;
}

////===================method 2
Node *reverseDLL2(Node *head)
{

    if (head == NULL || head->next == NULL)
        return head;

    Node *temp = NULL;
    Node *current = head;

    while (current != NULL)
    {
        // Swap next and back
        temp = current->back;
        current->back = current->next;
        current->next = temp;

        // Move to next node (which is previous originally)
        current = current->back;
    }

    // After loop, temp is pointing to node before NULL
    if (temp != NULL)
        head = temp->back;

    return head;
}

// Delete all occurance key

Node *deleteoccurance(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            if (temp == head)
            {
                head = temp->next;
            }
            Node *prevNode = temp->back;
            Node *nextNode = temp->next;
            if (nextNode != NULL)
                nextNode->back = prevNode;
            if (prevNode != NULL)
                prevNode->next = nextNode;
            delete (temp);
            temp = nextNode;
        }
        else
        {
            temp = temp->next;
        }
    }
    return head;
}

// find pair with given sum in DLL


Node* findTail(Node* head){
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    return tail;
}

vector<pair<int,int>> findpair(Node* head, int k){

    vector<pair<int,int>> ans;
    if(head == NULL) return ans;

    Node* left = head;
    Node* right = findTail(head);

    while(left->data <right->data){

        int sum = left->data + right->data;

        if(sum == k){
            ans.push_back({left->data, right->data});
            left = left->next;
            right = right->back;
        }
        else if(sum < k){
            left = left->next;
        }
        else{
            right = right->back;
        }
    }

    return ans;
}

// remove duplicate from the sorted array

Node* deleteduplicate(Node*head){
    Node* temp = head;
    while(temp!=NULL && temp->next!=NULL){
        Node* nextNode = temp->next;
        while(nextNode!=NULL && nextNode->data==temp->data){
            Node*duplicate= nextNode;
            nextNode = nextNode->next;
            delete(duplicate);
        }
        temp->next = nextNode;
        if(nextNode!=NULL) nextNode->back = temp;
        temp = temp->next;
    }
    return head;
}

int main()
{
    // vector<int> arr = {2, 1, 4, 3, 6, 7, 3};
    // vector<int> arr = {1,2,3,4,9}; // for pair sum problem
    vector<int> arr = {1,1,1,2,2,3,3};
    Node *head = convertArray2DLL(arr);
    // printDLL(head);
    // head = deletehead(head);

    //  head = deletetail(head);

    //  head = deletekthelement(head , 4);

    //  head = inserthead(head , 10);

    //  head = insertail(head , 22);

    //  head = insertbeforetail(head , 33);

    //  head = insertkthelemet(head , 3 , 17);

    //  head = reverseDLL(head);

    //  head = reverseDLL2(head);
    //    int key = 3;
    //      head = deleteoccurance(head , key);
    // vector<pair<int,int>> result = findpair(head, 5);
    
    // cout << "Pairs with sum 5: ";
    // for(auto &p : result){
    //     cout << "(" << p.first << "," << p.second << ") ";
    // }
    // cout << endl

    head = deleteduplicate(head);

    printDLL(head);
}



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
int linear_search (int arr[], int search_element,int size){
    int pos=-1;
    for(int i=0; i<size;i++){
        if(arr[i]==search_element){
            pos= i+1;
        } 
    }
    return pos;
}
int main(){
    int arr[] = {10,2,3,20,30,40,6};
    int search_element = 6;
    int r = linear_search(arr,search_element , 7);
    if(r==-1){
        cout << "\n Element is not found" << r <<endl;
    } else{
        cout << "\n Element found at " << r << endl;
    }
    return 0;
}