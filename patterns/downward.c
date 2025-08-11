/*
* * * * * * * * *
  * * * * * * *
    * * * * * 
      * * *
        * 
*/
#include<stdio.h>
int main(){
    int row,col,space;
    int num=5,star=num*2-1;
for(row=num;row>=1;row--){
    for(space=num-1;space>=row;space--){
        printf("   ");
    }
    for(col=1;col<=star;col++){
        printf(" * ");
    }
    star-=2;
    printf("\n");
}
    return 0;
}