/*
string functions:
1. strlen : string total length.
2. strcmp : string compare.
3. strcpy : string copy.
4. strrev: string reverse.
5. strstr : string inside string.
6. strchr : character inside string.
7. strset : string set .
8. strupr : string upper.
9. strlwr : string lower.
10.strcat : string concatenate.
*/

// string strlen function
#include<stdio.h>
#include<string.h>
int main(){
    char str[30];
    printf("Enter string:");
    gets(str);
   // puts(str);
    printf("\n String is %s",str);
    int len;
    len=strlen(str);
    printf("\n %s size is %d",str,len);
    return 0;
}