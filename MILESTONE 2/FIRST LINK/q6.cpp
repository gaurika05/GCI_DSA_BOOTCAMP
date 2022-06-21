//oldest and youngest among three people
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER THE AGE OF 3 PEOPLE:";
    cin>>a>>b>>c;
    if(a>b && a>c){
        if (b>c){
            cout<<"person with age "<<a<<" is oldest and "<<c<<" is youngest";
        }
        else{
            cout<<"person with age "<<a<<" is oldest and "<<b<<" is youngest";
        }
    }

    if(c>b && c>a){
        if (b>a){
            cout<<"person with age "<<c<<" is oldest and "<<a<<" is youngest";
        }
        else{
            cout<<"person with age "<<c<<" is oldest and "<<b<<" is youngest";
        }
    }

    if(b>a && b>c){
        if (a>c){
            cout<<"person with age "<<b<<" is oldest and "<<c<<" is youngest";
        }
        else{
            cout<<"person with age "<<b<<" is oldest and "<<a<<" is youngest";
        }
    }
    return 0;
}
