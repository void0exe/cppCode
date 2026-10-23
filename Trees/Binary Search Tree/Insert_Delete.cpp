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

Node* insert(Node* root, int tar){
    Node* cur = root;
    
    if(cur == NULL){
        return new Node(tar);
        } 
    while(true){
        
        if(tar == cur->val){
            return root;
        }

        if(tar>cur->val){
            if(cur->right!=NULL){
                cur = cur->right;
            }else{
                cur->right = new Node(tar);
                break;
            }
        }else{
            if(cur->left!=NULL){
                cur = cur->left;
            }else{
                cur->left = new Node(tar);
                break;
            }
        }
    }
    return root;
}

void removeNode(Node* cur, Node* tar){
    if(tar->left == NULL){
        cur->val = tar->val;
        tar = nullptr;
        return;
    }   
    tar = tar->left;
}

Node* Delete(Node* root, int Delval){
    Node* cur = root;

    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right==NULL){
        root = NULL;
    }
    while(true){
        if(cur->left==nullptr && cur->right==nullptr){
            cur = NULL;
            break;
        }
        if(Delval==cur->val){
            Node* tar = cur->right;
            removeNode(cur, tar);
            break;
        }
        
        if(cur->val < Delval){
            cur =cur->right;
        }else{
            cur = cur->left;
        }
    }
    return root;
}

int main(){
    Node* root = tree_struct();
    int tar = 3;
    Node* in = insert(root, tar);
    Node* Del = Delete(root, tar);
}