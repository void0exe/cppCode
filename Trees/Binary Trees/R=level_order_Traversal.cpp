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

vector<vector<int>>  level_order(Node* root){
    vector<vector<int>> ans ;
    queue<Node*> q;

    if(root == NULL){
        return ans;
    }
    
    q.push(root);

    while(!q.empty()){ //T.C = O(n) & S.C = O(n);
        vector<int> arr;
        int s = q.size(); //this s will help not to dynamically chage the size.
        

        for(int i=0;i<s;i++){
            Node* current = q.front();
            q.pop();

            if(current->left!=NULL){
                q.push(current->left);
            }

            if(current->right!=NULL){
                q.push(current->right);
            }

            arr.push_back(current->val);
        }
        ans.push_back(arr);
    }

    return ans;

}

int main(){
    Node* root = tree_struct();
    vector<vector<int>> ans = level_order(root);
    
    for(int i=0 ; i<ans.size();i++){ //This Loop is not O(n^2) its O(n) why because levels(ans) can be n but if arr becomes n so the level  would be 1 but in a binary tree this is not possible. & S.C = O(n);
        vector<int> arr = ans[i];
        for(int i=0;i < arr.size();i++){
            cout<<arr[i];
        }
        cout<<endl;
    }
}




// 1 2 3 4 5 -1 6 -1 -1 7 8 -1 -1 -1 -1 -1