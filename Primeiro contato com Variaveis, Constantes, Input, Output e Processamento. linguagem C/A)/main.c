// A)
#include <stdio.h>

int main(void) {

  float C, F;

  printf("Este programa lê uma temperatura em graus Celsius e a converte em "
         "uma temperatura equivalente em graus Fahrenheit.");

  printf("\n\nDigite uma temperatura em graus Celsius: ");
  scanf("%f", &C);

  F = C * 9 / 5 + 32;

  printf("\nEsta temperatura em graus Fahrenheit equivale a: %.2f", F);

  return (0);
}