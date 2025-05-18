#include<iostream>
using namespace std;
int max_min(int a,int b){
    if (a>b)
        return a;
    else
        return b;
}
int main(){
    int a,b;
    cout<<"Enter number: ";
    cin>>a>>b;
    cout<<"Gretest num is: "<<max_min(a,b);
}
