#include<iostream>
using namespace std;
int main(){
    double n1;
    double n2;
    cout<<"NUMBER OF CLASSES HELD:";
    cin>>n1;
    cout<<"NUMBER OF CLASSES ATTENDED:";
    cin>>n2;
    double p=(n2/n1);
    double per=p*100;
    cout<<"PERCENTAGE OF CLASS ATTENDED:"<<per;
    if (per<75){
        cout<<"THE STUDENT IS NOT ALLOWED TO SIT IN EXAM";
    }
    else{
        cout<<"THE STUDENT IS ALLOWED TO SIT IN EXAM";
    }


}
