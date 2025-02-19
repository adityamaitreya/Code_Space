#include<iostream>
using namespace std;

// int main()
// {
//     int n=1,sum=0;
//     for(n;n<=10;n++){
//         sum=sum+n;
//     }
//     cout<<sum;
// }

// int main()
// {
//     int i;
//     cout<<"Enter Number: ";
//     cin>>i;
//     if (i%2==0){
//         cout<<"Is even";
//     }
//     else{
//         cout<<"Is Odd";
//     }
//     return 0;
// }

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if (i%2==0){
        cout<<i<<" is even"<<endl;
    }
    else{
        cout<<i<<" is Odd"<<endl;
    }
    }
}