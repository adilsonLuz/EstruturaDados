/*
	Name: Struct
	Author: Adilson Luz (Chacal)
	Date: 16/09/2020 9:00
	Description: Criação e manipulação de estuturas em linguagem C
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10          //define valor 10 para variavel TAM

using namespace std;	//para usar COUT e CIN do C++

typedef struct {
    char nome[20];
    int idade;
    float altura;
} pessoa;

//Sess�o de Prototipa��o

void imprimirVetor(int []);




//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil

	//variaveis locais

	pessoa x;

    printf("Digite os dados de uma pessoa");
    printf("\nNome: ");
    scanf("%s", x.nome);
    printf("Idade: ");
    scanf("%d", &x.idade);
    printf("Altura: ");
    scanf("%f", &x.altura);


}