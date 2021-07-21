/*
	Name: BubbleSort
	Author: Adilson Luz (Chacal)
	Date: 28/10/2020
	Description: Programa que ordena em ordem crescente os elementos inteiros de um vetor
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessao de prototipação
void bubbleSort(int *, int);
void imprimirVetor(int *, int);

main()
{
    int i, tam;
    int vet[] = {13,7,4,8,20,19,2,6,31,10,14,18,5};

    tam = sizeof(vet) / sizeof(int);

    imprimirVetor(vet, tam);
    bubbleSort(vet, tam);

    

}//Fim do programa

//Sessão de Funções

void imprimirVetor(int vt[], int tam)
{	
	for(int i = 0; i < tam; i++){		//percorrendo vetor
		printf(" |%d| ",vt[i]);		    //imprimindo indice do vetor
	}
    puts(" ");
}

void bubbleSort(int vetor[], int tam)
{
    int k, j, aux;

    for(k = 1; k < tam; k++)
    {
        printf("\n[%d]\n", k);
        for(j = 0; j < (tam-k); j++)
        {
            imprimirVetor(vetor, tam);
            if(vetor[j] > vetor[j+1])
            {
            aux=vetor[j];
            vetor[j]=vetor[j+1];
            vetor[j+1]=aux;
            
            }
        }
    }

}//fim do bubble
