#include <stdio.h>
int main() {
    int id;
    char name[50], designation[50], department[50];
    float salary;

    int *p_id = &id;
    char *p_name = name;
    char *p_designation = designation;
    char *p_department = department;
    float *p_salary = &salary;

    printf("Enter Employee ID: ");
    scanf("%d", p_id);

    printf("Enter Employee Name: ");
    scanf("%s", p_name);

    printf("Enter Designation: ");
    scanf("%s", p_designation);

    printf("Enter Department: ");
    scanf("%s", p_department);

    printf("Enter Salary: ");
    scanf("%f", p_salary);

    printf(" Employee Details \n");
    printf("ID : %d\n", *p_id);
    printf("Name : %s\n", p_name);
    printf("Designation : %s\n", p_designation);
    printf("Department : %s\n", p_department);
    printf("Salary : %.2f\n", *p_salary);

    return 0;
}
