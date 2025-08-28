// recurion for finding factorial of a given number.
#include<stdio.h>
int factorial(int n){
    if(n>=1){
        return n * factorial(n-1);   // recursion 
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    printf("Enter number:");
    scanf("%d",&num);

     printf("Factorial of %d = %d", num,factorial(num));
     
     printf("\n Factorial of 7 = %d",factorial(7));
return 0;
}

//task : sum of ten numbers with recursion.
