#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=10;
    
    //using 3rd variable
    int t;
    t=a;
    a=b;
    b=t;
    cout<<"1st element"<<a<<"\n2nd element"<<b<<endl;

    //without using 3rd variable
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"1st element"<<a<<endl;
    cout<<"2nd element"<<b;

}