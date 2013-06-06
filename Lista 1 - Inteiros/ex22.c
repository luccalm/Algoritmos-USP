 /*   22.  (POLI 89) Dados n e uma seqüência de n números inteiros, determinar o comprimento de um segmento crescente 
 de comprimento máximo. 
    Exemplos: 
    Na seqüência   5,  10,  3,  [2,  4,  7,  9],  8,  5   o comprimento do segmento crescente máximo é 4.
    Na seqüência   10,  8,  7,  5,  2   o comprimento de um segmento crescente máximo é 1. */

//Se numero > numero1 > comprimento++;
//Se numero1 > numero > comprimento = 0;

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int numero, comprimento = 0, comprimentoMaximo = 0;
int numeroAnterior = 0;
int i, n;

printf("Digite um valor para N:");
scanf("%d", &n);

for(i = 0; i < n; i++)
{
printf("Digite um número:");
scanf("%d", &numero);

if(numero > numeroAnterior)
{
comprimento++;
}
else
{
	if(comprimento > comprimentoMaximo)
	{
	comprimentoMaximo = comprimento;
	comprimento = 1;	
	}
}
numeroAnterior = numero;
printf("%d\n", numeroAnterior);
}

printf("O comprimento do segmento crescente máximo é: %d. \n", comprimentoMaximo);

return 0;
}
