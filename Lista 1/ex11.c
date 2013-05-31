// 11.  Dado um inteiro positivo p, verificar se p é primo. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int p, i, nPrimo = 0; //Declara as variáveis.

	//Digitar N
	printf("Digite p:");
	scanf("%d", &p);

	for(i = 1; i < p; i++)
	{
	if(p % i == 0) 
	{
	nPrimo++;	
	}
	}

	if(nPrimo < 2) { printf("O número é primo. \n"); }
	else { printf("O número não é primo. \n"); }


	
return 0;
}
