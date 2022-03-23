#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    int d=1;
    while(n!=0){
        d=n%10;
        sum=sum+d;
        n=n/10;

    }
    cout<<"sum of digits:"<<sum;
}
