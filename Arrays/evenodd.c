// finding even or odd numbers from the list of elements.
#include<stdio.h>
int main(){
     
    int list[10]={2,44,33,51,67,99,78,54,77,31};
    int i,even=0,odd=0;
    printf("Even numbers:");
    for(i=0;i<10;i++){
        if(list[i]%2==0){
            even++;
            printf( "%d,",list[i]);
        }
    }
      printf("\n Odd numbers:");
      for(i=0;i<10;i++){
        if(list[i]%2!=0){
            odd++;
            printf("%d,",list[i]);
        }
    }
    printf("\n odd counts =%d",odd);
    printf("\n even counts =%d",even);

    return 0;

} 