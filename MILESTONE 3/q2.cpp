#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=n;
    while(first>=10){
        first=first/10;

    }
    int last=n%10;
    int sum=first+last;
    cout<<"sum of first and last digit:"<<sum;

}
