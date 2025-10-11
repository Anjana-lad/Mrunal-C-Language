// pointer to pointer.
#include<stdio.h>
int main(){
    int num=34;
    int *ptr,**ptr1;
    ptr=&num;

    printf("\nValue =%d",num);
    printf("\nAddress of num=%p",ptr);
    ptr1=&ptr;
    printf("\nptr address=%p",ptr1);
    printf("\nvalue at ptr1=%d",**ptr1);

    return 0;
}