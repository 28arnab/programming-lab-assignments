/*Define a structure named Time with members hours, minutes, and seconds.
Write a C program to input two times, add them, and display the result in proper
time format.*/

#include <stdbool.h>
#include <stdio.h>

int main() {
  struct Time {
    unsigned int hours, minutes, seconds;
  } time_1, time_2;

  printf("Time 1\n");
  printf("Hours: ");
  scanf("%u", &time_1.hours);
  printf("Minutes: ");
  scanf("%u", &time_1.minutes);
  printf("Seconds: ");
  scanf("%u", &time_1.seconds);

  printf("Time 2\n");
  printf("Hours: ");
  scanf("%u", &time_2.hours);
  printf("Minutes: ");
  scanf("%u", &time_2.minutes);
  printf("Seconds: ");
  scanf("%u", &time_2.seconds);

  unsigned int total_hours = 0, total_minutes = 0, total_seconds = 0;
  total_hours += time_1.hours + time_2.hours;
  total_minutes += time_1.minutes + time_2.minutes;
  total_seconds += time_1.seconds + time_2.seconds;
  if (total_seconds >= 60) {
    total_minutes += total_seconds / 60;
    total_seconds = total_seconds % 60;
  }

  if (total_minutes >= 60) {
    total_hours += total_minutes / 60;
    total_minutes = total_minutes % 60;
  }

  printf("Time: %u:%u:%u\n", total_hours, total_minutes, total_seconds);

  return 0;
}
