#include<iostream>
#include<climits>
using namespace std;

int getmax(int array[],int size){

    //PRINTING THE ARRAY
        for(int i=0;i<size;i++){
            cout<<array[i] <<endl;
        }
    // fining the maximum value
     int max = INT_MIN;
     for(int i=0;i<size;i++){
        if(array[i]>max){
            max=array[i];
        }
     }
       return max;
}


int main(){
    int size=10;
int array[10]={1,2,3,4,55,6,7,8,9,45};
 int maximum=getmax(array,10);
    cout<<"the maximum value in the array is " <<maximum;

}