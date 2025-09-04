// #include<iostream>
// using namespace std;

// int countsetbit(int num){
//   int count =0;
//     while(num!=0){
//         if(num&1){
//             count++;
//         }
//         num=num>>1;
//     }
//     return count;
// }



// int main(){
//     int num1,num2;
//     cout<<"enter a number\n";
//     cin>>num1 >>num2;
//     cout<<countsetbit(num1)+countsetbit(num2);
    
// }

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"enter a number ";
    cin>>num1 >>num2;
    cout<<__builtin_popcount(num1)+__builtin_popcount(num2);
}