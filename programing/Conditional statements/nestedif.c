#include<stdio.h>
int main(){
    char choice;
    int age;
label:
        printf("\n Enter your choice:(M or F):");
        scanf("%c",&choice);


    if(choice=='M' || choice=='m'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age >=21){
            printf("Eligible for marriage");
        }
        else{
            printf("Not eligible for marriage");
        }
    }
    else if(choice=='F'||choice=='f'){
        printf("Enter age:");
        scanf("%d",&age);
        if(age >=18){
            printf("Eligible for marriage");
        }
        else{
            printf("Not eligible for marriage");
        }
    }
    else{
       // printf("\nEnter a valid choice");
       // goto label;
    }
    goto label;
    return 0;
}