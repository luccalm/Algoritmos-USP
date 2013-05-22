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

int n, numero, numeroAnterior = 0, comprimento = 0, comprimentoMaximo = 1, sequencia = 0;

printf("Digite um valor para N:");
scanf("%d", &n);

while(sequencia < n)
{
printf("Digite um número:");
scanf("%d", &numero);

if(numero > numeroAnterior)
	{
	comprimento++;
	numeroAnterior = numero;	
	}
else
{
if(comprimentoMaximo < comprimento)
{
comprimentoMaximo = comprimento;	
comprimento = 1;
}
}
sequencia++;
}


printf("O comprimento do segmento crescente máximo é: %d. \n", comprimento);

return 0;
}
