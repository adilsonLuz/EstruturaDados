/*
	Name: Consultorio.cpp
	Author: Adilson Luz(Chacal)
	Date: 14/10/20 08:40
	Description: Progrma usando lista para organizar contatos de pacientes
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>


//sessão de declaração de estruturas
typedef struct paciente{
    char nome[20];
    int rg;
	int telefone;
	char email[30];
    char insta[10];
	struct paciente *proximo;
} paciente;


main ()
{

	paciente *inicioLista;
	paciente *proximoPaciente;
	char resp;

	inicioLista = (paciente *) malloc(sizeof(paciente));
	if(inicioLista == NULL){
		exit(1);
	}

	proximoPaciente = inicioLista;

	while(1)
	{
		printf("Nome: ");
		scanf("%s", &proximoPaciente -> nome);
		printf("RG: ");
		scanf("%d", &proximoPaciente -> rg);
		printf("telefone: ");
		scanf("%d", &proximoPaciente -> telefone);
		printf("email: ");
		scanf("%s", &proximoPaciente -> email);
		printf("Instagram: ");
		scanf("%s", &proximoPaciente -> insta);

		printf("Deseja continuar s/n: ");
		scanf(" %c", &resp);

		if(resp == 's' || resp == 'S')
		{
			proximoPaciente -> proximo = (paciente *) malloc(sizeof(paciente));		//alocação dinamica de memoria
			proximoPaciente = proximoPaciente -> proximo;
		}
		else
			break;
	}//fim do while

	printf("\nElementos da lista: \n");
	proximoPaciente -> proximo = NULL;
	proximoPaciente = inicioLista;

	while(proximoPaciente != NULL)
	{
		printf("Paciente: %s, RG: %d, Telefone: %d, Email: %s, Instagram: %s", proximoPaciente->nome, proximoPaciente->rg, proximoPaciente->telefone, proximoPaciente->email, proximoPaciente->insta);
		printf("\t\tProximo: %p\n", proximoPaciente -> proximo);
		proximoPaciente = proximoPaciente -> proximo;
	}

}//fim do programa - main