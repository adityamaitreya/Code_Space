#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=nullptr;
    }
};

void InsertAtHead(Node*& head,int data){
    Node* newnode=new Node(data);
    newnode->next=head;
    head=newnode;
}

// void InsertAtTail(Node*& tail,int data){
//     Node* newnode=new Node(data);    
//     tail->next=newnode;
//     tail=newnode;
// }

void InsertAtTail(Node*& head,int data){
    if(head==0){
        InsertAtHead(head,data);
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newnode=new Node(data);
    temp->next=newnode;
}

void InsertAtPosition(Node*& head,int index,int data){
    if(index==0){
        InsertAtHead(head,data);
        return;
    }
    
    Node* temp=head;
    int count=0;
    while(temp!=NULL && count<index-1){
        temp=temp->next;
        count++;
    }
    if(temp==NULL){
        cout<<"Index Out Of Bound"<<endl;
        return;
    }
    
    Node* newnode=new Node(data);
    newnode->next=temp->next;
    temp->next=newnode;
}

void DeleteHead(Node*& head){
    Node* temp=head;
    head=temp->next;
    delete temp;
}

void DeleteTail(Node*& head){
    if(head==nullptr){
        cout<<"list is empty";
        return;
    }

    if(head->next==nullptr){
        delete head;
        head=nullptr;
        return;
    }

    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
}

void DeleteAtPosition(Node*& head,int index){
    if(index==0){
        delete head;
        return;
    }
    int count=0;
    Node* temp=head;
    while(temp->next!=NULL && count<index-1){
        temp=temp->next;
        count++;
    }
    if(temp==NULL || temp->next==NULL){
        cout<<"index OFB"<<endl;
        return;
    }
    Node* ToBeDelete=temp->next;
    temp->next=ToBeDelete->next;
    delete ToBeDelete;
}


void Display(Node*& head){
    Node* newnode=head;
    if(newnode==nullptr){
        cout<<"List is Empty"<<endl;
    }
    while(newnode!=nullptr){
        cout<<newnode->data<<"->";
        newnode=newnode->next;
    }
    cout<<"End"<<endl;

}


int main(){
    Node* head=new Node(20);
    // Node* tail=head;
    InsertAtHead(head,10);
    InsertAtTail(head,30);
    InsertAtHead(head,5);
    InsertAtTail(head,40);
    InsertAtPosition(head,2,15);

    DeleteHead(head);
    DeleteTail(head);
    DeleteAtPosition(head,2);

    Display(head);
}

