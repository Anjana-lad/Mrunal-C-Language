//79.Use printf with format specifiers to format and print a date string (day, month, year).
#include<stdio.h>


int main(){
    char day[10];
    char month[15];
    int year;

    printf("Welcome to formatting date\n \n");
    printf("Please Enter the current day: ");
    scanf("%s",day);
    printf("now,Enter the current month:");
    scanf("%s",month);
    printf("Finally Enter the current year:");
    scanf("%d",&year);

    printf("\n The current date is :  %s:%s:%d",day,month,year);

    return 0;
}