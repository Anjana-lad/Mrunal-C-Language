// // if else statements
// #include<stdio.h>
// int main(){
//     int number;
//     printf("Enter number:");
//     scanf("%d",&number);
//     if(number>10){
//         printf("Number is valid =%d",number);
//     }
//     else{
//         printf("enter new number");
//     }
//     return 0;
// }

// even or odd
#include<stdio.h>
int main(){
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is odd");
    }
    return 0;
}
// leap year