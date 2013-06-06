#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 1.  Dada uma seqüência de números inteiros não-nulos, seguida por 0, imprimir seus quadrados.


int main(){
	int numero, quadrado;

	printf("Digite um número (ou 0 para sair):");
	scanf("%d", &numero);
	
	while(numero > 0)
	{
	quadrado = numero*numero;
	printf("O quadrado do número %d é [%d].\n" , numero, quadrado);
	printf("Digite um número:");
	scanf("%d", &numero);
	}

return 0;
}
