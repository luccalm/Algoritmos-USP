#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
  int n, primo, mult; 


  printf("Entre com um número:");
  scanf("%d", &n);  

  primo = 2;
  while (n > 1) 
    {
      mult = 0;
      while (n % fator == 0) 
        {
          mult++;
          n = n / primo; 
        }
      if (mult != 0) 
        {
          printf("  fator %d multiplicidade %d\n", fator, mult); 
        }
      primo++; 
    }

  return 0;
}
