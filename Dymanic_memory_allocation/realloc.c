#include<stdio.h>
#include<stdlib.h>

int main(){
    int *arr= calloc(2,sizeof(int));
    arr[0]=2;
    arr[1]=4;
    // resize array to hold 3 interger;
    arr=realloc(arr,3*sizeof(int));
    arr[2]=7;
    for(int i=0;i<3;i++){
        printf("Address of arr: %p  ",arr);
        printf("%d\n",arr[i]);
    }
free(arr);

    return 0;
}