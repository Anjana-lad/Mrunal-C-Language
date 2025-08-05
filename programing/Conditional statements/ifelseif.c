// if else if Ladder
// #include<stdio.h>
// int main(){
//     int n1;
//     printf("Enter number:");
//     scanf("%d",&n1);
//     if(n1>0){
//         printf("n1 is positive ");
//     }
//     else if (n1<0)
//     {
//       printf("N1 is negative");
//     }
//     else{
//         printf("Number is Zero");
//     }
//     return 0;
// }

// greater of three numbers.
#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter number:");
    scanf("%d %d %d",&n1,&n2,&n3);
    if((n1>n2) && (n1>n3)){
        printf("N1 is greater");
    }
    else if((n2>n1)&&(n2>n3))
    {
        printf("N2 is greater");
    }
    // else if(){

    // }
    else{
        printf("N3 is greater");
    }

    return 0;
}