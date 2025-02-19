#include<iostream>
using namespace std;
int main(){
    char name[5]="abcd";
    int count=0;
    for(int i=0;name[i]!='\0';i++){   //for(int i=0;name[i]!=0;i++){  \\'\0'is null value
        count++;
    }
    cout<<count;
    // cout<<name[3];
}