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