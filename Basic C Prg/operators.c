// Operators in c language:
/*
1. Arithmetic operators : +,-,/,*,%
2. relational operators: <,>,<=,>=,==
3. logical operator :And(&&),OR(||),Not(!)

truth table
a b  a&&b   a||b     NOT(!a) (opposite)    a^b
0 0   0       0         1                   1
0 1   0       1         1                   0
1 0   0       1         0                   0 
1 1   1       1         0                   1

4. Assignment operator: +=,-=,/=,*=,=,%=
5. bitwise operator : &,|,^,~,<<,>>, (~)=-(n+1)
6. increment and decrement operator : ++,-- 

7. other operators : sizeof(),,, &(address of operator),*(pointer);
8. ternary operator (?:)
// (codition)?true:flase;


*/

// #include<stdio.h>
// int main(){
//     int a,b;
//     int result,exp;
//     printf("Enter number for a:");
//     scanf("%d",&a);
//     printf("Enter number for b=");
//     scanf("%d",&b);
//     result=a+b;
//     printf("Addition=%d",result);
//     result=a-b;
//     printf("\nsubtraction=%d",result);
//     result=a*b;
//     printf("\nMultiplication=%d",result);
//     result=a/b;
//     printf("\nDivision=%d",result);
//     result=a%b;
//     printf("\n Modulus=%d",result);
//     exp=a+b*(a/b)-20;
//     printf("\nExp=%d",exp);
// return 0;
// }

// //relational operator:
// #include<stdio.h>
// int main(){
//     int num1=90,num2=90;
//     int res=(num1>=num2);
//     printf("greater=%d",res);
//     res=(num1<=num2);
//     printf("\nsmaller=%d",res);

//     return 0;
// }

// Logical Operator
// #include<stdio.h>
// int main(){
//     int n=80,o=56,k;
//     int logic=(n>20)||(o<=50);
//     printf("Logical exp=%d",logic);
//     printf("\n Not of !k=%d");
//     return 0;
// }

// Assignment operator
// #include<stdio.h>
// int main(){
//     int a=5,c;
//     c=a; //c=5
//     printf("C=%d\n",c);
//     c+=a;  // c=c+a;c=10 
//     printf("C=%d\n",c);
//     c-=a;
//     printf("C=%d\n",c);
//     c*=a;
//     printf("C=%d\n",c);
//     c/=a;
//     printf("C=%d\n",c);
//     c%=a;
//     printf("C=%d\n",c);
//     return 0;
// }

// Bitwise operator

// #include<stdio.h>
// int main(){
//     int a=12,b=7;
//     printf("bitwize and=%d\n",a&b);  
//     printf("Bitwize or =%d\n ",a|b);
//     printf("bitwize Exculisive OR =%d\n",a^b);

//     printf("Negation Operator= %d",~a);

// return 0;
// }

//++ +1, -- -1

// increment and decrement operator;
//a++(post),++a(pre),--a)(pre),a--(post)
// #include<stdio.h>
// int main(){
//      int a=10,b=100;
//      printf("Increment ++a=%d",++a); // 10 +1  ==11
//      printf("\n Increment a++=%d",a++); //11 +1
//      printf("\n a=%d",a);  // 12
//      printf("\n decrement --b=%d",--b);  // 99
//      printf("\ndecrement b--=%d",b--);  //99-1
//      printf("\n b=%d",b); // 98
//     return 0;
// }

// ternary operator / condition operator (?:)

#include<stdio.h>
int main(){
     int a,b;
     printf("Enter values for a and b:");
     scanf("%d %d",&a,&b);
     (a>b)? printf(" a is greater "): printf("B is greater");
    return 0;
}