#include<iostream>
using namespace std;
void counting(int num){
    for(int i=0;i<=num;i++){
        cout<<i <<"\n";
    }
}
int main(){
    int num;
    cout<<"enter a number \n \n";
    cin>>num;
    counting(num);
}