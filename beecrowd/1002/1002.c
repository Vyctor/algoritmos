#include <stdio.h>
#include <math.h>

int main() {
  const double n = 3.14159;
  double a;
  double r;

  scanf("%lf", &r);

  a = n * (r*r);

  printf("A=%.4lf", a);
  printf("\n");

  return a;  
}