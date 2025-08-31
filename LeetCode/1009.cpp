#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number";
    cin>>n;
    int x=n;
    int mask =0;
     if(n==0){
         return 1;
        }
    while(x!=0){
        mask=((mask<<1) | 1);
        x=x>>1;
    }
    int ans= ((~n) & mask);
    cout<< ans;
    
}


// class Solution {
// public:
//     int bitwiseComplement(int n) {
//         int x=n;
//         int mask =0;
//         if(n==0){
//             return 1;
//         }
//         while(x!=0){
//             mask= ((mask<<1) | 1);
//             x=x>>1;
//         }
//         int ans= (~n) & mask;
//         return ans;
//     }
// };