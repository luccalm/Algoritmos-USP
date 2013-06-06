#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 7.  Dados n e uma seqüência de n números inteiros, determinar a soma dos números pares. */

int main(){
	int n, soma = 0;

	printf("Digite n:");
	scanf("%d", &n);

	while(n > 0)
	{
		if(n % 2 == 0)
		{
			soma = soma + n;
		}
		n--;
	}

	printf("A soma dos pares é: [%d] \n", soma);

return 0;
}