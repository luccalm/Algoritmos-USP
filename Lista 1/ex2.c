
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais. 

/* 
Primeiro = 3
Segundo = 3 + 4
Terceiro = 3 + 4 + 5
*/

int main(){
	int numero, numero1, termos, soma = 0, i;

	printf("Digite um número inteiro positivo:");
	scanf("%d", &numero);

	printf("Digite a quantidade de termos:");
	scanf("%d", &termos);

	for(i = 0; i < termos; i++)
	{	
	numero1 = numero + i;
	soma = soma + numero1;	
	}
	printf("A soma dos %d primeiros termos do número %d é: %d \n" , termos, numero, soma);

return 0;
}


