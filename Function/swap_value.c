// call by value 

#include<stdio.h>
int swap(int x,int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("\nValue after swapping\n  x=%d\ty=%d",x,y);
}
int main(){
    int x,y;
    printf("Enter X and y :");
    scanf("%d %d",&x,&y);
    printf("\n X=%d \t y=%d\n",x,y);
    swap(x,y);// function call;
    printf("\n X=%d \t y=%d\n",x,y);
    return 0;
}