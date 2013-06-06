/* 17.  Dado um número natural na base decimal, transformá-lo para a base binária. 
    Exemplo: Dado 18 a saída deverá ser 10010. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int numero,
	resto,
	quociente,
	soma = 0;

	printf("Digite um número:");
	scanf("%d", &numero);

	quociente = numero;

	while(quociente > 0)
	{
	quociente = numero / 2;
	resto = numero % 2;
	numero = numero / 2;
	soma = (soma * 10) + resto;
	}

		printf("Binário: %d \n", soma);


  return 0;
}