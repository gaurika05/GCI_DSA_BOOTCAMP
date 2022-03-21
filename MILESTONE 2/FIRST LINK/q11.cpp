#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"ENTER A CHARACTER:";
    cin>>ch;
    if (ch>='a' && ch<='z'){
        cout<<ch<<" is a lowercase character.";
    }
    else if(ch>='A' && ch<='Z'){
        cout<<ch<<" is an uppercase character.";
    }
}
