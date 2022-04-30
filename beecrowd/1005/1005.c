#include <stdio.h>

int main() {
  double a;
  double b;
  double media;

  scanf("%lf %lf", &a, &b);
  media = (a*3.5 + b*7.5) /11;
  printf("MEDIA = %.5lf", media);
  printf("\n");
  return media;
}