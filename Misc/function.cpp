#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    int ans=1;
    cout<<"enter a number \n";
    cin>>num1;
    cout<<"enter a another number \n";
    cin>>num2;
    for(int i=0;i<num2;i++){
        ans=ans*num1;
    }
    cout<<num1 <<" power " <<num1 <<" is " <<ans;
    return 0;
    
}