#include<iostream>
using namespace std;
void prime(int num){
    if(num<=0){
        cout<<"enter a valid number";
        return;
    }
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            cout<<num <<" is not prime\n";
            return;
        }
    }
    cout<<num <<" is prime";
}

int main(){
    int num;
    cout<<"enter a number \n";
    cin>>num;
    prime(num);
}