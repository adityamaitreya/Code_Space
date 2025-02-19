#include<iostream>
using namespace std;
int fac(int n){
    if(n==0 || n==1)
    return 1;
    else
    return (n*fac(n-1));
}
int main()
{
    int a;
    cout<<"Enter number: ";
    cin>>a;
    cout<<fac(a);
}