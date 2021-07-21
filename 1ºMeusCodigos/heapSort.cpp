/*
	Name: heapSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 11/11/20 11:05
	Description: programa para demonstrar a ordenação de dado por meio do algoritmo Heap Sort
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//sessao de prototipação
void heapSort(int*, int);
void heapSortChar(char*, int);
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);

main()
{
    int vet [] = {24,85,201,17,2,-99,50,28,16,13,61,8};
    char vetC [] = "ADILSON DA SILVA LUZ";
    int tam, tamC;

    tam = sizeof(vet) / sizeof(int);
    tamC = sizeof(vetC) / sizeof(char);

    puts("\nVetor desordenado");
    imprimirVetor(vet, tam);
    imprimirVetorChar(vetC, tamC);

    heapSort(vet, tam);
    heapSortChar(vetC, tamC);

    puts("Vetor Ordenado");
    imprimirVetor(vet, tam);
    imprimirVetorChar(vetC, tamC);
}//Fim do programa


//Sessão de funções

void imprimirVetor(int vt[], int tam)
{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %d |", vt[i]);
    }
    puts(" ");
}//fim da funcao


void imprimirVetorChar(char vt[], int tam)
{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %c |", vt[i]);
    }
    puts(" ");
}//fim da funcao


void heapSort(int *vet, int tam)
{
    int i = tam / 2;
    int pai, filho, t;

    while(true)
    {
        if(i > 0)
        {
            i--;
            t = vet[i];
        }
        else
        {
            tam--;
            if(tam <= 0)
            return;
        t = vet[tam];
        vet[tam] = vet[0];
        }
        pai = i;
        filho = i * 2 + 1;
        while(filho < tam)
        {
            if((filho + 1 < tam) && (vet[filho + 1] > vet[filho]))
                filho++;
            if(vet[filho] > t)
            {
                vet[pai] = vet[filho];
                pai = filho;
                filho = pai * 2 + 1;
            }
            else
                break;    
        }
        vet[pai] = t;
    }
}//fim da função


void heapSortChar(char *vet, int tam)
{
    int i = tam / 2;
    int pai, filho;
    char t;

    while(true)
    {
        if(i > 0)
        {
            i--;
            t = vet[i];
        }
        else
        {
            tam--;
            if(tam <= 0)
            return;
        t = vet[tam];
        vet[tam] = vet[0];
        }
        pai = i;
        filho = i * 2 + 1;
        while(filho < tam)
        {
            if((filho + 1 < tam) && (vet[filho + 1] > vet[filho]))
                filho++;
            if(vet[filho] > t)
            {
                vet[pai] = vet[filho];
                pai = filho;
                filho = pai * 2 + 1;
            }
            else
                break;    
        }
        vet[pai] = t;
    }
}//fim da função