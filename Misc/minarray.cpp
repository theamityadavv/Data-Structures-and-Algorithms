#include<iostream>
#include<climits>
using namespace std;
 int getminimum(int array[],int size){
    //printing the array
    cout<<"Printing the array \n \n";
    for(int i=0;i<size;i++){
        cout<<array[i] <<" , ";
    }

    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
 }


int main(){
    int size=10;
    int array[10]={111,22,33,4,-444,35,5,64,8,5};
    int minimum=getminimum(array,size);
    cout<<"\nthe minimum element is " <<minimum;
}
