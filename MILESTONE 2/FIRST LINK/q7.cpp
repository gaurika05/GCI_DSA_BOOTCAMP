#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter a number:";
    cin>>i;
    if (i<0){
        cout<<"ABSOLUTE VALUE:"<<i*(-1);
    }
    else{
        cout<<"ABSOLUTE VALUE:"<<i;
    }

}
