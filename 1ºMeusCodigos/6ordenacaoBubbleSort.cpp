/*
	Name: ordenacaoBubbleSort
	Author: Adilson Luz (Chacal)
	Date: 25/07/2020
	Description: Programa que ordena em ordem crescente os elementos inteiros de um vetor
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#define TAM 10					//Define valor 10 para variavel TAM.

using namespace std;			//Para usar COUT e CIN do C++

//Sess�o de Prototipa��o

void imprimirVetor(int []);
void ordenarBubble(int []);



//Variaveis globais



main()
{
	setlocale(LC_ALL,"Portuguese");		//incluindo portugues Brasil
	
	//variaveis locais
	int vetor[TAM] = {10,9,8,7,6,5,4,3,2,1};	

	ordenarBubble(vetor);				//Invoke
	imprimirVetor(vetor);				//Invoke
}


//Sess�o de fun��es

void imprimirVetor(int vt[TAM]){	
	
		puts(" ");					//pulando linha antes de imprimir vetor
	for(int i=0;i<TAM;i++){			//percorrendo vetor
		printf("|%d| ",vt[i]);		//imprimindo indice do vetor
	}
	puts(" ");						//pulando linha depois de imprimir
}


void ordenarBubble(int vt[TAM]){
	
	//variaveis auxiliares
	int x, y, aux;
	
	//Realiza a analize em pares
	
	for(x = 0; x < TAM; x++){			//percorrendo valor da esquerda
		
		for(y = x + 1; y < TAM; y++){	//percorrendo valor de direita
			
			imprimirVetor(vt);			//Invoke mostrando o que esta acantecendo a cada la�o
			if(vt[x] > vt[y]){			//condi��o para analisar qual o maior
				aux = vt[x];			//trocando os valores 
				vt[x] = vt[y];			//trocando os valores
				vt[y] = aux;			//trocando os valores
			}
		}
	}
}





