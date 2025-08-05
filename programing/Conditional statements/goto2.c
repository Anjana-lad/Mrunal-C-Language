#include<stdio.h>
int main(){
    int num;
    label1:
    printf("\nEnter number  : (Press 0 to exit)::");
    scanf("%d",&num);
    if(num>=1){
        printf("Square of the %d is %d",num,num*num);
        goto label1;
    }
    else if(num>100){
        printf("Invalid number try again\n");
        goto label1;
    }
    else{
        printf("End of program");
    }

    return 0;
}