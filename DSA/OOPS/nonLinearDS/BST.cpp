#include<iostream>
using namespace std;
class Tree{
    public:
        int data;
        Tree *left;
        Tree *right;
    Tree(int d){
        left=NULL;
        data=d;
        right=NULL;
    }
    
    //Function to insert new node in BST
    Tree * insert(Tree *root,int value){
        if(root==NULL){
            cout<<"\n Root Node Created";
            return new Tree(value);
        }
        if(value<root->data){
            root->left=insert(root->left,value);
            cout<<"\n Current Node Left ";
        }else if(value>root->data){
            root->right=insert(root->right,value);
            cout<<"\n Current Node Right";
        }
        return root;
    }
    void inOrder(Tree *root){
        if(root==NULL){
            return;
        }
        inOrder(root->left);
        cout<<"===>"<<root->data;
        inOrder(root->right);
    }

    // Function to search a node in BST
    Tree * search(Tree *root,int value){
        if(root==NULL){
            cout<<"\n Node Not Found";
            return NULL;
        }
        if(root->data==value){
            cout<<"\n Node Found";
            return root;
        }
        if(value<root->data){   
            return search(root->left,value);
        }else if(value>root->data){
            return search(root->right,value);
        }
    }   

    // Function to delete a node in BST
    Tree * deleteNode(Tree *root,int value){
        if(root==NULL){
            cout<<"\n Node Not Found";
            return NULL;
        }
        if(value<root->data){
            root->left=deleteNode(root->left,value);
        }else if(value>root->data){
            root->right=deleteNode(root->right,value);
        }else{      
            if(root->left==NULL){
                Tree *temp=root->right;
                delete root;
                return temp;
            }else if(root->right==NULL){
                Tree *temp=root->left;
                delete root;
                return temp;
            }
            Tree *temp=minValueNode(root->right);
            root->data=temp->data;
            root->right=deleteNode(root->right,temp->data);
        }
        return root;
    }
};







int main(){
    Tree *root=NULL;
    root=root->insert(root,50);
    root->insert(root,30);
    root->insert(root,60);
    root->insert(root,40);
    root->insert(root,20);
    root->insert(root,10);
    root->insert(root,55);
    root->insert(root,70);
    root->inOrder(root);
    return 0;
}