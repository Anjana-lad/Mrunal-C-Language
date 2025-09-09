// Taking 5 subject marks and finding total and percentage of it.
#include<stdio.h>
int main(){
     
    int subject[5];
    int total=0,i;
    float percent;

    printf("Enter marks:");
    for(i=0;i<5;i++){
        scanf("%d",&subject[i]);
    }
    for (i = 0; i < 5; i++)
    {
        total += subject[i];
    }
    percent=(float)total/5;
    printf("Total Marks=%d",total);
    printf("\n Percentage :%.2f",percent);
    return 0;

}