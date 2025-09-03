// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"enter a number to find the factorial\n";
//     cin>>num;
//     int ans=1;
//     for(int i=1;i<=num;i++){
//         ans=ans*i;
//     }
//     cout<<ans <<" ";
// }

#include<iostream>
using namespace std;
int fact(int num){
    int ans=1;
    for(int i=1;i<=num;i++){
        ans=ans*i;
    }
    return ans;
}

int main(){
    int num;
    cout<<"enter a number \n";
    cin>>num;
    cout<<fact(num);
}