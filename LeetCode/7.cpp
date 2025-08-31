#include<iostream>
#include<climits>
using namespace std;
int main(){
 int  num;
 int ans=0;
 cout<<"Enter a number \n";
 cin>>num;
 while(num!=0){
    int rem = (num%10);
     if((ans > INT_MAX/10) || (ans < INT_MIN/10)){
    return 0;
    }
    ans = ((ans*10)+ rem);
    num=num/10;
 }

cout<<ans;
 return 0;

}


// class Solution {
// public:
//     int reverse(int x) {
//         int ans=0;
//         while(x!=0){
//         int digit= x%10;
//             if((ans >INT_MAX/10)|| (ans < INT_MIN/10)){
//                 return 0;
//             }
//         ans=(ans*10)+digit;
//         x=x/10;
//         }
//         return ans;
//     }
// };