/* 20.  (FIS 88) Qualquer número natural de quatro algarismos pode ser dividido em duas dezenas formadas pelos seus 
dois primeiros e dois últimos dígitos.

    Exemplos:

            1297: 12 e 97.

            5314: 53 e 14.

    Escreva um programa que imprime todos os milhares (4 algarismos) cuja raiz quadrada seja a soma das dezenas 
    formadas pela divisão acima.

    Exemplo: raiz de 9801 = 99 = 98 + 01.
    Portanto 9801 é um dos números a ser impresso. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

int resto = 0, dividendo = 0, raiz = 0, algarismos = 1000;

while(algarismos < 10000) 
{
resto = algarismos % 100; //Descobre os últimos 2 algarismos (resto)
dividendo = algarismos / 100; //Descobre os primeiros 2 algarismos (dividendo)
raiz = resto + dividendo; //Realiza a soma das duas dezenas
	if(raiz*raiz == algarismos) //Caso a variável raiz (soma das 2 dezenas) seja igual ao algarismo imprime o mesmo.
		{
		printf("[%d] \n", algarismos);	
		}
algarismos++;	
} 

 return 0;
}