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

    // Function to find the number of non-leaf nodes in BST
    int countNonLeafNodes(Tree *root){
        if(root==NULL){
            return 0;
        }
        if(root->left==NULL && root->right==NULL){
            return 0;
        }
        return countNonLeafNodes(root->left)+countNonLeafNodes(root->right)+1;
    }

    // Function to find the number of nodes at a given level in BST
    int countNodesAtLevel(Tree *root,int level){
        if(root==NULL){
            return 0;
        }
        if(level==0){           
            return 1;
        }
        return countNodesAtLevel(root->left,level-1)+countNodesAtLevel(root->right,level-1);
    }   

    // Function to find the level of a given node in BST
    int findLevel(Tree *root,int value,int level){
        if(root==NULL){
            return -1;
        }
        if(root->data==value){
            return level;
        }
        int leftLevel=findLevel(root->left,value,level+1);
        if(leftLevel!=-1){
            return leftLevel;
        }
        return findLevel(root->right,value,level+1);
    }
    
};

// find the inorder successor of a given node in BST
Tree * inOrderSuccessor(Tree *root,Tree *node){
    if(node->right!=NULL){
        return minValueNode(node->right);
    }   
    Tree *successor=NULL;
    Tree *ancestor=root;
    while(ancestor!=node){  
        if(node->data<ancestor->data){
            successor=ancestor;
            ancestor=ancestor->left;
        }else{
            ancestor=ancestor->right;
        }
    }
    return successor;
}

// find the inorder predecessor of a given node in BST
Tree * inOrderPredecessor(Tree *root,Tree *node){
    if(node->left!=NULL){
        return maxValueNode(node->left);
    }       
    Tree *predecessor=NULL;
    Tree *ancestor=root;
    while(ancestor!=node){      
        if(node->data>ancestor->data){
            predecessor=ancestor;
            ancestor=ancestor->right;
        }else{
            ancestor=ancestor->left;
        }
    }       
    return predecessor;
}
   
 // find the lowest common ancestor of two nodes in BST
Tree * lowestCommonAncestor(Tree *root,Tree *p,Tree *q){
    if(root==NULL){
        return NULL;
    }
    if(p->data<root->data && q->data<root->data){
        return lowestCommonAncestor(root->left,p,q);    
    }else if(p->data>root->data && q->data>root->data){
        return lowestCommonAncestor(root->right,p,q);
    }else{        
        return root;
    }
}

// find the distance between two nodes in BST
int distanceBetweenNodes(Tree *root,Tree *p,Tree *q){
    Tree *lca=lowestCommonAncestor(root,p,q);
    int distanceLcaToP=findLevel(lca,p->data,0);
    int distanceLcaToQ=findLevel(lca,q->data,0);
    return distanceLcaToP+distanceLcaToQ;
}   



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