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
//     for(row=1;row<=5;row++){
//         for(space=5;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf("* ");
//         }
//     printf("\n");
//     }
//     return 0;
// }

/*
          5
        4 5
      3 4 5
    2 3 4 5
  1 2 3 4 5
*/

#include<stdio.h>
int main(){
    int row,col;
    int num=5;
    for(row=num;row>=1;row--){
        for(col=1;col<=num;col++){
            if(row<=col){
                printf("%d ",col);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}

