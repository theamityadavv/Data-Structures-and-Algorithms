#include<iostream>
#include<climits>
using namespace std;

void printarray(int array[],int size){
        for(int i=0;i<size;i++){
            cout<<array[i] <<" , ";
        }
        cout<<"\nPrinting done";
    }
  
//Finding the maximum element in an array   
int maximumarray(int array[], int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
    }
    return max;

}
//finding the minimum element in the array
int minimumarray(int array[],int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    return min;
}

int main(){
int array[10]={1,22,3,4,5,6,7,8,9,10};
int size=10;
cout<<"the minimum element in the array is : "<<minimumarray(array,size) <<endl;
cout<<"the maximum element in the array is : "<<maximumarray(array,size);





    // int array[5]={1,2,3}; //initilize an array
    //cout<<array[3]; //printing the index content

    //printing the array
    // int size=5;
    // for(int i=0;i<size;i++){
    //     cout<<array[i] <<" , ";
    // }
// int array[10]={1,2,3,4};
// int size=10;
// printarray(array,size);

//in this we need to include algorithm also
// int minimumarray(int array[],int size){
//     int min=INT_MAX;
//     for(int i=0;i<size;i++){
//        min(min,array[i])
//     }
//     return min;
// }




}