// #include<iostream>
// using namespace std;
// int main(){
//     int number[15];
//     cout<<"value at 0th index "<<number[0];
//     cout<<"\nfine";
// //initilizing an array
// int array[3]={1,4,5};
// cout<<"valu at 2nd is "<<array[2];
// }

//accessing elements in array using for loop



// #include<iostream>
// using namespace std;
// int main(){
//     int num=100;
//     cout<<"printing the number \n";
//     int arr[100];
//     fill(arr,arr+100,7);
//     for(int i=0;i<num;i++){
//         cout<<arr[i] <<endl;
//     }
//     return 0;
// }

///

#include<iostream>
using namespace std;
void  printarray(int arr[],int size ){
    cout<<"printing the array\n";
    for(int i=0;i<size;i++){
        cout<<arr[i] <<"\n";
    }}

    int main(){
        int n=15;
        int third[15]={1,2};
        printarray(third ,10);
    }







