/*
	Name: ShelSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 11/11/20 9:15
	Description: Implementação do metodo SHELL para ordenação de dados
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//sessao de prototipação
void shellSort(int*, int);
void shellSortChar(char*, int);
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);



main()
{
    int vet[] = {77,45,12,7,21,9,55,18,26,83,31,2};
    char vetC[] = "ADILSON DA SILVA LUZ";
    int tam;
    int tamC;

    tam = sizeof(vet) / sizeof(int);
    tamC = sizeof(vetC) / sizeof(char);
   

    puts("\nVetor desordenado");
    imprimirVetor(vet, tam);
    imprimirVetorChar(vetC, tamC);

    shellSort(vet, tam);
    shellSortChar(vetC, tamC);

    puts("Vetor Ordenado");
    imprimirVetor(vet, tam);
    imprimirVetorChar(vetC, tamC);

}//fim do programa


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


void shellSort(int vet[], int tam)
{
    int i, j, valor;
    int salto = 1;

    while(salto < tam)
    {
        salto = 3 * salto + 1;
    }
    while(salto > 0)
    {
        for(i = salto; i < tam; i++)
        {
            valor = vet[i];
            j = i;
            while(j > salto -1 && valor <= vet[j-salto])
            {
                vet[j] = vet[j - salto];
                j = j - salto;
            }
            vet[j] = valor;
        }
        salto = salto / 3;
    }
}//fim da função


void shellSortChar(char vet[], int tam)
{
    int i, j;
    char valor;
    int salto = 1;

    while(salto < tam)
    {
        salto = 3 * salto + 1;
    }
    while(salto > 0)
    {
        for(i = salto; i < tam; i++)
        {
            valor = vet[i];
            j = i;
            while(j > salto -1 && valor <= vet[j-salto])
            {
                vet[j] = vet[j - salto];
                j = j - salto;
            }
            vet[j] = valor;
        }
        salto = salto / 3;
    }
}//fim da função