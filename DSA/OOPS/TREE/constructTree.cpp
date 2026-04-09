#include<iostream>
#include<stack>
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

class Solution{
    public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> ans;
        if(root == NULL) return ans;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            vector<int> level;
            for(int i=0; i<size; i++){
                Node* node = q.front();
                q.pop();
                level.push_back(node->data);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            ans.push_back(level);
        }
        return ans;
    }
};


// recursive preorder 

class Solution{
    public:
    vector<int> preorderTraversal(Node* root){
        vector<int> preorder;
        stack<Node*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            preorder.push_back(root->data);
            if(root->right!= NULL){
                st.push(root->right);
            }
            if(root->left!= NULL){
                st.push(root->left);
            }
        }
    return preorder;

    }
};


class Solution2{
    public:
    vector<int> Inorder(Node* root){
        vector<int> inorder;
        stack<Node*> st;
        if(root == NULL) return inorder;
        st.push(root);
        while (!st.empty())
        {
             root = st.top();
             st.pop();
             if(root->left!= NULL){
                st.push(root->left);
             }
             inorder.push_back(root->data);
             if(root->right!=NULL){
                st.push(root->right);
             }
        }
        return inorder;
    }
};

int main(){
    Node* root = new Node(1);
   root->left = new Node(3);
   root->right = new Node(4);
   root->left->right = new Node(5);
   root->left->left = new Node(6);
   root->right->right = new Node(2);
   root->right->left = new Node(7);

//    Node* temp;
//    temp->preorder(root);
//    temp->postorder(root);
//    temp->inorder(root);


// level order traversal
    Solution s;
    Solution2 s2;
    vector<int> ans = s.preorderTraversal(root);
    for(auto j : ans){
        cout<<j<<" ";
    }

    
    
}