#include <stdio.h>
int main()
{
  float a, b, c;

  scanf("%f %f %f", &a, &b, &c);

  int formaUmTriangulo = (b - c) < a && a < (b + c) && (a - c) < b && b < (a + c) && (a - b) < c && c < (a + b);

  if (formaUmTriangulo)
  {
    printf("Perimetro = %.1f\n", a + b + c);
  }
  else
  {
    printf("Area = %.1f\n", ((a + b) * c) / 2);
  }

  return 0;
}