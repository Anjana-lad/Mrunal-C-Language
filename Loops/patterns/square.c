/*
  * * * * *
  * * * * *
  * * * * *
  * * * * *
  * * * * *
*/

// #include<stdio.h>
// int main(){
//      int row,col;
//      for(row=1;row<=5;row++){
//         for(col=1;col<=5;col++){
//             printf("* ");
//         }
//         printf("\n");
//      }
//     return 0;
// }

/*
1 1 1 1 1
2 2 2 2 2
3 3 3 3 3
4 4 4 4 4
5 5 5 5 5
*/

#include<stdio.h>
int main(){
    int row,col;
    char ch='A';
    for(row=1;row<=5;row++){
        for(col=1;col<=5;col++){
            printf("%c ",ch);
        }
        ch++;
        printf("\n");
    }
    return 0;
}