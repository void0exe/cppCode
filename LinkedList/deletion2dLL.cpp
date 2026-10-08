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

Node* removeHead(Node* head){
    Node* prev = head;
    
    if(head==NULL || head->next==NULL){
        return NULL;
    }

    head=head->next;
    head->back=nullptr;
    prev->next=nullptr;
    delete prev;

    return head;
}

Node* removeTail(Node* head){
    Node* temp = head;
    Node* prev = NULL;
    while(temp->next){
        temp=temp->next;
        prev=temp->back;
    }
    temp->next=nullptr;
    prev->next=nullptr;
    free(temp);

    return head;
}

Node* removeKth(Node* head,int k){
    Node* temp = head;
    
    int cnt=0; 

    while(temp){
        cnt++;
        if(cnt==k){
            break;
        }
        temp=temp->next;
    }

    Node* front = temp->next;
    Node* prev = temp->back;

    if(front==NULL && prev==NULL){
        delete head;
        return NULL;
    }else if(prev==NULL){
        return removeHead(head);
    }else if(front==NULL){
        return removeTail(head);
    }

    prev->next=front;
    front->back=prev;
    temp->next=NULL;
    temp->back=NULL;

    delete temp;
    return head;
}

void removeNode(Node* temp){ //It will not remove the head Note head!=NULL
    Node* front = temp->next;
    Node* prev = temp->back;

    if(front==NULL){
        prev->next=nullptr;
        temp->back=nullptr;
        delete temp;
        return;
    }

    prev->next=front;
    front->back=prev;
    temp->next=NULL;
    temp->back=NULL;
}

int main(){
    vector<int> arr = {1,2,2,4,9};
    Node* head = arrTo2DLL(arr);
    // head = removeHead(head);
    // head = removeTail(head);
    // head = removeKth(head,4);
    removeNode(head);
    print(head);
}