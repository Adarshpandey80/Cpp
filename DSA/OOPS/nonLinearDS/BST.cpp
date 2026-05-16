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

    // function to update a node in BST
    Tree * updateNode(Tree *root,int oldValue,int newValue){
        root=deleteNode(root,oldValue);
        root=insert(root,newValue); 
        return root;
    } 

    // Function to find the minimum value node in BST
    Tree * minValueNode(Tree *node){
        Tree *current=node;
        while(current && current->left!=NULL){
            current=current->left;  
        }
        return current; 
    
    // function to find the maximum value node in BST
    Tree * maxValueNode(Tree *node){
        Tree *current=node;
        while(current && current->right!=NULL){
            current=current->right;  
        }
        return current; 
    }
    // Function to find the height of BST
    int height(Tree *root){
        if(root==NULL){
            return -1;
        }
        int leftHeight=height(root->left);
        int rightHeight=height(root->right);
        return max(leftHeight,rightHeight)+1;
    }

    // Function to find the number of nodes in BST
    int countNodes(Tree *root){
        if(root==NULL){
            return 0;
        }
        return countNodes(root->left)+countNodes(root->right)+1;
    }
    // Function to find the number of leaf nodes in BST
    int countLeafNodes(Tree *root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 1;
        }
        return countLeafNodes(root->left)+countLeafNodes(root->right);
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