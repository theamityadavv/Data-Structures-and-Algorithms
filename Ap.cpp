#include<iostream>
using  namespace std;
   int ap(int num){
        int ans=((3*num)+7);
        return ans;
   }
int main(){
    int num;
    cout<<"enter a number\n";
    cin>>num;
    cout<<ap(num);
}