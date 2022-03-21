#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENTER MARKS:";
    cin>>n;
    if (n<25){
        cout<<"GRADE:F";

    }
    else if(n>=25 && n<=45){
        cout<<"GRADE:E";

    }
    else if(n>45 && n<=50){
        cout<<"GRADE:D";

    }
    else if(n>50 && n<=60){
        cout<<"GRADE:C";

    }
    else if(n>60 && n<=80){
        cout<<"GRADE:B";

    }
    else if(n>80){
        cout<<"GRADE:A";

    }
}
