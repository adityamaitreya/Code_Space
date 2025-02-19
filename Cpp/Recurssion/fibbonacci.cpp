//galat hai

#include<iostream>
using namespace std;
int fab(int n){
    if(n==0 or n==1)
    return n;
    else
    return (fab(n-1)+fab(n-2));
}
int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<fab(a);
}