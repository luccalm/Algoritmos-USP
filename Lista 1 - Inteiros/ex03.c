#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 3.  Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.
    Exemplo: Para n=4 a saída deverá ser 1,3,5,7.
*/

int main(){
	int n, i, nImpar = 1; // Declarar primeiro número ímpar 1

	printf("Digite um número N positivo: ");
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
	printf("[%d] \n", nImpar);
	nImpar = nImpar + 2; // Soma 2 para o próximo ímpar.
	}
	
return 0;
}
