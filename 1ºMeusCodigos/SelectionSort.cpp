/*
	Name: SelectionSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 28/07/20 9:15
	Description: Programa para ordena usando o selection Sort ***util para vetores pequenos***		
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//sessao de prototipação
void selectionSort(int*, int);
void selectionSortChar(char*, int);
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);

main()
{
    int tam, tamC;
    int vet[] = {8,3,6,-1,14,78,-3,0,55,13};
    char letra[] = "ADILSON DA SILVA LUZ";

    tam = sizeof(vet) / sizeof(int);        //uso da função sizeof para calcular o tamanho do vetor de inteiros
    tamC = sizeof(letra) / sizeof(char);    //uso da função sizeof para calcular o tamanho do vetor de caracteres
    imprimirVetor(vet, tam);
    selectionSort(vet, tam);                //Invoke da função ordenação por seleção
    imprimirVetorChar(letra, tamC);
    selectionSortChar(letra, tamC);         //Invoke da função ordenação por seleção
    
}//fim do programa


//sessao de funções
void selectionSort(int num[], int tam)
{
    int i, j, aux, min;

    for(i = 0; i < (tam - 1); i++)
    {
        min = i;
        for(j = (i+1); j < tam; j++)
        {
            if(num[j] < num[min])
            {
                min = j;
            }//fim do 1º if
        }//fim do 1º for
            if(num[i] != num[min])
            {
                aux = num[i];
                num[i] = num[min];
                num[min] = aux;
                imprimirVetor(num, tam);
            }//fim do 2º if
    }//fim do 2º for
    
}//fim da funcao


void selectionSortChar(char car[], int tamc)
{
    int i, j, min;
    char aux;

    for(i = 0; i < (tamc - 1); i++)
    {
        min = i;
        for(j = (i+1); j < tamc; j++)
        {
            if(car[j] < car[min])
            {
                min = j;
            }//fim do 1º if
        }//fim do 1º for
            if(car[i] != car[min])
            {
                aux = car[i];
                car[i] = car[min];
                car[min] = aux;
                imprimirVetorChar(car, tamc);
            }//fim do 2º if
    }//fim do 2º for
    
}//fim da funcao


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