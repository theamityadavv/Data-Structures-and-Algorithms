#include<iostream>
using namespace std;
 bool findarray(int array[],int size ,int target){
    for(int i=0;i<size;i++){
        if(array[i]==target){
        return true;
        }        
 }
    return false;
}

int main(){
    int size=10;
    int target=45;
    int array[10]={1,2,3,4,5,435,32,22,12,23};
    
    if(findarray(array,10,45)){
        cout<<"element found \n";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}