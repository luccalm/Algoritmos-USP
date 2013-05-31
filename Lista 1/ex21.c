/*     21.  (POLI 87) Dados n e uma seqüência de n números inteiros, determinar 
quantos segmentos de números iguais consecutivos compõem essa seqüência. 
    Exemplo: A seguinte seqüência é formada por 5 segmentos de números iguais:   
    5,  2,  2,  3,  4,  4,  4,  4,  1,  1 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int n, numero, sequencia = 0, segmentos = 0, numero1;

printf("Digite um valor para N:");
scanf("%d", &n);

while(sequencia < n)
{
printf("Digite um número:");
scanf("%d", &numero);
if(numero != numero1) {
	segmentos++;
	}
numero1 = numero;
sequencia++;	
}


printf("Existem %d segmentos de números iguais. \n", segmentos);

return 0;
}