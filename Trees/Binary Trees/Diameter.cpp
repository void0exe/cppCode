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

//Max Hieght
int maxH(Node* root){
    if(root==NULL){
        return 0;
    }

    int lh = maxH(root->left);
    int rh = maxH(root->right);

    return 1+max(lh,rh);
}

//maxDiameter
void maxD(Node* root ,int &maxi){
    if(root==NULL){
        return;
    }

    int lh = maxH(root->left);
    int rh = maxH(root->right);

    maxi = max(maxi,lh+rh);

    // maxD(root->left , maxi);
    // maxD(root->right , maxi);

}

int main(){
    Node* root = tree_struct();
    int maxi = 0;

    maxD(root , maxi);
    cout<<maxi;
}
