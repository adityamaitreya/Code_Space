//declare an Array int arr[size]=[2,3,4,5,6]
//Homogenous i.e. having same datatype use index for accessing 
#include<iostream> 
using namespace std;

int main(){
    int arr[5]={4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[1]);
    int result=0;
    for(int i=0;i<n;i++){
        if(result<arr[i]){
            result=arr[i];
        }
    }
    cout<<"Max value is: "<<result;
}
