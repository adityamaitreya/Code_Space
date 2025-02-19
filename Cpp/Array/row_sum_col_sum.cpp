#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row:"<<sum<<endl;
    }
    
    for(int i=0;i<3;i++){
        int sum1=0;
        for(int j=0;j<3;j++){
            sum1+=arr[j][i];
        }
        cout<<"Sum of col:"<<sum1<<endl;
    }
}