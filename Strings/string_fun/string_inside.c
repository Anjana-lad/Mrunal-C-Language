#include<stdio.h>
#include<string.h>
int main(){
    char str[20],str2[20]="Programming is good";
    printf("Enter string:");
    fgets(str,20,stdin);
    
    printf("string inside string");
    printf("\n %s",strstr(str,"ll"));

    printf("\n %s",strstr(str2,"gram"));
  
//    printf("\n %s",strnstr(str2,"i",0));
    
    printf("\n String inside character:");
    printf("\n string = %s",strchr(str2,'i'));
    
    printf("\n string = %s",strrchr(str2,'i'));
    return 0;
}