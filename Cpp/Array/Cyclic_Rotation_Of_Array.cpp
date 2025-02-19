// 5 4 6 8 1
// 1 5 4 6 8

#include<iostream>
using namespace std;

int main(){
    int arr[5]={5,4,6,8,1};
    int n=5;
    int last=arr[5];
    int i=n-1;
    while(i<1){
        arr[i]=arr[i+1];
        i--;
    }
    arr[0]=last;
    cout<<"Array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}