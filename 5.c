/*Write a C program that reads employee's ID, name, status (‘F’ for full-time and ‘P’
for part-time) and basic pay. DA and HRA for full-time employees are 75% and
10% of basic pay respectively. Part-time employees have basic pay only. Print the
total salary of the employee.*/
#include <stdio.h>
#include <string.h>
int main() {
    int id;
    char name[50];
    char status;
    float basic_pay, da, hra, total_salary;
    printf("Enter employee ID: ");
    scanf("%d", &id);
    printf("Enter employee name: ");
    scanf("%s", name);
    printf("Enter employee status (F for full-time, P for part-time): ");
    scanf(" %c", &status);
    printf("Enter basic pay: ");
    scanf("%f", &basic_pay);
    if (status == 'F') {
        da = 0.75 * basic_pay;
        hra = 0.1 * basic_pay;
        total_salary = basic_pay + da + hra;
        printf("Total salary for full-time employee %s (ID: %d) is %.2f\n", name, id, total_salary);
    } else if (status == 'P') {
        total_salary = basic_pay;
        printf("Total salary for part-time employee %s (ID: %d) is %.2f\n", name, id, total_salary);
    } else {
        printf("Invalid status entered for employee %s (ID: %d)\n", name, id);
    }
}