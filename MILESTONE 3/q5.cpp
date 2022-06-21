//Write a C program to calculate product of digits of a number.

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    int d=1;
    while(n!=0){
        d=n%10;
        product=product*d;
        n=n/10;
    }
    cout<<"product of digits:"<<product;
    return 0;
}
