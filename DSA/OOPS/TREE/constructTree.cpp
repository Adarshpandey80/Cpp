#include<iostream>
using namespace std;

 struct Node{
    int data ; 
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = right = NULL;
    } 

    void preorder(Node* root){
        if(root == NULL) return;
        cout<<root->data;
        preorder(root->left);
        preorder(root->right);
       
    }

    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }

    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data;
        inorder(root->right);
    }


};

int main(){
    Node* root = new Node(1);
   root->left = new Node(3);
   root->right = new Node(4);
   root->left->right = new Node(5);

   Node* temp;
//    temp->preorder(root);
//    temp->postorder(root);
       temp->inorder(root);
}