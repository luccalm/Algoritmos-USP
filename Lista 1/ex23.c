/*     23.  Dizemos que um número natural n é palíndromo (3) se
        o 1º algarismo de n é igual ao seu último algarismo,
        o 2º algarismo de n é igual ao penúltimo algarismo,
        e assim sucessivamente.

        Exemplos:

                567765 e 32423 são palíndromos.

                567675 não é palíndromo.

    Dado um número natural  n > 10 , verificar se n é palíndrome. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

 int numero, num1, i, pot = 1, quot, n = 0, multi = 1;
int resto;
int invertido = 0;
int divisao;

 printf("Digite um número:");
 scanf("%d", &numero);

num1 = numero;
divisao = num1;

while(divisao > 10)
{
divisao = num1 / 10;
multi = multi * 10;
num1 = num1 / 10;
n++;
}

num1 = numero;

while(n >= 0 )
{
resto = (num1 % 10) * multi;
num1 =  num1 / 10;
multi =  multi / 10;
invertido = invertido + resto;
n--;
}

if(numero == invertido)
	{
	printf("%d é palindromo.", numero);
	return 0;
	}
else
	{
	printf("%d não é palindromo.", numero);	
	}	


return 0;
}