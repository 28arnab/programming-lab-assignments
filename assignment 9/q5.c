/*Create a structure named "Employee" to store employee details such as
employee ID, name, and salary. Write a program to input data for three
employees, find the highest salary employee, and display their information.*/

#include <stdio.h>

int main() {
  struct Employee {
    unsigned int id, salary;
    char name[21];
  } employee_1, employee_2, employee_3;

  printf("Enter details for Employee 1:\n");
  printf("Employee ID: ");
  scanf("%u", &employee_1.id);
  printf("Employee Name: ");
  scanf("%20s", employee_1.name);
  printf("Employee Salary: ₹");
  scanf("%u", &employee_1.salary);

  printf("\nEnter details for Employee 2:\n");
  printf("Employee ID: ");
  scanf("%u", &employee_2.id);
  printf("Employee Name: ");
  scanf("%20s", employee_2.name);
  printf("Employee Salary: ₹");
  scanf("%u", &employee_2.salary);

  printf("\nEnter details for Employee 3:\n");
  printf("Employee ID: ");
  scanf("%u", &employee_3.id);
  printf("Employee Name: ");
  scanf("%20s", employee_3.name);
  printf("Employee Salary: ₹");
  scanf("%u", &employee_3.salary);

  struct Employee highest_salary_employee = employee_1;

  if (employee_2.salary > highest_salary_employee.salary) {
    highest_salary_employee = employee_2;
  }

  if (employee_3.salary > highest_salary_employee.salary) {
    highest_salary_employee = employee_3;
  }

  printf("\nEmployee with the highest salary:\n");
  printf("Employee ID: %u\n", highest_salary_employee.id);
  printf("Employee Name: %s\n", highest_salary_employee.name);
  printf("Employee Salary: ₹%u\n", highest_salary_employee.salary);

  return 0;
}
