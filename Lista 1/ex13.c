/* 13.  (MAT 89) Dizemos que um inteiro positivo n é perfeito se for igual à soma de seus divisores positivos 
diferentes de n.

    Exemplo: 6 é perfeito, pois 1+2+3 = 6.

       Dado um inteiro positivo n, verificar se n é perfeito. */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i, soma = 0, resto; //Declara as variáveis.

	//Inserir primeiro número
	printf("Digite n:");
	scanf("%d", &n);

	for(i = 1; i < n; i++)
	{
	if(n % i == 0) {	
	soma = soma + i;
	}	
	}

	if(soma == n)
	{
	printf("O número %d é perfeito.", n);
	return 0;
	}

	printf("O número %d não é perfeito.", n);


	
return 0;
}
