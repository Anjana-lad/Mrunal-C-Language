#include<stdio.h>
#include<string.h>
int main(){

    char chr[80],str[30]="hello";
    
    printf("Enter string:");
    gets(chr);
    printf("String concatenate:%s",strcat(chr,str));

    return 0;

}