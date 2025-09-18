// without using string function finding length of the string.
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[20];
//     int i=0;
//     printf("Enter string:");
//     gets(ch);
//     while(ch[i]!='\0'){
//         i++;
//     }
//     printf("Length of the %s is:%d",ch,i);
//     return 0;
// }

// string reverse without function
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char ch[20],temp;
//     printf("Enter string:");
//     gets(ch);
//     printf("Original string=%s",ch);
//     int i=0;
//     while(ch[i]!='\0'){
//          i++;  // original length
//         }  
//     int len=i-1;   // length -1
//     for(int j=0;j<i/2;j++){
//         temp=ch[j];
//         ch[j]=ch[len];
//         ch[len--]=temp;
//     }
//     printf("\n Reverse string=%s",ch);

// return 0;
// }

// plaindrome string:
#include<stdio.h>
#include<string.h>
int main(){
    char ch[20],str[20],temp;
    printf("Enter string:");
    gets(ch);
    printf("Original string=%s",ch);
  
    int i=0,flag=0;
    while(ch[i]!='\0'){
         i++;  // original length
        }  
    int len=i;   // length -1
    for(int j=0;j<len;j++){
       if(ch[j]!=ch[len-j-1]){
        flag=1;
        break;
       }
    }
 if(flag==0){
    printf("\n String is Palindrome");
 }
 else{
    printf("\n String is not plaindrome");
 }

return 0;
}