//Write a C program to print all Prime numbers between 1 to n.
//!!IMPORTANT!!
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number:";
    cin>>n;
    bool ans;
    for(int i=2;i<n;i++){
        ans=1;
        for (int j=2;j<=i/2;j++){
            if (i%j==0){
                ans=0;
                break;
            }
        }
        if (ans==1){
                cout<<i<<endl;
        }

    }
    return 0;
}
