/*
	Name: ordenacaoInsertion
	Author: Adilson Luz (Chacal)
	Date: 25/07/20 16:36
	Description: Programa que ordena e ordem crescente valores inteiros 
	             de uma lista com modo de Insertion Sort.
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10				//Define valor 10 na variavel TAM

using namespace std;		//para usar COUT e CIN do C++

//Sessão de Prototipação

void imprimirVetor(int []);
void ordenarInsertionSort(int []);



//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");			//incluindo portugues Brasil
	
	//variaveis locais
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};
	
	ordenarInsertionSort(vetor);				//Invoke para ordenar
	
}


//Sessão de funções

void imprimirVetor(int vt[TAM]){
		
		puts(" ");
	for(int i=0;i<TAM;i++){
		printf("|%d|",vt[i]);
	}
	puts(" ");
}


void ordenarInsertionSort(int vt[TAM]){
	
	//variaveis locais
	int i,j,atual;
	
	for(i = 1; i <TAM; i++){
		
		atual = vt[i];					//Elemento atual em analise
		j = i - 1;						//Elemento anterior ao analisado
		
		while(j >= 0 && atual < vt[j]){	//Analisando menbros anteriores
			vt[j + 1] = vt[j];			//Move os elementos uma posição para frente
			j = j - 1;					//Indice j volta uma posição
		}
		vt[j + 1] = atual;				//Indice que ficou vazio(espaço aberto no vetor) recebe atual(menor numero) na posição correta
		
		imprimirVetor(vt);				//Mostra lista atualizada
	}
}







