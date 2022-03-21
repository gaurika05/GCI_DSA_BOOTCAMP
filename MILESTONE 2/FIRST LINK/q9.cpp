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


}
