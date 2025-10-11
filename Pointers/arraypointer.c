// using array with pointer.
// sum of all elements

#include<stdio.h>
int main(){
    int *ptr,sum,i;
    int arr[5]={3,7,5,6,9};
    i=0;
    ptr=arr;
    printf("Element    address    value");
    while(i<5){
        printf("\n arr[%d]  %p  %d",i,ptr,*ptr);
        sum+=*ptr;
        i++;
        ptr++;
    }
    printf("\n sum=%d",sum);

    return 0;
}