/* 4.  Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar (1) desses vetores.  */

#include <stdio.h>

int main() {
  int i, n;
  float produtoEscalar = 0;

  printf("Digite o tamanho dos vetores: ");
  scanf("%d", &n);

  float x[n], y[n];

  for (i = 0; i < n; i++)
  {
  printf("Digite X[%d]:", i+1);
  scanf("%f", &x[i]);	
  }

  for (i = 0; i < n; i++)
  {
  printf("Digite Y[%d]:", i+1);
  scanf("%f", &y[i]);	
  }

   for (i = 0; i < n; i++)
  {
  produtoEscalar = produtoEscalar + (x[i] * y[i]);
  }
 
  printf("Produto escalar dos vetores X e Y é: %0.2f\n", produtoEscalar);

return 0;
}