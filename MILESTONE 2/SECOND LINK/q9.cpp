//Write a C program to print multiplication table of any number

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<=10){
        int p=n*i;
        cout<<n<<"*"<<i<<"="<<p<<endl;
        i++;
    }
    return 0;

}
