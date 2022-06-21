/*Write a program to print absolute value of a number entered by user. E.g.-
INPUT: 1        OUTPUT: 1
INPUT: -1        OUTPUT: 1
*/
    
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
    return 0;
}
