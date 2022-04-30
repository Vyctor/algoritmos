#include <stdio.h>

int main() {
  char name[20];
  double salary;
  double kickback;
  double total;

  fgets(name, 20, stdin);
  
  scanf("%lf %lf", &salary, &kickback);

  total = salary + (kickback * 0.15);

  printf("TOTAL = R$ %.2lf\n", total);

  return total;

}