/*Create a structure called "Student" with members name, age, and total
marks.Write a C program to input data for two students, display their
information, and find the average of total marks.*/

#include <stdio.h>

int main() {
  struct Student {
    char name[21];
    unsigned int age, total_marks;
  } student_1, student_2;

  printf("Name of student 1 ");
  scanf("%20s", student_1.name); //%20s to avoid buffer overflow
  printf("Age of student 1 ");
  scanf("%u", &student_1.age);
  printf("Total marks of student 1 ");
  scanf("%u", &student_1.total_marks);

  printf("Name of student 2 ");
  scanf("%20s", student_2.name); //%20s to avoid buffer overflow
  printf("Age of student 2 ");
  scanf("%u", &student_2.age);
  printf("Total marks of student 2 ");
  scanf("%u", &student_2.total_marks);
  float avg_marks;

  printf("Student 1 \n Name: %s \n Age: %u \n Total marks: %u \n",
         student_1.name, student_1.age, student_1.total_marks);
  printf("Student 2 \n Name: %s \n Age: %u \n Total marks: %u \n",
         student_2.name, student_2.age, student_2.total_marks);
  printf("Average marks: %.2f\n",
         avg_marks = (student_1.total_marks + student_2.total_marks) / 2.0);
  return 0;
}
