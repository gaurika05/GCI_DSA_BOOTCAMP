//Write a C program to check whether a number is Prime number or not.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    bool ans=1;
    int i=2;
    for(;i<n;i++){
        if (n%i==0){
            ans=0;
            break;
        }
    }
    if (ans==1){
        cout<<n<<" is a prime number";
    }
    else{
        cout<<n<<" is not a prime number";
    }
    return 0;

}
