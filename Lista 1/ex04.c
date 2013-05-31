#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 4.  Dados um inteiro x e um inteiro não-negativo n, calcular x n. 
*/

int main(){
	int n, i = 0, x, elevado = 1; 

	//Inserir X:
	printf("Digite x:");
	scanf("%d", &x);

	//Inserir Y:
	printf("Digite n:");
	scanf("%d", &n);

	//Calculo da potencia
	while(i < n)
	{
	elevado = elevado * x; 
	i++;
	}

	//Resultado final
	printf("Resultado: %d \n", elevado);
	
return 0;
}
