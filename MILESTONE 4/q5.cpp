//Write a C program to find LCM of two numbers.

#include<iostream>
using namespace std;
int main(){
    int n1,n2,lcm,hcf;
    cin>>n1;
    cin>>n2;
    int min;
    if(n1>n2){
        min=n2;
    }
    else{
        min=n1;
    }

    for (int i=1;i<=min;i++){
        if(n1%i==0 && n2%i==0){
            hcf=i;
        }
    }
    lcm=(n1*n2)/hcf;
    cout<<lcm;
    return 0;
}
