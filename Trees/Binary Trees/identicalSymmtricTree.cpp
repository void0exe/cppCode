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

// bool identicalT(Node* root , Node* root1){
//     if(root == NULL || root1==NULL){
//         return (root==root1); //Returning true or false
//     }

//     return (root->val == root1->val) && identicalT(root->left,root1->left)&&identicalT(root->right,root1->right);
// }


// int main(){
//     Node* root = tree_struct();
//     Node* root1 = tree_struct();

//     cout<<identicalT(root , root1);
// }



//For Symmtry
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

bool identicalT(Node* root , Node* root1){
    if(root == NULL || root1==NULL){
        return (root==root1); //Returning true or false
    }

    return (root->val == root1->val) && identicalT(root->left,root1->right)&&identicalT(root->right,root1->left);
}


int main(){
    Node* root = tree_struct();
    Node* root1 = tree_struct();

    cout<<identicalT(root , root1);
}





