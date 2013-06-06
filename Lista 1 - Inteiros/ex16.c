/* 16.  Dado um número natural na base binária, transformá-lo para a base decimal.
    Exemplo: 
    Dado 10010 a saída será 18, pois 1. 2 4 + 0. 2 3 + 0. 2 2 + 1. 2 1 + 0. 2 0 = 18. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int numero, potencia = 1, decimal = 0, numtemp;
  
  printf("Digite um número binário:");
  scanf("%d", &numero);

  numtemp = numero;

	while (numtemp != 0)
	{
    decimal = decimal + (numtemp % 10 * potencia); 
    numtemp = numtemp / 10;
    potencia = potencia * 2;
  	}

  printf("O número %d na base 10 é: %d \n", numero, decimal);
  
  return 0;
}
