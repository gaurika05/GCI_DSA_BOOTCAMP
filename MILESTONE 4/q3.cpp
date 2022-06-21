//Write a C program to calculate factorial of a number.

#include<iostream>
using namespace std;
int main(){
    int i=1,n,fact=1;
    cin>>n;
    for(;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}
