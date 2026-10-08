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
        }else{
            current->left = nullptr;
        }

        cin>>n;
        if(n!=-1){
            current->right = new Node(n);
            q.push(current->right);
        }else{
            current->right = nullptr;
        }
    }
    return root;
}

bool rootTonode(Node* root, vector<int> ans, int node){
    if(!root){
        return false;
    }


    ans.push_back(root->val);

    if(root->val==node){
        return true;
    }

    if(rootTonode(root->left, ans, node)==true || rootTonode(root->right, ans, node)==true){
        return true;
    }
    ans.pop_back();
    return false;
}

int main(){
    Node* root = tree_struct();
    vector<int> ans;
    int node = 7;

    bool res = rootTonode(root, ans, node);
    cout<<res;

}

