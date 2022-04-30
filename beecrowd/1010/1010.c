#include <stdio.h>

int main() {
  int code;
  int units;
  double price;
  int code2;
  int units2;
  double price2;
  double totalPrice;

  scanf("%i %i %lf %i %i %lf", &code, &units, &price, &code2, &units2, &price2);

  totalPrice = units * price + units2 * price2;


  printf("VALOR A PAGAR: R$ %.2lf", totalPrice);
  printf("\n");

  return totalPrice;
}