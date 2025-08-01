
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
        //    cout<<"\n Root Node Created";
            return new Tree(value);
        }
        if(value<root->data){
            root->left=insert(root->left,value);
        //    cout<<"\n Current Node Left ";
        }else if(value>root->data){
            root->right=insert(root->right,value);
        //    cout<<"\n Current Node Right";
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
    //find Minimum 
    Tree * findMin(Tree *root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }
    Tree * deleteNode(Tree *root,int key){
    if(root==NULL){
        return root;
    }
    if(key<root->data){
        root->left=deleteNode(root->left,key);
    }else if(key>root->data){
        root->right=deleteNode(root->right,key);
    }else{
        //case 1: No Child
        if(root->left==NULL&&root->right==NULL){
            delete root;
            return NULL;
        }
        //case 2: One child (right)
        else if(root->left==NULL){
            Tree *temp=root->right;
            delete root;
            return temp;
        }
        //case 3: one child(left)
        if(root->right==NULL){
            Tree *temp=root->left;
            delete root;
            return temp;
        }
        //case 4: Two children
        Tree *temp=findMin(root->right);
        root->data=temp->data;
        root->right=deleteNode(root->right,temp->data);
    }
    return root;
        
    }
    bool search(Tree *root,int key){
        if(root==NULL){
            return false;
        }
        if(root->data==key){
            return true;
        }else if(key<root->data){
            return search(root->left,key);
        }else{
            return search(root->right,key);
        }
    }
};


int main(){
    Tree *root=NULL;
    root=root->insert(root,80);
    root->insert(root,30);
    root->insert(root,70);
    root->insert(root,20);
    root->insert(root,40);
    root->insert(root,60);
    root->insert(root,80);
    root->insert(root,55);
    root->insert(root,90);


    bool r=root->search(root,85);
    if(r){
        cout<<"\nSearching Successful";
    }
    else{
        cout<<"\nElement Not Found";
    }
    return 0;
}