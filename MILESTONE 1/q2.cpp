/*Write a program to print a maximum of two numbers?*/
#include<iostream>
using namespace std;
int main(){
    int N1,N2;
    cout<<"enter two numbers:";
    cin>>N1>>N2;
    if (N1>N2){
        cout<<"Maximum="<<N1;
    }
    else if(N2>N1){
            cout<<"Maximum="<<N2;
    }
    else if(N1=N2){
        cout<<"Both are equal:"<<N1;
    }
    return 0;
}
