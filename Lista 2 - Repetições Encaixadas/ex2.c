/* 2.  Dado um número inteiro positivo n, determinar todos os inteiros entre 1 e n que são 
comprimento da hipotenusa de um triângulo retângulo com catetos inteiros. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define FALSE 0
#define TRUE 1

int main(){
	int n;
	int i, icat, icat2, ix;
	int valProcessados = 0;
	int encontrei;

	printf("Digite n:");
	scanf("%d", &n);

	int jaProcessados[n];


	for(i = 1; i <= n; i++)
	{


		for(icat = 1; icat <= i; icat++)
		{
			for(icat2 = 1; icat2 <= i; icat2++)
			{
			if(i*i == icat*icat + icat2*icat2)
				{
					encontrei = FALSE;
					for(ix = 0; ix < valProcessados; ix++)
					{
					if(i == jaProcessados[ix])
						{
						encontrei = TRUE;	
						break;
						}	
					}
					
					if(!encontrei)
					{
					printf("Cateto 1 = %d", icat);
					printf("Cateto 2 = %d \n", icat2);
					printf("%d \n", i);	
					jaProcessados[valProcessados] = i;
					valProcessados++;
					}
				}
				
			}

		}	

	}

return 0;
}
