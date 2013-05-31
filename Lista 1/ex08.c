#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 8.  Dado um inteiro não-negativo n, determinar n!  

int main(){
	int n, multiplicacao = 1; //Declara as variáveis.

	//Digitar N
	printf("Digite n:");
	scanf("%d", &n);

	//Multiplica N pela variável multiplicacao enquanto N > 0.
	while(n > 0)
	{
	multiplicacao = n * multiplicacao;
	n--; //Subtrai N para multiplicar o próximo número.
	}

	printf("Resultado: %d", multiplicacao); //No final do loop mostra o resultado.

return 0;
}