/* Array is one type of derived datatype, which is used to store similar type of value 
in single variable name.
array index always start with zero(0).
syntax: type arrayname [array size]; eg: int arr1[5];
array initialization: int arr1[5]={1,2,4,23,66};
*/

// simple program to print array;  (static array;)
#include<stdio.h>
int main(){
     
//      int arr1[5]={};

//     printf("Array elemnets:\n");
//     for(int i=0;i<5;i++){
//         printf("\n Arr1[%d]=%d",i,arr1[i]);
//     }
//     return 0;

// }

// dynamic array;(values given by user);
int numbers[7];
printf("Enter values of array elements:");
    for(int i=0;i<7;i++){
        scanf("%d",&numbers[i]);
    }

    printf("Array Elements:\n");
    for(int i=0;i<7;i++){
        printf("numbers[%d]=%d\n",i,numbers[i]);
    }
return 0;
}
