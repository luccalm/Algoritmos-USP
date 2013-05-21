// 18.  Dados três números naturais, verificar se eles formam os lados de um triângulo retângulo. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int num[3], i, hipotenusa, cateto1, cateto2; 

// Insere os valores para os números.
for(i = 0; i < 3; i++)
	{
	printf("Digite um número:");
	scanf("%d", &num[i]);
	}

	//Caso o lado 1 seja o maior lado, o declara como hipotenusa

	if(num[0] > num[1] && num[0] > num[2]) {
		
	hipotenusa = num[0];
	cateto1 = num[1];
	cateto2 = num[2];
	}
	
	//Caso o lado 2 seja o maior lado, o declara como hipotenusa

	if(num[1] > num[2] && num[1] > num[0]) {

	hipotenusa = num[1];
	cateto1 = num[0];
	cateto2 = num[2];
	}
	
	//Caso o lado 3 seja o maior lado, o declara como hipotenusa

	if(num[2] > num[1] && num[2] > num[0]) {

	hipotenusa = num[2];
	cateto1 = num[1];
	cateto2 = num[0];
	}
	
	// Realiza o teorema de pitágoras.
	if(hipotenusa*hipotenusa == cateto1*cateto1 + cateto2*cateto2) 
	// Caso a Hipotenusa ao quadrado seja igual ao cateto1 ao quadrado + cateto2 ao quadrado:
		{
		printf("Os números %d, %d, %d, formam os lados de um triângulo retângulo. \n", hipotenusa, cateto1, cateto2);	
		}	
	//Caso sejam diferentes:
	else
		{
		printf("Os números %d, %d, %d, não formam os lados de um triângulo retângulo \n", hipotenusa, cateto1, cateto2);	
		}

  return 0;
}