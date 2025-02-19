#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *Next;

    Node(int data)
    {
        this->data = data;
        this->Next = NULL;
    }
};

// insert at start
void InsertAtStart(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->Next = head;
    head = temp;
}

// insert at last
void InsertAtEnd(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->Next = temp;
    tail = tail->Next;
}

//Insert at n position
void InsertAtPosition(Node* &head,int position,int t){
    Node *temp=head;
    int count=1;
    while(count<position-1){
        temp=temp->Next;
        count ++;
    }
    Node *newnode = new Node(t);
    newnode->Next = temp->Next;
    temp->Next = newnode;
}

void Display(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->Next;
    }
}

int main()
{
    Node *node1 = new Node(12);
    cout << node1->data << endl;
    Node* head=node1;
    Node* tail=node1;
    InsertAtStart(head,22);
    InsertAtEnd(tail,33);
    InsertAtPosition(head,2,69);
    Display(head);

    // Node n1(12);
    // cout<<"Data value is: "<<n1.data<<endl;
    // cout<<"Address of next node: "<<n1.next<<endl;
    // return 0;
}