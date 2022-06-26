//Write a C program to find all prime factors of a number.

//!!IMPORTANT!!

//You may think why loop from 2 to num/2? Because prime number starts from 2 and any factor of a number n is always less than n/2.

#include<iostream>
using namespace std;
int main(){
    int n,ans;
    cout<<"Enter a number:";
    cin>>n;
    int i=2;
    while(i<=n){
        if(n%i==0){
            ans=1;
            for(int j=2;j<=i/2;j++){
                if(i%j==0){
                    ans=0;
                    break;
                }
            }
            if(ans==1){
                cout<<i<<endl;
            }
        }

        i++;

    }

}
