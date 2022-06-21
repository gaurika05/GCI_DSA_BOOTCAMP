/*A student will not be allowed to sit in exam if his/her attendence is less than 75%.
Take following input from user
Number of classes held
Number of classes attended.
And print
percentage of class attended
Is student is allowed to sit in exam or not.

Modify the above question to allow student to sit if he/she has medical cause. Ask user if he/she has medical cause or not ( 'Y' or 'N' ) and print accordingly.
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
    cout<<"PERCENTAGE OF CLASS ATTENDED:"<<per<<endl;
    if (per<75){
        cout<<"DOES THE STUDENT HAS ANY MEDICAL ISSUE(Y/N)?"<<endl;
        char ans;
        cout<<"TYPE Y/N:"<<endl;
        cin>>ans;
            if(ans=='Y'){
                    cout<<"THE STUDENT IS ALLOWED TO SIT DUE TO MEDICAL CONDITION.";
            }
            else if(ans=='N'){
                    cout<<"THE STUDENT IS NOT ALLOWED TO SIT IN EXAM";
            }

    }
    else{
        cout<<"THE STUDENT IS ALLOWED TO SIT IN EXAM";
    }
    return 0;

}
