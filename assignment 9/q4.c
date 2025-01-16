/*Design a structure named "Car" to store details like car ID, model, and rental
rate per day. Write a C program to input data for three cars, calculate the
total rental cost for a specified number of days, and display the results.*/

#include <stdio.h>

struct Car {
  unsigned int id, rent;
  char model[21];
};

int main() {
  struct Car car_1, car_2, car_3;
  int days;

  printf("Enter details for Car 1:\n");
  printf("Car ID: ");
  scanf("%u", &car_1.id);
  printf("Car Model: ");
  scanf("%20s", car_1.model);
  printf("Rental rate per day: ");
  scanf("%u", &car_1.rent);

  printf("\nEnter details for Car 2:\n");
  printf("Car ID: ");
  scanf("%u", &car_2.id);
  printf("Car Model: ");
  scanf("%20s", car_2.model);
  printf("Rental rate per day: ");
  scanf("%u", &car_2.rent);

  printf("\nEnter details for Car 3:\n");
  printf("Car ID: ");
  scanf("%u", &car_3.id);
  printf("Car Model: ");
  scanf("%20s", car_3.model);
  printf("Rental rate per day: ");
  scanf("%u", &car_3.rent);

  printf("\nEnter number of days to rent: ");
  scanf("%u", &days);

  printf("\nRental details:\n");

  printf("Car 1 (ID: %u, Model: %s) total rental cost for %d days: ₹%d\n",
         car_1.id, car_1.model, days, car_1.rent * days);
  printf("Car 2 (ID: %u, Model: %s) total rental cost for %d days: ₹%d\n",
         car_2.id, car_2.model, days, car_2.rent * days);
  printf("Car 3 (ID: %u, Model: %s) total rental cost for %d days: ₹%d\n",
         car_3.id, car_3.model, days, car_3.rent * days);

  return 0;
}
