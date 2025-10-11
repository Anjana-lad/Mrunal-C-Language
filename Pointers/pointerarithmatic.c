// Pointer arithmetic 
#include<stdio.h>
int main(){
    int a,b,*ptr,*ptr2,x,y,z;
    a=12;
    b=4;
    ptr=&a;
    ptr2=&b;
    x=*ptr * *ptr2 -6;  
    y=4 * - *ptr2/ *ptr +10;

    printf("\n Addresss of a=%p",ptr);
    printf("\n Addresss of b=%p",ptr2);

    printf("\n X=%d, y=%d",x,y);

    *ptr= *ptr2 + 3;  // 7
    *ptr2= *ptr2 - 5; // -1

    z= *ptr * *ptr2 -6;  // 7* -1  -6

    printf("\n z=%d",z);
    
    return 0;

}