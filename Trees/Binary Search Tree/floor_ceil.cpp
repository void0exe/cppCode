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

int floor(Node* root, int tar){
    //val<=tar
    int found = -1;
    while(root){
        if(tar == root->val){
            return tar;
        }
        if(root->val<tar){
            root = root->left;
        }
        else{
            found = root->val;
            root = root->right; 
        }
    }   
    return found;
}

int ceil(Node* root, int tar){
    int found = 0;
    while(root){
        if(tar == root->val){
            return tar;
        }
        if(root->val>tar){
            root = root->left;
        }

        if(root->val<tar){
            found = root->val;
            root = root->right; 
        }
    }   
    return found;
}

int main(){
    Node* root = tree_struct();
    int tar = 3;
    cout<<floor(root, tar);
    // cout<<ceil(root, 3);
}