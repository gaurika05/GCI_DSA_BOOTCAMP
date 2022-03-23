#include<cmath>
#include<iostream>
using namespace std;
int main(){
    int i=1,n,num,num1,j=0,first,last,new_num;
    cout<<"Enter any number:"<<endl;
    cin>>num;
    num1=num;
    while(1){
        num=num/10;
        j++;
        if (num==0){
            break;
        }
    }
    cout<<num1<<"is a "<<j<<" digit number"<<endl;

    first=(num1/pow(10,(j-1)));
    last=(num1%10);

    num1=(num1 % int(pow(10,(j-1))));
    num1=(num1/10);

    num1=(num1*10);

    last=(last*(pow(10,(j-1))));
    num1=(num1+last+first);
    cout<<"The new number with swapped first and last digits is:"<<num1<<endl;
    return 0;
}
