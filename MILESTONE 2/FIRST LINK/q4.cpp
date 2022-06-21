/*A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
Ask user for their salary and year of service and print the net bonus amount.*/

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
    return 0;
}
