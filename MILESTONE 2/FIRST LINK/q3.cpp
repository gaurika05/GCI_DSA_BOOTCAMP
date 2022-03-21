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

}
