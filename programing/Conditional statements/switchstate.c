// switch statements 
// syntax how to use switch in code.
// switch (expression)
// {
// case constant expression:
//     /* code */
//     break;

// default:
//     break;
// }
#include<stdio.h>
int main(){
    int n;
    printf("Enter any number for n:(1to 5): ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
        printf("U enter one");
        break;
    case 2:
        printf("U enter two");
        break;
    case 3:
        printf("U enter three");
        break;
    case 4:
        printf("U enter four");
        break;
    case 5:
        printf("U enter five");
        break;
    default:
        printf("Invalid number");
        break;
    }
    return 0;
}

// week days (1 to 7) 
// rainbow () case char case 'r':
// year nmonths ( 1 to 12 )