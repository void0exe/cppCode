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
unordered_map<Node*, Node*> parent;
void parentForm(Node* root){
    if(!root){
        return;
    }

    if(root->left!=NULL){
        parent[root->left]=root;
    }
    parentForm(root->left);
    if(root->right!=NULL){
        parent[root->right]=root;
    }
    parentForm(root->right);
}

vector<int> bfs(Node* target, int k){
    unordered_set<int> visited;
    queue<Node*> q;

    q.push(target);
    visited.insert(target->val);
    while(!q.empty()){
        int s = q.size();
        int level = 0;

        while(s--){
            Node* cur = q.front();
            q.pop();

            if(level == k){
                vector<int> arr1;
                while(!q.empty()){
                    arr1.push_back(q.front()->val);
                }
                return arr1;
            }
            if(cur->left!=NULL && !visited.count(cur->left->val)){
                q.push(cur->left);
                visited.insert(cur->left->val);
            }

            if(cur->right!=NULL){
                q.push(cur->right);
                visited.insert(cur->right->val);
            }

            if(parent[cur]!=NULL && !visited.count(parent[cur]->val)){
                    q.push(parent[cur]);
                    visited.insert(parent[cur]->val);
            }

            
        }
        level++;
    }

}

vector<int> parentTonode(Node* root, Node* target, int k){
    parentForm(root);
    bfs(target, k);
}

int main(){
    Node* root = tree_struct();
    Node* target = root->left;
    int k=2;

    parentTonode(root, target, k);
}

