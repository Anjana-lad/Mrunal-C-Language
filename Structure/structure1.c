// #include<stdio.h>
// #include<string.h>
// struct student
// {
//     int rollno;
//     char name[50];
//     float marks;

// };
// int main(){
//  struct student s[3];
// int i;
//  printf("Enter student details:\n");
//  for(i=0;i<3;i++){
//     printf("Enter name:");
 
//     fgets(s[i].name, sizeof(s[i].name), stdin);
//         // remove trailing newline if present
//        s[i].name[strcspn(s[i].name, "\n")] = '\0';
//     printf("Enter rollno:");
//     scanf("%d",&s[i].rollno);
    
//     printf("Enter Marks:");
//     scanf("%f",&s[i].marks);
//  }
 
//  for(i=0;i<3;i++){
//     printf("\nrollno:%d",s[i].rollno);
//     printf("\nname: %s",s[i].name);
//     printf("\nMarks:%.2f",s[i].marks);
//  }
//  return 0;
// }

#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct student s[3];
    int i;

    printf("Enter student details:\n");
    for (i = 0; i < 3; i++) {
        printf("Enter name: ");
        // read name with fgets
        fgets(s[i].name, sizeof(s[i].name), stdin);
        // remove trailing newline if present
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        printf("Enter rollno: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        // consume leftover newline from scanf
        getchar();
    }

    printf("\nStudent details:\n");
    for (i = 0; i < 3; i++) {
        printf("\nRoll No: %d", s[i].rollno);
        printf("\nName: %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }

    return 0;
}
