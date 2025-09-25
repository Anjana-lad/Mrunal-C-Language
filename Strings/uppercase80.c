//80 .Write a program to convert a input string to uppercase.
#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main(){

    char string[50];
    printf("Enter string:");
    fgets(string,sizeof(string),stdin);

    for(int i=0;string[i]!='\0';i++){
        string[i]=toupper(string[i]);
    }
    printf("\n Final output:%s",string);
    return 0;

}
