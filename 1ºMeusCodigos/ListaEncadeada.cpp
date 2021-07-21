/*
	Name: Lista Encadeada(Ligada)
	Author: Adilson Luz (Chacal)
	Date: 23/09/2020 8:400
	Description: Criação e manipulação de lista encadeada (ligada) em linguagem C
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;	//para usar COUT e CIN do C++

typedef struct Aluno{
    char nome[10];
    int idade;
    float altura;
	struct Aluno *proximo;
} Aluno;

main ()
{

	Aluno *inicioLista;
	Aluno *proximoAluno;
	char resp;

	inicioLista = (Aluno *) malloc(sizeof(Aluno));
	if(inicioLista == NULL){
		exit(1);
	}

	proximoAluno = inicioLista;

	while(1)
	{
		printf("Nome: ");
		scanf("%s", &proximoAluno -> nome);
		printf("Idade: ");
		scanf("%d", &proximoAluno -> idade);
		printf("Altura: ");
		scanf("%f", &proximoAluno -> altura);

		printf("Deseja continuar s/n: ");
		scanf(" %c", &resp);

		if(resp == 's')
		{
			proximoAluno -> proximo = (Aluno *) malloc(sizeof(Aluno));		//alocação dinamica de memoria
			proximoAluno = proximoAluno -> proximo;
		}
		else
			break;
	}//fim do while

	printf("\nElementos da lista: \n");
	proximoAluno -> proximo = NULL;
	proximoAluno = inicioLista;

	while(proximoAluno != NULL)
	{
		printf("Aluno: %s, Idade: %d, Altura: %.2f", proximoAluno->nome, proximoAluno->idade, proximoAluno->altura);
		printf("\t\tProximo: %p\n", proximoAluno -> proximo);
		proximoAluno = proximoAluno -> proximo;
	}

}//fim do programa - main