/* 8.  (POLI 97) Dizemos que uma seqüência de inteiros positivos é k-alternante se for composta alternadamente por segmentos de números pares de tamanho k e segmentos de números ímpares de tamanho k.

Exemplos:s

    A seqüência   1 3 6 8 9 11 2 4 1 7 6 8 é 2-alternante.

    A seqüência   2 1 4 7 8 9 12 é 1-alternante.

    A seqüência   4 2 3 1 6 4 2 9 3 não é alternante.

    A seqüência   1 3 5 é 3-alternante. 

 Dado n > 1 e uma seqüência com n inteiros, verificar se existe um inteiro k > 1 tal que a seqüência é k-alternante. 
 Dê como saída também o valor de k caso a seqüência seja alternante */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int n, valor, i;
int valPares = 0, valImpares = 0;

printf("Digite N:");
scanf("%d", &n);

	for(i = 0; i < n; i++)
	{
	printf("Digite um valor para %d:", i+1);
	scanf("%d", &valor);
	
	if(valor % 2 == 0)
	{
	valPares++;	
	}
	else
	{
	valImpares++;	
	}
	
	}

	if(valPares != 0 && valImpares == 0)
	{
	printf("A sequẽncia é %d-alternante.\n", valPares);
	return 0;
	}

	if(valPares == 0 && valImpares != 0)
	{
	printf("A sequẽncia é %d-alternante.\n", valImpares);
	return 0;
	}

	if(valPares == valImpares)
	{
	printf("A sequência é %d-alternante.\n", valImpares);	
	return 0;
	}

	printf("A sequência não é alternante.");

  return 0;
}