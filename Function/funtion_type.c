/* function is divided in 4 categories.
1. function with no parameter/agruments and no return statements.
2. with no arguments and with return statemnets.
3. with arguments and no return statemnets.
4. with argumrnts and with return statemnets.
*/


#include<stdio.h>
int cube(); 
int add(int a,int b);
int Subtract(int a,int b);  // function prototype
// 1. no arguments and no return ;
int square(){   // function defintion 
    int num;
    printf("\nEnter num:");
    scanf("%d",&num);
    printf("Square of given number=%d",num*num);
}
int main(){
    int num1,num2;
    square();  // square function call
    printf("Cube of number=%d",cube());  // cube funtion call
    printf("\nEnter a and b:");
    scanf("%d %d",&num1,&num2);
    add(num1,num2);  // calling add function
   printf("\n Subtraction =%d", Subtract(num1,num2)); // calling subtract function
}

// 2. no arguments with return:
int cube(){
    int n1;   // local Parameter
    printf("\nEnter num:");
    scanf("%d",&n1);
    return n1*n1*n1;
}

// 3. with arguments no return;
int add (int a,int b){
    printf("addition =%d",a+b);
}

// 4. with argumrnts with return 
int Subtract(int a,int b){
    return a-b;
}