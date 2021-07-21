/*
	Name: MergeSort.cpp
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
#include<math.h>

//sessao de prototipação
void mergeSort(int*, int, int);
void merge(int*, int, int, int);
void imprimirVetor(int*, int);




main()
{
    int tam, tamC;
    int vet[] = {7, 23, 11, 45, 92, 9, -5, 0, 31, 55};
    
    tam = sizeof(vet) / sizeof(int);        //uso da função sizeof para calcular o tamanho do vetor de inteiros
    
    puts("Vetor desordenado: ");
    imprimirVetor(vet, tam);

    mergeSort(vet, 0, tam-1);

    puts("Vetor ORDENADO: ");
    imprimirVetor(vet, tam);

}//fim do programa


//sessa de funcoes

void mergeSort(int *v, int inicio, int fim)
{
    int meio;
    if(inicio < fim)
    {
        meio = floor((inicio + fim)/2);
        mergeSort(v, inicio, meio);
        mergeSort(v, meio+1, fim);
        merge(v, inicio, meio, fim);
    }
}//fim funcao mergesort


void merge(int *v, int inicio, int meio, int fim)
{
    int *temp, p1, p2, tamanho, i, j, k;
    int fim1 = 0;
    int fim2 = 0;
    tamanho = fim - inicio+1;
    p1 = inicio;
    p2 = meio+1;
    temp = (int*)malloc(tamanho * sizeof(int));

    if(temp != NULL)
    {
        for(i = 0; i < tamanho; i++)
        {
            if(!fim1 && !fim2)
            {
                if(v[p1] < v[p2])
                {
                    temp[i] = v[p1++];
                }
                    else
                    {
                        temp[i] = v[p2++];
                    }
            if(p1 > meio)
            {
                fim1 = 1;
            }
            if(p2 > fim)
            {
                fim2 = 1;
            }
            }
            else
            {
                if(!fim1)
                {
                temp[i] = v[p1++];
                }
                else
                {
                temp[i] = v[p2++];
                }    
            }
        }
        k = inicio;
        for(j = 0, k = inicio; j < tamanho; j++, k++ )
        {
            v[k] = temp[j];
        }
    }


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