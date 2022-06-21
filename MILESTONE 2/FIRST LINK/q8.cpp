/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.
*/

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
    return 0;

}
