#include<iostream>
using namespace std;

int get_len(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

void palindrone_check(char name[]){
    int n=get_len(name);
    int s=0;
    int e=n-1;
    while(s<e){
        if(name[s]!=name[e]){
            break;
        }
        else{
            s++;
            e--;
            return 1;
        }
    }
    
}

int main(){
    char str[10]="racecar";
    palindrone_check(str);
}