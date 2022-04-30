#include <stdio.h>

int main() {
  int a;
  int b;
  int c;
  int d;
  int difference;

  scanf("%i %i %i %i", &a, &b, &c, &d);

  difference = (a*b)-(c*d);

  printf("DIFERENCA = %i", difference);
  printf("\n");

  return difference;
}