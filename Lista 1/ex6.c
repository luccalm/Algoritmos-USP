#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
 6.  Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e 
 suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e 
 ota mínima = 0). 
*/

int main(){
	int n, i = 0, notaAluno, notaMaxima = 0, notaMinima = 0;

	printf("Digite o número de alunos:");
	scanf("%d", &n);

	//Inserir Nota dos alunos:
	while(i < n)
		{
		printf("Digite a nota do aluno %d:",  i+1);
		scanf("%d", &notaAluno);
			if(notaAluno > notaMaxima)
				{
				notaMaxima = notaAluno;	
				notaMinima = notaAluno;
				}
				else if(notaAluno < notaMinima)
				{
				notaMinima = notaAluno;
				}
		i++;
		}
	
	printf("%d %d", notaMaxima, notaMinima);
return 0;
}