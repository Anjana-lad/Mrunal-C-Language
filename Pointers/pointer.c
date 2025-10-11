#include<stdio.h>
int main(){
    int num=345;
    printf("addres of num=%p",&num);
    printf("\n num=%d",num);
    printf("\n value at address=%d",*(&num));
    return 0;
}