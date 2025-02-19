#include<iostream>
using namespace std;

void insert(int arr[],int k,int &n,int item){  //passs address of n i.e. size of array address
    int j=n;
    while(j>k){
    // int j = n - 1; // Start from the last valid index
    // while (j >= k) { // Shift elements to the right
        arr[j+1]=arr[j];
        j--;
    }
    arr[k]=item;
    n+=1;
}

int main(){
    int arr[10]={2,3,4,5,6,6};
    int k=3;
    int n=6;
    int item=34;
    insert(arr,k,n,item);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<n;
}