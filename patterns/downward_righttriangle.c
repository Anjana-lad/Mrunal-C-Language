/*
* * * * *
  * * * *
    * * *
      * *
        *  
*/
// #include<stdio.h>
// int main(){
//     int row,col,space;
//     for(row=5;row>=1;row--){
//         for(space=5-1;space>=row;space--){
//             printf("  ");
//         }
//         for(col=1;col<=row;col++){
//             printf(" *");
//         }
//     printf("\n");
//     }
// return 0;

// }

/*
A B C D E
  A B C D
    A B C
      A B
        A

*/
#include<stdio.h>
int main(){
    int row,col,space,num=5;

    char ch='A';
 for(row=num;row>=0;row--){
    for(space=num-1;space>=row;space--){
        printf("  ");
    }
    for(col=0;col<=row;col++){
        printf(" %c",ch+col);
    }
    printf("\n");
    }
 
 
    return 0;
}