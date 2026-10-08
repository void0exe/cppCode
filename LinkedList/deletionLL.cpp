#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
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

int removeHead(Node* head){
    Node* temp = head;
    head=head->next;
    delete temp;

    return head->data;
}

int removeTail(Node* head){
    Node* temp = head;

    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next->next;
    temp->next=NULL;
    return temp->data;
}

Node* removeAtposition(Node* head,int k){
    Node* temp = head;
    int cnt=0;
    Node* prev = NULL;
    if(k==1){
        head=head->next;
        delete temp;
        return head;
    }

    while(temp){
        cnt++;
        if(cnt==k){
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev=temp;
        temp=temp->next;
    }
    return head;

}

Node* removeValue(Node* head,int k ){
    Node* temp = head;
    Node* prev = NULL; //Its pointing to nothing there is no Node object is created for this . and also this also does'nt mean that data and next is NULL instead its point to nothing
    if(head==NULL){
        return head;
    }
    if(k==head->data){
        head=head->next;
        free(temp);
        return head;
    }

    while(temp){
        
        if(k==temp->data){
            prev->next = prev->next->next;
            delete temp;
        }
        prev = temp ;
        temp = temp->next;
    }

    return head;
}
void traverse(Node* head){
    Node* temp = head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    vector<int> arr = {1,2,3,4,5};
    Node* head = arrToLL(arr);
    // cout<<removeHead(head);
    // cout<<removeTail(head);
    // head = removeAtposition(head,4);
    head = removeValue(head,2);
    traverse(head);
}