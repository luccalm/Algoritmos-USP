#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define TAM 31

/* 
 Uma loja de discos anota diariamente durante o mês de março a quantidade de discos vendidos. 
 Determinar em que dia desse mês ocorreu a maior venda e qual foi a quantidade de discos vendida nesse dia.
*/

int main(){
	int i, maiorVenda = 0, dia;
	int marco[TAM];

	//Inserir Discos vendidos no dia:
	for(i = 0; i < TAM; i++)
	{
	printf("Digite a quantidade de discos vendidas no dia %d:",i+1);
	scanf("%d", &marco[i]);
	}
	
	//Loop para maior venda:
	for(i = 0; i < TAM; i++)
	{
		// Se o valor de marco[i] for maior que var maiorVenda
		if(marco[i] > maiorVenda)
			{
			maiorVenda = marco[i];
			dia = i+1;	
			}	
	}
	printf("A maior venda ocorreu no dia %d e a quantidade vendida foi de %d \n", dia, maiorVenda);

return 0;
}