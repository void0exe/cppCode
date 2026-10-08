#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }

    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* arrToLL(vector<int> arr){
    Node* head = new Node(arr[0],nullptr);
    Node* mover = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr);
        mover->next=temp;
        mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp =head;
    while(temp){
        cout<<temp->data;
        temp=temp->next;
    }
}

Node* reverseLL(Node* head){

    if(head==NULL || head->next==NULL){
        return head;
    }       
    
    Node* newHead = reverseLL(head->next);
    Node* front = head->next;
    front->next = head;
    head->next = NULL;
    return newHead;
}


int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrToLL(arr);
    head = reverseLL(head);
    print(head);
}