#include<iostream>
using namespace std;
int main(){
    int i=1,n,fact=1;
    i=1;
    cin>>n;
    for(;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
}
