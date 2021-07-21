/*
	Name: buscaSequencial
	Author: Adilson Luz (Chacal)
	Date: 18/11/2020 09:14
	Description: Programa para demonstrar a busca sequencial em uma estrutura desordenada
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessão de prototipação
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);

main()
{
    char letra[] = "ADILSON DA SILVA LUZ";
    int vet[] = {32 ,56 ,2 ,90 ,31 ,-5 ,14 ,29 ,83 ,105 ,-9 ,0 ,15 ,77 ,45};
    int i, tam, tamC;
    int num;
    int flag;

    tam = sizeof(vet) / sizeof(int);        
    tamC = sizeof(letra) / sizeof(char);

    imprimirVetor(vet, tam);

    printf("\nQual elemento deseja buscar? ");
    scanf("%d", &num);

    i=0;
    flag = 0;

    do
    {
        if(vet[i] == num)
        {
        flag = 1;
        break;
        }
        i++;
    } while (i < tam);

    if(flag == 1)
    {
        printf("\nAchei!!! O numero procurado esta no indice %d do vetor.", i);
    }
    else
        printf("\nNao achei...");


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
}//fim da funcao-9