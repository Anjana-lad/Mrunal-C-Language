#include<stdio.h>
#include<string.h>

struct employee {
    int emp_id;
    char name[30];
    struct department {
        int dept_id;
        char dept_name[20];
    } depart;
} ;

int main() {
    int i;
    struct employee emp[2];
//typedef struct employee E;
    for(i = 0; i < 2; i++) {
        printf("Enter employee id: ");
        scanf("%d", &emp[i].emp_id);
        getchar();  // clear newline left by scanf

        printf("Enter name: ");
        fgets(emp[i].name, sizeof(emp[i].name), stdin);
        emp[i].name[strcspn(emp[i].name, "\n")] = '\0';  // remove newline

        printf("Enter department id: ");
        scanf("%d", &emp[i].depart.dept_id);
        getchar();

        printf("Enter department name: ");
        fgets(emp[i].depart.dept_name, sizeof(emp[i].depart.dept_name), stdin);
        emp[i].depart.dept_name[strcspn(emp[i].depart.dept_name, "\n")] = '\0';
    }

    printf("\nDisplaying employees details:\n");
    for(i = 0; i < 2; i++) {
        printf("\nEmployee id: %d", emp[i].emp_id);
        printf("\nName: %s", emp[i].name);
        printf("\nDepartment id: %d", emp[i].depart.dept_id);
        printf("\nDepartment name: %s\n", emp[i].depart.dept_name);
    }
    return 0;
}
