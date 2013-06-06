/*     15.  Dizemos que um número i é congruente módulo m a j se i % m = j % m.
      
    Exemplo: 35 é congruente módulo 4 a 39, pois
    35 % 4 = 3 = 39 % 4.
    Dados inteiros positivos n, j e m, imprimir os n primeiros naturais congruentes a j módulo m.  */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  int n, j, m, i;
  
  printf("Digite n:");
  scanf("%d", &n);
  
  printf("Digite j:");
  scanf("%d", &j);
  
  printf("Digite m:");
  scanf("%d", &m);
  
  for(i = 0; i < n; i++)
  {
  	if(i % m == j % m) /*Caso o resto da divisão de i por m e j por m sejam iguais*/ {
  		printf("O número %d é congruente módulo %d a %d \n", i, m, j);	
  	}
  }

  return 0;
}

