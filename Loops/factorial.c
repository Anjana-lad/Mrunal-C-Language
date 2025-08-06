// Factorial number : It is a number is the product of the number till one :
// eg: 6! = 6*5*4*3*2*1=720; 
// with while loop:
// #include<stdio.h>
// int main(){
//     int num,i=1,fact=1;
//    printf("Enter number:");
//    scanf("%d",&num);
//     while(i<=num){
//         fact=fact*i;
//         printf("\nFactorial of %d",fact);
//         i++;
//     }
//     printf("\nFactorial of %d=%d",num,fact);
//     return 0;
// }

// with for loop:
// for(initialization;condition,incerment/decrement){

// }
// #include<stdio.h>
// int main(){
//     int num,fact=1,i;
//     printf("Enter number:");
//     scanf("%d",&num);
//     for(i=num;i>=1;i--){
//         fact=fact*i;
//        // printf("\n factorial =%d",fact);
//     }

//     printf("\n factorial of %d=%d",num,fact);
//     return 0;
// }

// with do while loop:exit controlled loop
// do{

// }
// while(condition);

#include<stdio.h>
int main(){
    int num,fact=1,i=1;
    printf("Enter number:");
    scanf("%d",&num);
    do{
        fact=fact*i;
        i++;
    }while(i<=num);
    printf("Factorial of %d=%d",num,fact);

return 0;
}