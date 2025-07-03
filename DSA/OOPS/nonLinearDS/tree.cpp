//Tree Data Structure
#include<iostream>
using namespace std;

class Tree{
    public:
    Tree *left;
    int data;
    Tree *right;

        Tree(int data){
            left=NULL;
            this->data=data;
            right=NULL;
            cout<<"\n Node Created";
        }
    void PreOrder(Tree *root){
        if(root==NULL){
            return;
        }
        cout<<"===>"<<root->data;
        PreOrder(root->left);//for left sub tree
        PreOrder(root->right);//for right sub tree
       
    }
        void InOrder(Tree *root){
        if(root==NULL){
            return;
        }
   
        InOrder(root->left);//for left sub tree
        cout<<"===>"<<root->data;
        InOrder(root->right);//for right sub tree
       
    }
    void PostOrder(Tree *root){
        if(root==NULL){
            return;
        }
        PostOrder(root->left);//for left sub tree
        PostOrder(root->right);//for right sub tree
        cout<<"===>"<<root->data;
       
    }
};
int main(){
   
        Tree *t1=new Tree(10);
        Tree *t2=new Tree(20);
        Tree *t3=new Tree(30);
        Tree *t4=new Tree(40);
        Tree *t5=new Tree(50);
        Tree *t6=new Tree(60);
        Tree *t11=new Tree(70);
        Tree *t7=new Tree(80);
        Tree *t8=new Tree(90);
        Tree *t9=new Tree(100);
        Tree *t10=new Tree(110);
       
        t1->left=t2;
        t1->right=t3;
        t1->left->left=t4;
        t1->left->right=t5;
        t1->left->left->left=t7;
        t1->left->left->right=t8;
        t1->left->right->left=t9;
        t1->left->right->right=t10;
        t1->right->left=t6;
        t1->right->right=t11;
        cout<<"\nPrint Data in Pre Order \n";
        t1->PreOrder(t1);
        cout<<"\nPrint Data in In Order \n";
        t1->InOrder(t1);
        cout<<"\nPrint Data in Post Order \n";
        t1->PostOrder(t1);
   
    return 0;
}