#include<iostream>
using namespace std;
int main(){
int size=10;
int array[10]={1,2,3,4,5,6,7,8,9,10};
//printing the initial array
 for(int i=0;i<size;i++){
cout<<array[i] <<" ";
}

//logic
 int start=0;
 int end=size-1;
 while(start<end){
    swap(array[start] , array[end]);
    start++;
    end--;
}

cout<<endl;
//printing the reverse array

for(int i=0;i<size;i++){
cout<<array[i] <<" ";
}
 
}

