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

void kthSmallest(Node* root, int tar, vector<int> &arr){
    if(root == nullptr){
        return;
    }
    
    kthSmallest(root->left, tar, arr);
    arr.push_back(root->val);
    kthSmallest(root->right, tar, arr);
};

int cnt = 0;
int kthSmallest2(Node* root, int tar){
    if(root == nullptr || tar<=cnt){
        return -1;
    }

    kthSmallest2(root->left, tar);
    cnt++;
    if(cnt==tar){
        return root->val;
    }
    kthSmallest2(root->right, tar);
}



int main(){
    Node* root = tree_struct();
    vector<int> arr;
    kthSmallest(root, 3, arr);
    cout<<arr[2];
}

