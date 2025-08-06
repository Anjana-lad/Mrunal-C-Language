// fibonacci series: 0,1,1,2,3,5,8,13,21,...
#include<stdio.h>
int main(){
    int n1=0,n2=1,n,temp=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci series: \n %d ,%d ,",n1,n2);
    while(temp<=n){
        temp=n1+n2;
        n1=n2;
        n2=temp;
        printf(" %d,",temp);
    }
return 0;

}
// 
//sum of digit123=6
// reverse number 1234=4321
// pailndrome  // 121
// armstrong number  
/// prime numbers