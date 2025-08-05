#include<stdio.h>
int main(){
     
    int choice,ch;
    printf("Enter choice of food:\n");
    printf("1. Pizza ");
    printf("\n 2. Burger\n ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
       printf("You have selected Pizza\n");
       printf("Enter choice for Pizza:\n");
       printf("1. veg Pizza");
       printf("\n 2. cheese Pizza\n");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:
        printf("You selected veg Pizza");
        break;
       case 2:
       printf("U selected cheese Pizza");
       break;
       default:
       printf("Invalid choice of Pizza");
        break;
       }
        break;
    
        case 2:
        printf("You have selected Burger\n");
       printf("Enter choice for Burger:\n");
       printf("1. veg Burger");
       printf("\n 2. non- veg burger\n");
       scanf("%d",&ch);
       switch (ch)
       {
       case 1:
        printf("You selected veg burger");
        break;
       case 2:
       printf("U selected non-veg burger");
       break;
       default:
       printf("Invalid choice of burger");
        break;
       }
       break;
       
    default:
    printf("Invalid choice for food sorry visit again thank you!!!!");
        break;
    }
    return 0;
}