#include <bits/stdc++.h>
using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;

    Node(int data){
        val=data;
        left=right=nullptr;
    }
};

Node* tree_struct(){ //IMP : for n inputs there should be n+1 nullptr(which here is -1)
    int n;
    cin>>n;
    
    queue<Node*> q;

    if(n == -1){
        return nullptr;
    }

    Node* root = new Node(n);
    q.push(root);

    while(!q.empty()){
        Node* current = q.front();
        q.pop();

        cin>>n;
        if(n!=-1){
            current->left = new Node(n);
            q.push(current->left);

        }
        
        cin>>n;
        if(n!=-1){
            current->right = new Node(n);
            q.push(current->right);
        }
    }
    return root;
}


bool searchBST(Node* root, int tar){
    while(root!=NULL){
        if(root->val==tar){
            return true;
        }
        if(tar > root->val){
            root = root->right;
        }else{
            root = root->left;
        }
    }
    return false;
};



int main(){
    Node* root = tree_struct();
    cout<<root->left->left->val;
    // cout<<searchBST(root, 5);
}




// 1 2 3 4 5 -1 6 -1 -1 7 8 -1 -1 -1 -1 -1
