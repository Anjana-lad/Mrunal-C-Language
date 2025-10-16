#include<stdio.h>
int main(){
    FILE *file_pointer;
    char text[100];
    file_pointer=fopen("text.txt","r");
    if(file_pointer==NULL){
        printf("File not found");
    }
    // else{
    //     fgets(text,100,file_pointer);
    //     printf("\n %s",text);
    // }

    char c;
    do{
        c=fgetc(file_pointer);
        printf("%c",c);
    }
    while (c !=EOF);
   
    


    fclose(file_pointer);
    file_pointer=NULL;
    return 0;

}  