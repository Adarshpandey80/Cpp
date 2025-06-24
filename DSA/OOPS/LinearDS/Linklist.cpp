// #include<iostream>
// using namespace std;
// class Node {
//     public:
//     int data;
//     Node *next;
//     Node(int d){
//         data=d;
//         next= NULL;
//         cout<<"\n data inset in linklist";
//     }
//     void display(Node *head){
//         Node *temp = head;
//         while(temp!=NULL){
//             cout<<"\t"<<temp->data;
//             temp = temp->next;
//         }
//     }
// };

// int main(){
//     Node *frist =new Node(10);
//     Node *second =new Node(20);
//     Node *third =new Node(30);
//     Node *head = frist;
//     frist->next = second;
//     frist->next->next = third;
//     // cout<<"\nfrist data"<<frist->data<<endl;
//     // cout<<frist->next->data<<endl;
//     // cout<<frist->next->next->data<<endl;
//     head-> display(head);
//     return 0;
// }

// =========================================Add node at first and last , specific position and delte node singly linked list========================================


// #include<iostream>
// using namespace std;
// class Node{
//     public:
//         int data;
//         Node *next;
//     Node(int d){
//         data=d;
//         next=NULL;
//     }
//     void display(Node *head){
//         Node *temp=head;
//         while(temp!=NULL){
//             cout<<"===>"<<temp->data;//10==>20==>30==>40==>
//             temp=temp->next;
//         }
//     }
   
//     Node * addFirstNode(Node *head,int d){
//         Node *newNode=new Node(d);
//         newNode->next=head;
//         head=newNode;
//         return head;
//     }
   
//     void addLastNode(Node *head,int d){
//         Node *newNode=new Node(d);
//         Node *temp=head;
//         while(temp->next!=NULL){
//             temp=temp->next;
//         }
//         temp->next=newNode;
//     }
//     //Node delete
//     Node * deleteFirst(Node *head){
//         Node *temp=head;
//         head=head->next;
//         delete(temp);
//         return head;
//     }
   
//     void deleteLast(Node *head){
//         Node *temp=head;
//         while(temp->next->next!=NULL){
//             temp=temp->next;
//         }
//         Node *temp2=temp->next;
//         temp->next=NULL;
//         delete(temp2);
//     }
   
//     void deleteAtPos(Node *head,int pos){
//         Node *temp1=head;
//         Node *temp2=head->next;
//         pos--;//2
//         while(pos>1){
//             temp1=temp1->next;
//             temp2=temp2->next;
//             pos--;//1
//         }
//         Node *temp3=temp2;
//         temp1->next=temp2->next;
//         delete(temp3);
       
//     }
// };

// int main(){
//     Node *first=new Node(10);
//     Node *second=new Node(20);
//     Node *third=new Node(30);
//     Node *forth=new Node(40);
//     first->next=second;
//     first->next->next=third;
//     first->next->next->next=forth;
//     Node *head=first;
//     first->display(head);
// //    head=head->deleteFirst(head);
//     cout<<"\nData of SIngly Linked List after Delete first Node : \n";
//     head->display(head);
// //    head->deleteLast(head);
//     cout<<"\nData of SIngly Linked List after Delete first Node : \n";
//     head->display(head);
//     head->deleteAtPos(head,3);
//     cout<<"\nData of SIngly Linked List after Delete Node 3 : \n";
//     head->display(head);
// return 0;
// }

// =========================================Add node at position linked list========================================

// #include<iostream>
// using namespace std;
// class Node{
// 	public:
// 		int data;
// 		Node *next;
// 	Node(int d){
// 		data=d;
// 		next=NULL;
// 	}
// 	void display(Node *head){
// 		Node *temp=head;
// 		while(temp!=NULL){
// 			cout<<"===>"<<temp->data;//10==>20==>30==>40==>
// 			temp=temp->next;
// 		}
// 	}
	
// 	Node * addFirstNode(Node *head,int d){
// 		Node *newNode=new Node(d);
// 		newNode->next=head;
// 		head=newNode;
// 		return head;
// 	}
	
// 	void addLastNode(Node *head,int d){
// 		Node *newNode=new Node(d);
// 		Node *temp=head;
// 		while(temp->next!=NULL){
// 			temp=temp->next;
// 		}
// 		temp->next=newNode;
// 	}
	
// 	void addNodeAtPos(Node *head,int data,int pos){
// 		Node *newNode=new Node(data);
// 		Node *temp1=head;
// 		Node *temp2=head->next;
// 		pos--;
// 		while(pos>1){
// 			temp1=temp1->next;
// 			temp2=temp2->next;
// 			pos--;
// 		}
// 		temp1->next=newNode;
// 		newNode->next=temp2;
// 	}
// };

// int main(){
// 	Node *first=new Node(10);
// 	Node *second=new Node(20);
// 	Node *third=new Node(30);
// 	Node *forth=new Node(40);
// 	first->next=second;
// 	first->next->next=third;
// 	first->next->next->next=forth;
// 	Node *head=first;
// 	first->display(head);
// 	head->addNodeAtPos(head,35,4);
// 	cout<<"\n after add new Node at specific position \n";
// 	first->display(head);
// 	return 0;
// }

// ==========================================23/6/25 Deletion of linklist==================

