#include <stdio.h>

int main() {
  double a;
  double b;
  double c;
  double average;

  scanf("%lf %lf %lf", &a, &b, &c);

  average = (a*2 + b*3 + c*5) / 10;

  printf("MEDIA = %.1lf", average);
  printf("\n");

  return average;

}