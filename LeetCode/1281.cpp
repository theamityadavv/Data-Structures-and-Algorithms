//Leetcode:1281

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter a number \n";
    cin>>num;
    int sum=0, prod=1;
    while(num>0){
        int rem= num%10;
        sum=sum+rem;
        prod=prod=prod*rem;
        num=num/10;
    }
    int diff= prod - sum;
    cout<<diff;

}