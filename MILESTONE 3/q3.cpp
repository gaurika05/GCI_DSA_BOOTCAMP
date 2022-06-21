//Write a C program to swap first and last digits of a number.

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=n;
    while(first>=10){
        first=first/10;

    }
    int i=n,j=0;
    while(i!=0){
        i=i/10;
        j++;
    }
    cout<<"first "<<first<<endl;
    int last=n%10;
    cout<<"last "<<last<<endl;
    int k=n;
    k=(k-(first*pow(10,j-1)))+(last*pow(10,j-1))-last+first;
    cout<<k;
    return 0;
}
