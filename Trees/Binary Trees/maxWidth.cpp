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

int maxWidth(Node* root){
    if(root==NULL){
        return 0;
    }
    queue<pair<Node* , int>> q;
    int maxi =0;   

    q.push({root,0});
    


    while(!q.empty()){
        int s = q.size();

        int l = q.front().second;
        int r = q.back().second;
        maxi = max(maxi,r-l+1);
        while(s--){
            
            pair<Node* , int> cur = q.front();
            int idx = q.front().second;
            q.pop();
            if(cur.first->left!=NULL){
                q.push({cur.first->left,idx*2+1}); 
            }
            if(cur.first->right!=NULL){
                q.push({cur.first->right,idx*2+2});
            }
        }
    }
    return maxi;
}

int main(){
    Node* root = tree_struct();
    cout<<maxWidth(root);
}