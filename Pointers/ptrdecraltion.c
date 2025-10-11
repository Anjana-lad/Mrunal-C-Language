// pointer declaraTION
#include<stdio.h>
int main(){
    int num=89;
    int *ptr; // pointer variable
    ptr=&num;
    printf("Address of num=%p",ptr);
    printf("\n num=%d",num);
    
    return 0;

}