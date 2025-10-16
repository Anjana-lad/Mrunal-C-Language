#include<stdio.h>
int main(){
    FILE *file_pointer;
    char *str[]={"C programming is the language."};
    file_pointer=fopen("demo.txt","w"); // w for write and a for append
    if(file_pointer==NULL){
        printf("\n file not found");
        return 1;
    }
    for(int i=0;i<1;i++){
        fputs(str[i],file_pointer);
    }
    printf("\n");
    fclose(file_pointer);
    return 0;

}