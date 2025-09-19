#include<iostream>
using namespace std;

void sumarray(int array[],int size){
    int sum=0;
    cout<<"Sum of array is --\n";
    for(int i=0;i<size;i++){
        sum+=array[i];
    }
    cout<<sum;
}

void productarray(int array[], int size){
    cout<<"\nproduct of the array is --\n";
    int product=1;
    for(int i =0;i<size;i++){
        product*=array[i];
    }
    cout<<product;
}
int main(){
    int array[5]={1,2,3,45,7};
    int size=5;
    sumarray(array,size);
    productarray(array,size);
}

