#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER A NUMBER:";
    cin>>n;
    int i=1;
    int j=n;
    while(i<=n){
        cout<<j<<endl;
        j--;
        i++;
    }
}
