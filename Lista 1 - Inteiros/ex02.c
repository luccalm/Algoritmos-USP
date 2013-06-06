
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// 2.  Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais. 


int main() {
int numero, soma = 0, i;

printf("Digite um número inteiro positivo:");
scanf("%d", &numero);

for(i = 0; i < numero; i++)
{	
soma = soma + i;
}
printf("A soma dos %d primeiros termos é %d \n" , numero, soma);

return 0;

}

