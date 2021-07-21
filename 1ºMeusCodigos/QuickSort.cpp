/*
	Name: QuickSort.cpp
	Author: Adilson Luz (Chacal)
	Date: 28/07/20 9:15
	Description: Programa para demonstrar o algoritimo Quick Sort como um eficiente 
                 metodo de ordenação.
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//sessao de prototipação
void quickSort(int*, int, int);
int particionar(int*, int, int);
void quickSortChar(char*, int, int);
int particionarChar(char*, int, int);
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);
int tamanho(int*);


main()
{
    int tam, tamC;
    int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
    char letra[] = "ADILSON DA SILVA LUZ";

    tam = sizeof(vet) / sizeof(int);        //uso da função sizeof para calcular o tamanho do vetor de inteiros
    tamC = sizeof(letra) / sizeof(char);    //uso da função sizeof para calcular o tamanho do vetor de caracteres


    puts("Vetor desordenado: ");
    imprimirVetor(vet, tam);

    quickSort(vet, 0, tam-1);

    puts("Vetor ORDENADO: ");
    imprimirVetor(vet, tam);

    puts("Vetor desordenado: ");
    imprimirVetorChar(letra, tamC);

    quickSortChar(letra, 0, tamC-1);

    puts("Vetor ORDENADO: ");
    imprimirVetorChar(letra, tamC);

}//Fim do programa


//sessao de funcoes

void quickSort(int *v, int inicio, int fim)
{
    int pivo, co;co=0;
    if(fim > inicio)
    {co++;
        pivo = particionar(v,inicio,fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v, pivo+1, fim);
        co++;
        printf("\nTotal: %d",co);
    }
}


int particionar(int *v, int inicio, int fim)
{
    int esq, dir, pivo,co, aux;
    esq = inicio;
    dir = fim;
    pivo = v[inicio];

    while(esq < dir)
    {co++;
        while(v[esq] <= pivo)
        {
            esq++;co++;
        }
            while(v[dir] > pivo)
            {
                dir--;co++;
            }
            if(esq < dir)
            {
                aux = v[esq];
                v[esq] = v[dir];
                v[dir] = aux;
                imprimirVetor(v, 10);co++;
            }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;co++;
}


void quickSortChar(char *v, int inicio, int fim)
{
    int pivo;
    if(fim > inicio)
    {
        pivo = particionarChar(v,inicio,fim);
        quickSortChar(v, inicio, pivo-1);
        quickSortChar(v, pivo+1, fim);
    }


}


int particionarChar(char *v, int inicio, int fim)
{
    int esq, dir, pivo, aux;
    esq = inicio;
    dir = fim;
    pivo = v[inicio];

    while(esq < dir)
    {
        while(v[esq] <= pivo)
        {
            esq++;
        }
            while(v[dir] > pivo)
            {
                dir--;
            }
            if(esq < dir)
            {
                aux = v[esq];
                v[esq] = v[dir];
                v[dir] = aux;
            }
    }
    v[inicio] = v[dir];
    v[dir] = pivo;
    return dir;
}


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
