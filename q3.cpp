//Write a C program to find sum of all prime numbers between 1 to n.

#include<iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"Enter any number:";
    cin>>n;
    bool ans;
    for(int i=2;i<n;i++){
        ans=1;
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                ans=0;
                break;
            }

        }
        if(ans==1){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
