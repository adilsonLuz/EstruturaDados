/*
	Name: Fila.cpp
	Author: Adilson Luz (Chacal)
	Date: 28/07/20 14:57
	Description: 
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10			//Define valor 10 na variavel TAM

using namespace std;	//para usar COUT e CIN do C++

//Sessão de Prototipação

void imprimirVetor(int []);
void construtorFila(int*, int*);
bool filaVazia(int, int);
bool filaCheia(int);
void enfileirar(int [], int, int*);
void desenfileirar(int [], int*, int);
int filaTamanho(int, int);


//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");			//incluindo portugues Brasil
	
	//variaveis locais
	int fila[TAM];
	int frente, tras;
	int valor;
	
	memset(fila, 0, sizeof(fila));			//limpando memoria da fila
	construtorFila(&frente, &tras);
	imprimirVetor(fila);
	printf("\tMostrando a lista vazia\n");
	
	enfileirar(fila, 5, &tras);
	imprimirVetor(fila);
	printf("\tEnfileirando 1º valor\n");
	
	enfileirar(fila, 7, &tras);
	imprimirVetor(fila);
	printf("\tEnfileirando 2º valor\n");
	
	enfileirar(fila, 6, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 3, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 2, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 1, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 4, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 8, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 9, &tras);
	imprimirVetor(fila);
	enfileirar(fila, 10, &tras);
	imprimirVetor(fila);
	printf("\tEnfileirando 10º valor\n");
	
    printf("\n\tDesenfileirando 1º valor");
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	printf("\n\tDesenfileirando 2º valor");
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	desenfileirar(fila, &frente, tras);
	imprimirVetor(fila);
	
	
}


//Sessão de funções

void imprimirVetor(int vt[TAM]){
		
		puts(" ");
	for(int i=0;i<TAM;i++){
		printf(" |%d| ",vt[i]);
	}
	puts(" ");
}


void construtorFila(int *frente, int *tras){
	
	*frente = 0;
	*tras = -1;
	
}


bool filaVazia(int frente, int tras){
	
	if(frente > tras){
		return true;
	}else{
		return false;
	}
	
}


bool filaCheia( int tras){
	
	if(tras == TAM -1){
		return true;
	}else{
		return false;
	}
	
}


void enfileirar(int fl[TAM], int valor, int *tras){
	
	if(filaCheia(*tras)){
		printf("\n\tFila já está cheia\n");
	}else{
		*tras = *tras +1;
		fl[*tras] = valor;
	}	
}


void desenfileirar(int fl[TAM], int *frente, int tras){
	
	if(filaVazia(*frente, tras)){
		printf("\n\tA fila já está vazia!!!");
	}else{
		printf("\n\tO valor %d foi removido", fl[*frente]);
		fl[*frente] = 0;
		*frente = *frente +1;
	}
	
}


int filaTamanho(int tras, int frente){
	
	return (tras - frente) +1;
	
}




