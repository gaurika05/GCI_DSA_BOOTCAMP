#include<iostream>
using namespace std;
int main(){
    double salary,year;
    cout<<"ENTER SALARY:";
    cin>>salary;
    cout<<endl<<"ENTER YEARS OF SERVICE:";
    cin>>year;
    if (year>5){
        double bonus=(5*salary)/100;
        cout<<"NET BONUS AMOUNT:"<<bonus;
    }
}
