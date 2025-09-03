
// #include<iostream>
// using namespace std;\
// int main(){
//     int num1;
//     cout<<"enter a number \n";
//     cin>>num1;
//     int a=0;
//     int b=1;
//     int fibo;
//     cout<<a <<" " <<b <<" ";
//     for(int i=2;i<=num1;i++){
//         fibo=a+b;
//         cout<<fibo<<" ";
//         a=b;
//         b=fibo;

//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int fibo(int num){
    int a=0;
    int b=1;
    int fibo;
    cout<<a <<" " <<b <<" ";
    for(int i=2;i<num;i++){
        fibo=a+b;
        cout<<fibo <<" ";
        a=b;
        b=fibo;
    }
    return fibo;
}
int main(){
    int num;
    cout<<"enter a number\n";
    cin>>num;
    fibo(num);
}