// 1.  Dada uma seqüência de n números, imprimi-la na ordem inversa à da leitura. 

#include <stdlib.h>
#include <stdio.h>

int main() {

int i, n, vTroca[100];

printf("Digite N:");
scanf("%d", &n);

for(i = 0; i <= n; i++)
{
vTroca[i] = i;
}

for(i = n; i >= 0; i--)
{
printf("[%d]", vTroca[i]);	
}
printf("\n");

return 0;	
}