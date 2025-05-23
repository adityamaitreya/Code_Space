#include<iostream>
using namespace std;

class Stack{
    public:
    int arr[100];
    const int n=100;
    int top;
    Stack(){
        top=-1;
    }
    
    bool isEmpty(){
        return(top==-1);
    }
    
    bool isFull(){
        return(top==n-1);
    }
    
    void push(int data){
        if(isFull()){
            cout<<"Stack Is Full"<<endl;
            return;
        }
        top++;
        arr[top]=data;
        cout<<data<<" Pushed into Stack"<<endl;
    }
    
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;
            return;
        }
        int popped=arr[top];
        top--;
        cout<<popped<<" is Popped"<<endl;
        
    }

    int peek(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
        return arr[top];

    }
    
};
    
    int main(){
    Stack S;
    S.push(30);
    S.push(20);
    S.push(40);
    S.push(50);
    S.pop();
    cout<<"Peek of stack: "<<S.peek()<<endl;

    return 0;
}
    
