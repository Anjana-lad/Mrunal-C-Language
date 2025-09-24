#include<stdio.h>
struct student{
    char name[50];
    int age;
};
// function declaration

int display(struct student s[2])
{
    printf("\n Displaying students details:\n");
    for(int i=0;i<2;i++){
    printf("\nName:%s",s[i].name);
    printf("\n Age:%d",s[i].age);
    }
}
int main(){
    struct  student stud[2];
    int i;
    for(i=0;i<2;i++){
    printf("Enter name:");
    fgets(stud[i].name,sizeof(stud[i].name),stdin);
    printf("Enter age:");
    scanf("%d",&stud[i].age);

    getchar();  // skiping newline
    }

    display(stud); // function call
    return 0;
}