#include<stdio.h>
#include<string.h>
int main(){
    char str[30],str2[20];
    printf("Enter string:");
   // gets(str);
   fgets(str,30,stdin);
    printf("\nString 1=%s",str);
    printf("\nstring 2=%s",strcpy(str2,str));
    return 0;
}