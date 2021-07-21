/*
	Name: OrdenarShellSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 30/07/2020  9:27
	Description: Programa que ordena um vetor de forma crescente usando método Shell Sort
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
void ordenarShellSort(int []);



//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");			//incluindo portugues Brasil

	//variaveis locais
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	ordenarShellSort(vetor);

	return 0;	
}


//Sessão de funções

void imprimirVetor(int vt[TAM]){
		
		puts(" ");
	for(int i=0;i<TAM;i++){
		printf("|%d|",vt[i]);
	}
	puts(" ");
}


void ordenarShellSort(int vt[TAM]){

	//variaveis auxiliares local
	int i, j, atual;
	int h = 1;

	
	while(h < TAM){
		h = 3 * h + 1;				//de quanto em quantos será o pulo entre análises
	}

	while (h > 1){
		h = h / 3;					//reduz a distancia entre as analises

		for (i = h;i < TAM; i++){
			atual = vt[i];			//elemento atual em analise
			j = i - h;				//elemento anterior ao analisado

			//analisando menbros anteriores
			while ((j >= 0) &&(atual < vt[j])){
				vt[j + h] = vt[j];	//posiciona elementos uma posição para frente
				j = j - h;			//faz j andar para tras
			}
			vt[j +h] = atual;		//Coloca o atual(menor numero) no espaço aberto que é a posição correta
			imprimirVetor(vt);
		}
	}
}







