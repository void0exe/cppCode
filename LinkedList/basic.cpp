#include <bits/stdc++.h>
using namespace std;

// struct Node{
//     int data;
//     Node* next;//next points to Node -> nullptr(ex)

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
// };

// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     Node* y = new Node(arr[1],nullptr);
//     cout<<y->data<<endl;
//     cout<<y;
// }




//Array to Linked List
// struct Node{
//     int data;
//     Node* next;//next points to Node -> nullptr(ex)

//     Node(int data1,Node* next1){
//         data=data1;
//         next=next1;
//     }
// };

// Node* covertArr2LL(vector<int> arr){
//     Node* head = new Node(arr[0],nullptr);
//     Node* mover = head;

//     for(int i=1;i<arr.size();i++){
//         Node* temp = new Node(arr[i],nullptr);
//         mover->next = temp;
//         mover = mover->next;
//     }
//     return head;
// }

// void LLlength(vector<int> arr){
//     Node* head = new Node(arr[0],nullptr);
    
// }
// int main(){
//     vector<int> arr = {1,2,3,4,5};
//     Node* head = covertArr2LL(arr);
//     // LLlength(arr);
//     Node* temp = head;

//     int count = 0;
//     //Traversal
//     while(temp){
//         cout<<temp->data<<"-";
//         temp = temp->next;
//         count++;
//     }

//     cout<<count;
// }       

