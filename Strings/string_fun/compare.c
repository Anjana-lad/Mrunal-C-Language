// string compare : ascii code 

/*
A - Z : 65:90;
a - z : 97:122;
 str1 > str2  => >0;(true);
 str1 < str2 => <0 ;(flase);
 str1==str2  => 0 : (equal);
*/
#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[30];
    printf("Enter string:");
    gets(str);
    gets(str2);
// scanf("%s",str);
//  scanf("%s",str2);
    printf("String1 = %s\n string2 = %s",str,str2);
   //int cmp=strcmp(str,str2);
    //printf("\n String compare = %d",cmp);
    printf("\nstring compare :  %d",strcmp(str,str2));
    return 0;
}