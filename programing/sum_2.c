#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter numbers:");
    scanf("%d %d",&num1,&num2);

    int result;
    result=num1+num2;

    printf("%d + %d = %d",num1,num2,result);
    return 0;
}