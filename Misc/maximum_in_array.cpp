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