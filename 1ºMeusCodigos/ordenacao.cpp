/*
	Name: OrdemIntuitiva
	Author: Adilson Luz (Chacal)
	Date: 21/10/2020 11:07
	Description: Programa para colocar um vetor em ordem crescente pelo mnodo
                 intuitivo(comparação e troca)
*/

#include<iostream>
#include<stdio.h>
#include<new>
#include<string>
#include<stdlib.h>

int main()
{
    int vet[13] = {13,7,4,8,20,19,2,6,31,10,14,18,5};
    int i, aux, x;
    i = aux = x = 0;
    int troca, comp;
    troca=comp=0;

    puts("\n\nVetor original - DESORDENADO");
    for(i = 0;i < 13;i++)
    {
        printf("%d, ", vet[i]);
    }

while(x < 6)
{
    comp++;
    for(i = 0;i < 7;i++)
    {
        if(vet[i] > vet[i+1])
        {
        aux = vet[i];
        vet[i] = vet[i+1];
        vet[i+1] = aux;
        troca++;
        comp++;
    }
    }//fim do for
    x++;
}//fim do while

    puts("\n\nVetor - ORDENADO");
    for(i = 0;i < 13;i++)
    {
        printf("%d, ", vet[i]);
    }

    printf("\nTrocas: %d",troca);
    printf("\nComparacao: %d",comp);



}//fim do programa
