/*
	Name: ordenacaoSelectionSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 26/07/20 11:00
	Description: Programa que ordena e ordem crescente valores inteiros 
	             de uma lista com modo de Selection Sort.		***util para vetores pequenos***
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10					//Define valor 10 na variavel TAM

using namespace std;			//para usar COUT e CIN do C++

//Sess�o de Prototipa��o

void imprimirVetor(int []);
void ordenarSelectionSort(int []);



//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");				//incluindo portugues Brasil
	
	//variaveis locais
	int vetor[TAM] = {8,3,6,-1,14,78,-3,0,55,13};
	
	ordenarSelectionSort(vetor);				//Invoke para ordenar lista
	
	
}


//Sess�o de fun��es

void imprimirVetor(int vt[TAM]){
		
		puts(" ");
	for(int i=0;i<TAM;i++){
		printf("|%d|",vt[i]);
	}
	puts(" ");
}


void ordenarSelectionSort(int vt[TAM]){
	
	//variaveis local auxiliares
	int posicaoDoMenorValor, aux, i, j;
	
	for(i = 0; i < TAM; i++){					//Percorre todo o vetor
		posicaoDoMenorValor = i;				//Recebe a posi��o inicial para o menor valor da lista
		
		for(j = i + 1;j < TAM; j++){			//percorre os indices a serem analisados
			if(vt[j] < vt[posicaoDoMenorValor])	//Caso encontre um valor menor na frente dos analizados
				posicaoDoMenorValor = j;		//Variavel reebe menor valor encontrado
		}

			if(posicaoDoMenorValor != i){		//Verifica se houve mudan�a e troca os valores
				aux = vt[i];					//Auxiliar guarda o valor da posi��o i
				vt[i] = vt[posicaoDoMenorValor];//Vetor na posi��o i recebe o menor valor encontrado
				vt[posicaoDoMenorValor] = aux;	//Vetor na posi��o j recebe o valor da auxiliar
			}
		imprimirVetor(vt);						//Invoke imprimindo vetor mostrando cada troca.
	}
}







