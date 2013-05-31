#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
 6.  Dados o número n de alunos de uma turma de Introdução aos Autômatos a Pilha (MAC 414) e 
 suas notas da primeira prova, determinar a maior e a menor nota obtidas por essa turma (Nota máxima = 100 e 
 ota mínima = 0). 
*/

int main(){
	int n, soma = 0, notaAluno, notaMaxima = 0, notaMinima = 100;

	printf("Digite o número de alunos:");
	scanf("%d", &n);

	//Inserir Nota dos alunos:
	while(soma < n)
		{
		printf("Digite a nota do aluno %d:",  soma+1);
		scanf("%d", &notaAluno);
			if(notaAluno > notaMaxima) //Compara a nota do aluno com a nota máxima.
				{
				notaMaxima = notaAluno;
				}	
			if(notaAluno < notaMinima) //Compara a nota do aluno com a nota mínima.
				{
				notaMinima = notaAluno;
				}
		soma++;
		}
	
	printf("A nota máxima foi de: %d e a minina de: %d \n", notaMaxima, notaMinima);
return 0;
}