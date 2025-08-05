#include<stdio.h>
int main(){
    int i=0;

    label:
    printf("\n Press 1 to end");
    scanf("%d",&i);

    if(i!=1){
        printf("You enter %d . goto executes",i);
        goto label;
    }
    printf("\n End ");

    return 0;
}