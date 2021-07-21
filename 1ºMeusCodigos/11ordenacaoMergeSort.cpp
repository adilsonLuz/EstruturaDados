/*
	Name: ordenarMergeSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 30/07/2020  11:30
	Description: programa que coloca em ordem crescente os
				 valores inteiros de um vetor com metodo Merge Srot
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<iostream>
#define TAM 10							//Define valor 10 na variavel TAM

using namespace std;					//para usar COUT e CIN do C++

//Sessão de Prototipação

void imprimirVetor(int []);
void ordenarMergeSort(int [], int, int);
void merge(int [], int, int, int);


//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");//incluindo portugues Brasil
	//variaveis locais
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};

    imprimirVetor(vetor);

	ordenarMergeSort(vetor, 0, TAM -1);

    imprimirVetor(vetor);
}


//Sessão de funções

void imprimirVetor(int vt[TAM]){

		puts(" ");
	for(int i=0;i<TAM;i++){
		printf("|%d|",vt[i]);
	}
	puts(" ");
}


void ordenarMergeSort(int vt[TAM], int indiceEsquerdo, int indiceDireito){

	if(indiceEsquerdo < indiceDireito){
		int meio = indiceEsquerdo + (indiceDireito - indiceEsquerdo) /2;	//encontra o meio

		ordenarMergeSort(vt, indiceEsquerdo, meio);		//da metade para tras
		ordenarMergeSort(vt, meio+1, indiceDireito);	//da metade para frente

		merge(vt, indiceEsquerdo, meio, indiceDireito);	//junta os dois sub arrays criados

		imprimirVetor(vt);
	}
}


void merge(int vt[TAM], int indiceEsquerdo, int meio, int indiceDireito){

	int n1, n2;								//variaveis locais e auxiliares
	int i;				                	//variaveis locais e auxiliares
	int j;					            	//variaveis locais e auxiliares
	int k;									//variaveis locais e auxiliares
	n1 = meio - indiceEsquerdo +1;			//define tamanho do primeiro vetor
	n2 = indiceDireito - meio;				//define tamanho do segundo vetor

	int vetorEsquerdo[n1], vetorDireito[n2];//vetores auxiliares

	for(i = 0; i < n1; i++){				//passa valores do vetor principal para o auxiliar 1(esquerda)
		vetorEsquerdo[i] = vt[indiceEsquerdo +i];
	}

	for(j = 0; j < n2; j++){				//passa valores do vetor principal para o auxiliar 2(direita)
		vetorDireito[j] = vt[meio +1 +j];
	}
	i = j = 0;
	 									//zera variaveis auxiliares
	k = indiceEsquerdo;						//recebe 1º indice do vetor principal

	while(i < n1 && j <n2){

		if(vetorEsquerdo[i] <= vetorDireito[j]){//caso valor da esquerda seja menor

			vt[k] = vetorEsquerdo[i];		//passa o menor valor para vetor principal
			i++;							//incrementa o auxiliar para continuar analise
		}else{
			vt[k] = vetorDireito[j];		//passa o menor valor para vetor principal
			j++;							//incrementa o auxiliar para continuar analise
		}
	k++;									//incrementa o indice para percorrer o vetor principal
	}

while(i < n1){								//se faltar elementos para ordenar no vetor esquerdo
	vt[k] = vetorEsquerdo[i];				//passa o valor para vetor principal
	i++;									//incrementa indice do sub array
	k++;									//incrementa indice do array principal
}

while(j < n2){								//se faltar elementos para ordenar no vetor direito
	vt[k] = vetorDireito[j];				//passa o valor para vetor principal
	j++;									//incrementa indice do sub array
	k++;									//incrementa indice do array principal
}
}



