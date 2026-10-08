#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node* back;

    Node(int data1,Node* next1,Node* back1){
        data = data1;
        next = next1;
        back=back1;
    }

    Node(int data1){
        data = data1;
        next=nullptr;
        back=nullptr;
    }
};

Node* print(Node* head){
    Node* temp = head;

    while(temp){//temp!=0/NULL
        cout<<temp->data<<"-";
        temp=temp->next;
    }
    return head;
}

Node* arrTo2DLL(vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i],nullptr,prev);
        prev->next=temp;
        prev = temp;
    }
    return head;
}

//Brute T.C=O(n) S.C=O(n)//needs to be fixed
Node* reverseDLLB(Node* head){
    stack<int> stk;
    Node* temp = head;

    while(temp){
        stk.push(temp->data);
        temp=temp->next;
    }

    temp = head;

    while(temp){
        temp->data=stk.top();
        stk.pop();
        temp=temp->next;
    }
    return head;
}

//Optimal
Node* reverseDLLO(Node* head){
    Node* temp = head;
    Node* last=NULL;
    while(temp){
        last=temp->next;
        temp->next=temp->back;
        temp->back=last;

        head=temp;
        temp=temp->back;
    }
    
    return head;
}


int main(){
    vector<int> arr = {1,2,2,4,9};
    Node* head = arrTo2DLL(arr);
    // head = reverseDLLB(head);
    head = reverseDLLO(head);
    print(head);
}