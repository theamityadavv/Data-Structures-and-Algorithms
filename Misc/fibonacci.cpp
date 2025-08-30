#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number\n";
    cin>>num;
    int a=0,b=1;
    cout<<a <<" "<<b<<" ";
    for(int i=1;i<=num;i++){
        int fibo=a+b;
        
        a=b;
        b=fibo;
        cout<<fibo<<" ";
    }
    
} 