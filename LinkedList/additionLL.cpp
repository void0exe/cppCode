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

Node* additionofLL(Node* head1,Node*head2){
    Node* temp1 = head1;
    Node* temp2 = head2;

    Node* dummyNode = new Node(-1);
    int carry=0; Node* current = dummyNode;
    

    while(temp1||temp1){
        int sum=carry;
        if(temp1){
            sum=sum+temp1->data;
        }
        if(temp2){
            sum=sum+temp2->data;
        }
        Node* newNode = new Node(sum%10);
        current->next = newNode;
        current=current->next;
        carry=sum/10;

            
        if(temp1)temp1=temp1->next;
        if(temp2)temp2=temp2->next;

    }
    while(carry){
        Node* newNode = new Node(carry);
        current->next=newNode;
    }

    return dummyNode->next;
}

int main(){
    vector<int> arr1 = {4,2,1};
    vector<int> arr2 = {6,5,4};
    Node* head1 = arrToLL(arr1);
    Node* head2 = arrToLL(arr2);

    Node* head = additionofLL(head1,head2);
    print(head);
    // cout<<head->data;
}