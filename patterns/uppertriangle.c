/*
        *
       * *
      * * *
     * * * * 
    * * * * *
  
*/

// #include<stdio.h>
// int main(){
//     int row,col,space;
//     int num=5;
//     for(row=1;row<=num;row++){
//         for(space=num-1;space>=row;space--){
//             printf(" ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
//     return 0;
// }

/*
         *
       * * *
     * * * * *
   * * * * * * *
 * * * * * * * * *
*/

#include<stdio.h>
int main(){
    int row,col,num=5,space,k=1;
    for(row=0;row<num;row++){
        for(space=num-1;space>row;space--){
            printf("   ");
        }
        for(col=0;col<k;col++){
            printf(" * ");
        }
        k+=2;
printf("\n");
    }
return 0;
}