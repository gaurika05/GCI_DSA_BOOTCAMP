//Write a C program to find power of a number using for loop.

#include<iostream>
using namespace std;
int main(){
    int x,n,power;
    cin>>x;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        power=x*x;
    }
    cout<<power;
    return 0;
}
