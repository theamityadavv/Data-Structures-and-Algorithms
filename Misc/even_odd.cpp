// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     if(num%2==0){
//         cout<<num <<" is even \n";
//     }
//     else{
//         cout<<num <<" is odd \n";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
void EvenOdd(int num){
    if(num%2==0){
        cout<<num <<" is even\n";
    }
    else{
        cout<<num <<" is odd \n";
    }
}


int main(){
    int num;
    cout<<"enter a number \n";
    cin>>num;
    EvenOdd(num);
}