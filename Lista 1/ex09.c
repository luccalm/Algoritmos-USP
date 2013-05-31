 /*     9.  Dados n e dois números inteiros positivos i e j diferentes de 0, imprimir em ordem crescente os n primeiros naturais que são múltiplos de i ou de j e ou de ambos. 
     Exemplo: Para n = 6 , i = 2 e j = 3 a saída deverá ser : 0,2,3,4,6,8.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int termo, n, i, j, soma = 0, numero; //Declara as variáveis.

	//Digitar N
	printf("Digite n:");
	scanf("%d", &n);

	//Digitar I
	printf("Digite i:");
	scanf("%d", &i);

	//Digitar J
	printf("Digite j:");
	scanf("%d", &j);

	//Multiplica N pela variável multiplicacao enquanto N > 0.
	while(termo < n)
	{
	if(soma % i == 0 && soma % j == 0)
	{
		printf("[%d]", soma);
		termo++;
	}
	if(soma % i == 0 || soma % j == 0) { 
		printf("[%d]", soma);
		termo++;
	}
	soma++;
	}

return 0;
}
