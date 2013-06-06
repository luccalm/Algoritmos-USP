#include <stdlib.h>
#include <stdio.h>


int fat(int n) {
printf("Entro com o valor %d.\n", n);
if(n == 0) return 1;
return n*fat(n-1);
} 

int main(){

int n;

n = fat(6);

printf("[%d]\n", n);	

return 0;

}