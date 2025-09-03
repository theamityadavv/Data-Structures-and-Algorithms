#include<iostream>
using namespace std;

int fact(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}

int combination(int n, int r){
    int ans= ((fact(n))/((fact(r)*fact(n-r))));
    return ans;
}

int main(){
    int n,r;
    cout<<"enter the value of n \n";
    cin>>n;
    cout<<"enter the value of r \n";
    cin>>r;
    cout<<combination(n,r);
}