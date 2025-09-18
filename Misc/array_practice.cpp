#include<iostream>
using namespace std;

void printarray(int array[],int size){
        for(int i=0;i<size;i++){
            cout<<array[i] <<" , ";
        }
        cout<<"\nPrinting done";
    }
    //arrays with function
    
int main(){
    // int array[5]={1,2,3}; //initilize an array
    //cout<<array[3]; //printing the index content

    //printing the array
    // int size=5;
    // for(int i=0;i<size;i++){
    //     cout<<array[i] <<" , ";
    // }
int array[10]={1,2,3,4};
int size=10;
printarray(array,size);
    


}