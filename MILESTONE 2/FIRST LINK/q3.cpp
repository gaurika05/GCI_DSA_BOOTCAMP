/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.
*/

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"QUANTITY:";
    cin>>n;
    int cost=n*100;
    cout<<"COST OF PURCHASED QUANTITY:"<<cost<<endl;

    if (cost>1000){
        int discount=(10*cost)/100;
        cout<<"DISCOUNT:"<<discount<<endl;
        int t=cost-discount;
        cout<<"TOTAL PAYABLE AMOUNT:"<<t;
    }
    else{
        cout<<"TOTAL PAYABLE AMOUNT:"<<cost;
    }
    return 0;
}
