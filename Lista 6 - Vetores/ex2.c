/* 2.  Deseja-se publicar o número de acertos de cada aluno em uma prova em forma de testes. 
A prova consta de 30 questões, cada uma com cinco alternativas identificadas por A, B, C, D e E. Para isso são dados:
    o cartão gabarito; 
    o número de alunos da turma; 
    o cartão de respostas para cada aluno, contendo o seu número e suas respostas.  */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define TAM 30


int main(){

int nAlunos, i, j, questaoCerta;
char vGabarito[TAM], respostaAluno;

printf("Digite o nº de alunos:");
scanf("%d", &nAlunos);

printf("Gabarito da prova:\n");
for(i = 0; i < TAM; i++)
	{
	printf("Resposta da questão %d: ", i+1);
	scanf(" %c", &vGabarito[i]);	
	}

for(i = 0; i < nAlunos; i++)
	{
	questaoCerta = 0;	
	printf("Aluno %d:\n", i+1);	
	for(j = 0; j < TAM; j++)
		{
		printf("Digite a resposta da questão %d:", j+1);
		scanf(" %c", &respostaAluno);	
			if(respostaAluno == vGabarito[j]) //Caso a resposta do aluno seja igual a do gabarito.
			{
			questaoCerta++;	//Soma +1 na quantidade de questões do aluno.
			}
		}
		printf("Aluno %d acertou %d questões.", i+1, questaoCerta);
	}

return 0;	
}