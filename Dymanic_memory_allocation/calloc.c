#include<stdio.h>
#include<stdlib.h>

int main(){
   
    int size,sum=0;
    printf("Enter number of elements:");
    scanf("%d",&size);

   int *arr=(int*)  calloc(size,sizeof(int));

   if(arr==NULL){
    printf("Not enough memory");
   }
   for(int i=0;i<size;i++){
    printf("%d",arr[i]);
   }
   for(int i=0;i<size;i++){
    printf("Enter the elements:");
    scanf("%d",&arr[i]);
   }
   for(int i=0;i<size;i++){
    sum+=arr[i];
   }
   printf("Total=%d",sum);
   free(*arr);
    return 0;
}