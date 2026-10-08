#include <bits/stdc++.h>
using namespace std;

// struct Node{
//     int val;
//     Node* left;
//     Node* right;

//     Node(int data){
//         val=data;
//         left=right=nullptr;
//     }
// };

// Node* tree_struct(){ //IMP : for n inputs there should be n+1 nullptr(which here is -1)
//     int n;
//     cin>>n;
    
//     queue<Node*> q;

//     if(n == -1){
//         return nullptr;
//     }

//     Node* root = new Node(n);
//     q.push(root);

//     while(!q.empty()){
//         Node* current = q.front();
//         q.pop();

//         cin>>n;
//         if(n!=-1){
//             current->left = new Node(n);
//             q.push(current->left);
//         }else{
//             current->left = nullptr;
//         }

//         cin>>n;
//         if(n!=-1){
//             current->right = new Node(n);
//             q.push(current->right);
//         }else{
//             current->right = nullptr;
//         }
//     }
//     return root;
// }

// int maxD(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int lh = maxD(root->left);
//     int rh = maxD(root->right);

//     return 1+max(lh,rh);
// }

// int main(){
//     Node* root = tree_struct();
//     cout<<maxD(root);
// }




//No of Nodes
// #include <bits/stdc++.h>
// using namespace std;

// struct Node{
//     int val;
//     Node* left;
//     Node* right;

//     Node(int data){
//         val=data;
//         left=right=nullptr;
//     }
// };

// Node* tree_struct(){ //IMP : for n inputs there should be n+1 nullptr(which here is -1)
//     int n;
//     cin>>n;
    
//     queue<Node*> q;

//     if(n == -1){
//         return nullptr;
//     }

//     Node* root = new Node(n);
//     q.push(root);

//     while(!q.empty()){
//         Node* current = q.front();
//         q.pop();

//         cin>>n;
//         if(n!=-1){
//             current->left = new Node(n);
//             q.push(current->left);
//         }else{
//             current->left = nullptr;
//         }

//         cin>>n;
//         if(n!=-1){
//             current->right = new Node(n);
//             q.push(current->right);
//         }else{
//             current->right = nullptr;
//         }
//     }
//     return root;
// }

// int maxD(Node* root){
//     if(root==NULL){
//         return 0;
//     }

//     int lh = maxD(root->left);
//     int rh = maxD(root->right);

//     return 1+(lh+rh);
// }

// int main(){
//     Node* root = tree_struct();
//     cout<<maxD(root);
// }




//Balanced Binary Tree
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

int maxD(Node* root){
    if(root==NULL){
        return 0;
    }

    int lh = maxD(root->left);
    int rh = maxD(root->right);
    
    if(lh==-1 || rh==-1){
        return -1;
    }

    if(abs(lh-rh)>1){
        return -1;
    }

    return 1+max(lh,rh);
}

int main(){
    Node* root = tree_struct();
    cout<<maxD(root);
}