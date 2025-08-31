//decimal to binary for small number 
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    int ans=0, i=0;
    while(num!=0){
        int bit=num&1;
        ans=(bit*pow(10,i))+ans;
        num=num>>1;
        i++;
    }
    cout<<ans; 
}