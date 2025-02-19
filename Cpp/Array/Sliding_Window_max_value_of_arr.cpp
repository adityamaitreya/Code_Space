//Max Value of arr

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,2,5,7,6,12};
    int n=sizeof(arr)/sizeof(arr[1]);
    int current=0;
    int w=4;
    for(int i=0;i<w;i++){
        current+=arr[i];
    }
    int max=current;
    for(int i=1;i<=n-w;i++){     //in n-w pointer n-w tak jayega  matalab array ke last mai w elements bachne chahiye from n number of array 
        current=current-arr[i-1]+arr[i+w-1];
        if(current>max)
        max=current;
    }
    cout<<"Max value is: "<<max;
}