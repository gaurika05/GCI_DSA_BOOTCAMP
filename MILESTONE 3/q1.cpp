#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=n;
    while(first>=10){
        first=first/10;

    }
    cout<<"first digit:"<<first<<endl;
    int last=n%10;
    cout<<"last digit:"<<last;

}
