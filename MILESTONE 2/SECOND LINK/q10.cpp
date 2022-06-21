//!!IMPORTANT!!
//Write a C program to count number of digits in a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int count=0,i=n;
    while(i!=0){
        i=i/10;
        count++;
    }
    cout<<"NUMBER OF DIGITS:"<<count;
    return 0;
}
