//Two pointer
#include<iostream> 
using namespace std;
int swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main(){
    int arr[5]={3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[1]);
    int s=0;
    int e=n-1;  //use of n-1
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    } 
    return 0;
}