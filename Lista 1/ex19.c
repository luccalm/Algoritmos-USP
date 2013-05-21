// 19.  Dados três números, imprimi-los em ordem crescente. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int A[3], B[3], maior = 0, i, j;

for(i = 0; i < 3; i++)
{
	printf("Digite um número:");
	scanf("%d", &A[i]);	
}

for(i = 0; i < 3; i++) 
	{
	maior = 0;
	for(j = 0; j < 3; j++) 
			{
		if(A[i] > A[j]) //Verifica caso A[i] seja maior que A[j]
			{
			maior++; //Caso A[i] seja maior que A[j] soma maior++
			}
			}	
		B[maior] = A[i]; //No final do loop declara B[maior] como sendo o valor de A[i]	
	}		

for(i = 0; i < 3; i++)
	{
	printf("[%d] \n", B[i]);	
	}	

  return 0;
}