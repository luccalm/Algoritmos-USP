// 19.  Dados três números, imprimi-los em ordem crescente. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int A[3], temp, i, troca;

for(i = 0; i < 3; i++)
{
	printf("Digite um número:");
	scanf("%d", &A[i]);	
}

troca = 1;
while(troca)
{
troca = 0;
	for(i = 0; i < 2; i++)
	{
		if(A[i] > A[i+1])
		{
		temp = A[i];
		A[i] = A[i+1];
		A[i+1] = temp;	
		troca = 1;
		}	
	}

}	

for(i = 0; i < 3; i++)
	{
	printf("[%d] \n", A[i]);	
	}	

  return 0;
}