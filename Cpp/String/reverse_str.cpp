#include<iostream>
using namespace std;

int get_len(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void swap(char &a,char &b){
    char temp=a;
    a=b;
    b=temp;
}

void reverse_str(char name[]){
    int n=get_len(name);
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s],name[e]);
        s++;
        e--;
    }
}

void print_str(char name[]){
    int n=get_len(name);
    for(int i=0;i<n;i++){
        cout<<name[i]<<" ";
    }
}

int main(){
    char name[5]="abc";
    reverse_str(name);
    print_str(name);

}