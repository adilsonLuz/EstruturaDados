/*
	Name: ordenarQuickSort
	Author: Adilson Luz (Chacal)
	Date: 28/07/2020  16:45
	Description: Programa que ordena um vetor de forma crescente usando metodo Quick Sort
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10			//Define valor 10 na variavel TAM

using namespace std;	//para usar COUT e CIN do C++

//Sess�o de Prototipa��o

void imprimirVetor(int []);
void ordenarQuickSort(int [], int, int);



//Variaveis globais



int main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
imprimirVetor(vetor);
	ordenarQuickSort(vetor, 0, TAM);

}


//Sess�o de fun��es

void imprimirVetor(int vt[TAM]){

		puts(" ");
	for(int i=0;i<TAM;i++){
		printf(" |%d| ",vt[i]);
	}
	puts(" ");
}


void ordenarQuickSort(int vt[TAM], int inicio, int fim){

	//variaveis auxiliares local
	int pivo, esq, dir, meio, aux;

	//Limites da esquerdsa e da direita da regi�o analizada
	int cont=0;
	esq = inicio;
	dir = fim;

	//ajustando auxiliares do centro
	meio = (int) ((esq + dir) /2);
	pivo = vt[meio];

	while(dir > esq){
		
		while(vt[esq] < pivo){
		
			esq = esq +1;
		}

			while(vt[dir] > pivo){
				
				dir = dir -1;
			}
		if(esq <= dir){
			//realiza a troca
		
			aux = vt[esq];
			vt[esq] = vt[dir];
			vt[dir] = aux;

			//faz os limites laterais caminhe para o centro
			esq = esq +1;
			dir = dir -1;
		
		}

		imprimirVetor(vt);
	}

	//recurs�o para continuar ordenando
	if(inicio < dir){
		ordenarQuickSort(vt, inicio, dir);
		
	}

	//recurs�o para continuar ordenando
	if(esq < fim){
		ordenarQuickSort(vt, esq, fim);
		
	}
	
}







