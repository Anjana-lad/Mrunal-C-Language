// function to add two numbers.
#include<stdio.h>
// user defined function

// void add(){  // function defination
//     int num1,num2;
//     printf("enter number:");
//     scanf("%d %d",&num1,&num2);
//     printf("Sum=%d",num1+num2);
   
// }
int add(int n1,int n2);   // function prototype
int main(){
   int num1,num2;
   printf("Enter num:");
   scanf("%d %d",&num1,&num2);
  printf("Sum=%d",add(num1,num2)); // function call

    return 0;
}

int add(int n1,int n2){  // function defination
    int sum;
    sum=n1+n2;    // function body
    return sum;
}