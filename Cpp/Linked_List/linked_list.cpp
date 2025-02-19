#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};
int main(){
    Node n1(12);
    cout<<"Data value is: "<<n1.data<<endl;
    cout<<"Address of next node: "<<n1.next<<endl;
    return 0;

    // Node* node1=new Node(12);
    // cout<<node1->data<<endl;
}