/*
0 1 0 1 0
0 1 0 1
0 1 0
0 1 
0
*/

// #include<stdio.h>
// int main(){
//     int row,col,num=5;
//     for(row=num;row>=1;row--){
//         for(col=0;col<row;col++){
//             printf("%d ",col%2);
//         }
//      printf("\n");
//     }
//     return 0;
// }

/*
EDCBA
FEDC
GFE
HG
I
*/
#include<stdio.h>
int main(){
    int row,col,num=5;
  //  char ch='A';
    for(row=1;row<=num;row++){
        for(col=1;col<=num-row+1;col++){
            printf("%c ",num-col+row+64);
        }
    printf("\n");
    }
return 0;
}