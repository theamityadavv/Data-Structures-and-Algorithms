// #include<iostream>
// using namespace std;
// int  main(){
//     int size= 10;
//     int array[10]={1,2,3,4,5,6,7,8,9,9,};
//     int sum=0;    
//     for(int i=0;i<size;i++){
//     sum=sum+array[i];
//     }
//     cout<<"the sum of elements of array is " <<sum;

// }

//using function

#include<iostream>
using namespace std;

int sumarray(int array[],int size){
    //printing array
    cout<<"the element of array is.....[";
    for(int i=0;i<size;i++){
        cout<<array[i] <<" , ";
    }
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+array[i];
    }
    return sum;
}


int main(){
    int size= 10;
    int array[10]={1,2,3,4,4,5,5,54,6,2};
    cout<<"the sum of array is " <<sumarray(array,size);
}