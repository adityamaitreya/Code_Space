#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node*& head,int data){
    Node* newnode=new Node(data);
    newnode->next=head;
    if(head!=NULL){
        head->prev=newnode;
    }
    head=newnode;
}

void insertAtTail(Node*& head,int data){
     Node* newnode=new Node(data);
     if(head==NULL){
        head=newnode;
        return;
     }
     Node* temp=head;
     while(temp->next!=NULL){
        temp=temp->next;
     }
     temp->next=newnode;
     newnode->prev=temp;
}

void insertAtPosition(Node*& head,int index,int data){
    if(head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    Node* newnode=new Node(data);
    if(index==0){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int count=0;
    while(temp->next!=NULL && count<index-1){
         temp=temp->next;
        count++;
    }
    if(temp==NULL){
        cout<<"index out of bound"<<endl;
        return;
    }
    
    Node* tempnext=temp->next;
    
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=tempnext;
    
    if(tempnext!=NULL){
    tempnext->prev=newnode;
    }
}

int main(){
    Node* head=new Node(10);
}