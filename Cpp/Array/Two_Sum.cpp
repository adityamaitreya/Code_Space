//Two Pointer
// //**Two Sum**
// //segregation of arr
//Sliding Window

#include<iostream> 
using namespace std;
int main(){
    int arr[5]={2,7,11,15,27};
    int target=9;
    int n=sizeof(arr)/sizeof(arr[1]);
    int s=0;
    int e=n-1;
    while(s<=e){
        int sum=arr[s]+arr[e];
        if(sum==target){
            cout<<"Index of 1st num: "<<s<<endl;
            cout<<"Index of 2nd num: "<<e<<endl;
            return 0;
        }
        else if(sum<target){  
            s++;
        }
        else{
            e--;
        }
    }
    cout<<"No Such case is found";
    return 0;
}
// If the sum of the two numbers is less than the target, it means you need a larger sum.
// In a sorted array (as required for this approach), increasing the sum is achieved by moving the start pointer (s) to the right (to a larger number):
// s++;
// This works because as you move s to the right in a sorted array, the value at arr[s] increases, potentially bringing the sum closer to the target.