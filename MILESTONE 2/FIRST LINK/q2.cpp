#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"ENTER TWO NUMBERS:";
    cin>>a>>b;
    if(a>b){
        cout<<a<<">"<<b;
    }
    else if(a<b){
            cout<<b<<">"<<a;

    }
    else if(a==b){
        cout<<a<<"="<<b;
    }

}
