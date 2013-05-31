// 12.  Dados dois números inteiros positivos, determinar o máximo divisor comum entre eles usando o algoritmo de Euclides. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int num1, num2, maior, menor, resto; //Declara as variáveis.

	//Inserir primeiro número
	printf("Digite o primeiro número:");
	scanf("%d", &num1);
	// Inserir segundo número
	printf("Digite o segundo número:");
	scanf("%d", &num2);
	
	//Verifica qual o maior número:

	if(num1 > num2) {
	maior = num1;
	menor = num2;
	}
	else {
	maior = num2;
	menor = num1;
	}
	
	//Caso a divisão do maior pelo menor for 0 o MDC sempre será o menor. (EX: 50 e 2, MDC = 2)
	if(maior % menor == 0)
	{
	printf("O MDC entre %d e %d é: %d \n", num1, num2, menor);	
	return 0;
	}	

	//Faz divisões consecutivas até o resto do maior pelo menor ser 0

	while(maior % resto > 0)
	{
	resto = maior % menor;
	maior = menor;
	menor = resto;
	}

	printf("O MDC entre %d e %d é: %d \n", num1, num2, menor);

return 0;
}
