#include<stdio.h>
int main(){
    char board[3][3]={{ 'X','0','X'},{'0','X','X'},{'X','0','X'}};
    int i,j;
    printf("Welcome to Tic-Tac-Toe\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%c ",board[i][j]);
            if(j<2) 
            printf("| ");
        }
        if(i<2) 
        printf("\n-----------");
    }
    return 0;
}