/*    10.  Dizemos que um número natural é triangular se ele é produto de três números naturais consecutivos. 
    Exemplo: 120 é triangular, pois 4.5.6 = 120.
    Dado um inteiro não-negativo n, verificar se n é triangular.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	int n, i = 1, multi = 0; //Declara as variáveis.

	//Digitar N
	printf("Digite N:");
	scanf("%d", &n);

	while(multi < n)
	{
	multi = i*(i+1)*(i+2);
	if(multi == n)
	{
	printf("O número N é triangular pois: %d*%d*%d = %d \n", i, i+1, i+2, n);	
	}
	i++;
	}

return 0;
}
