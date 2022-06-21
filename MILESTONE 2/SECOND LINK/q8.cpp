//Write a C program to find sum of all odd numbers between 1 to n.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int i=1;
    int sum=0;
    for(;i<=n;i++){
        if(i%2!=0){
            sum=sum+i;
        }
    }
    cout<<"sum:"<<sum;
    return 0;
}


