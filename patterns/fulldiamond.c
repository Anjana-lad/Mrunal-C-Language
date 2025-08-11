/*
      *
     * *
    * * * 
   * * * * 
  * * * * *
   * * * *
    * * *
     * *
      * 
*/

#include<stdio.h>
#include<stdlib.h>
int main(){

    int row,col,space,num=4;
    for(row=num;row>=-num;row--){
        for(space=1;space<=abs(row);space++){
            printf(" ");
        }
        for (col=num;col>=abs(row);col--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}