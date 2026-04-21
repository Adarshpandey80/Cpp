#include<iostream>
#include<stack>
#include<algorithm>
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

class Solution0{
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

// iterative inorder

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

// iterative postorder

class Solution3{
    public:
    vector<int> postorder(Node* root){
        vector<int> postorder;
        stack<Node*> st;
        if(root == NULL) return postorder;
        st.push(root);
        while (!st.empty())
        {
             root = st.top();
             st.pop();
             if(root->left!= NULL){
                st.push(root->left);
             }
             if(root->right!=NULL){
                st.push(root->right);
             }
             postorder.push_back(root->data);
        }
        reverse(postorder.begin(), postorder.end());
        return postorder;
    }
};

// maximum Depth of Binary Tree

int maxDepth(Node* root){
    if(root ==NULL) return 0;
     int lh = maxDepth(root->left);
     int rh = maxDepth(root->right);

     return 1+ max(lh , rh);
}

// cleck for Balanced Tree

class checkBalance{
    public:

bool isBalanced(Node* root){
    return dfsHeight(root) != -1;
}
int dfsHeight(Node* root){
    if(root == NULL) return 0;
    int lh = dfsHeight(root->left);
    if(lh == -1) return -1;
    int rh = dfsHeight(root->right);
    if(rh == -1) return -1;
    if(abs(lh-rh)>1) return -1;
    return 1+ max(lh , rh);
}
};

// diameter of binary tree

int diameterHelper(Node* root, int &diameter){
    if(root == NULL) return 0;
    int lh = diameterHelper(root->left, diameter);
    int rh = diameterHelper(root->right, diameter);
    diameter = max(diameter, lh+rh);
    return 1+ max(lh , rh);
}

int diameter(Node* root) {
    int d = 0;
    diameterHelper(root, d);
    return d;
}

// diameter of binary tree optimized

int diameterOptimized(Node* root, int &diameter){
    if(root == NULL) return 0;
    int lh = diameterOptimized(root->left, diameter);
    int rh = diameterOptimized(root->right, diameter);
    diameter = max(diameter, lh+rh);
    return 1+ max(lh , rh);
}   



int main(){
    Node* root = new Node(1);
   root->left = new Node(3);
   root->right = new Node(4);
   root->left->right = new Node(5);
   root->left->left = new Node(6);
   root->right->right = new Node(2);
   root->right->left = new Node(7);
   root->right->right->left = new Node(8);

//    Node* temp;
//    temp->preorder(root);
//    temp->postorder(root);
//    temp->inorder(root);


// level order traversal
    // Solution s;
    // Solution2 s2;
    // vector<int> ans = s.preorderTraversal(root);
    // for(auto j : ans){
    //     cout<<j<<" ";
    // }

    // iterative inorder
    // vector<int> ans2 = s2.Inorder(root);
    // for(auto j : ans2){
    //     cout<<j<<" ";       
    // }
    
    // iterative postorder
    // Solution3 s3;
    // vector<int> ans3 = s3.postorder(root);
    // for(auto j : ans3){
    //     cout<<j<<" ";
    // }

    // cout<<maxDepth(root);   // maximum Depth of Binary Tree

    // check for Balanced Tree
    // checkBalance cb;
    // if(cb.isBalanced(root)){
    //     cout<<"Balanced Tree";
    // }
    // else{
    //     cout<<"Not Balanced Tree";
    // }

    cout<<diameter(root);  // diameter of binary tree

    int d2 = 0;
    cout<<diameterOptimized(root, d2);  // diameter of binary tree optimized
}