#include <stdio.h>

int main() {
  int employerNumber;
  double hoursWorked;
  double hourValue;
  double salary;

  scanf("%i %lf %lf", &employerNumber, &hoursWorked, &hourValue);

  salary = hoursWorked * hourValue;

  printf("NUMBER = %i", employerNumber);
  printf("\n");
  printf("SALARY = U$ %.2lf", salary);
  printf("\n");

  return salary;
}