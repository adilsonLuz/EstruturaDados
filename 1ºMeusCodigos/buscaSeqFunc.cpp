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
int buscaSeq(int *, int, int);

main()
{
    char letra[] = "ADILSON DA SILVA LUZ";
    int vet[] = {-50,0,22,39,60,99,105};
    int i, tam, tamC;
    int num;
    int indice;

    tam = sizeof(vet) / sizeof(int);         
    tamC = sizeof(letra) / sizeof(char);

    imprimirVetor(vet, tam);

    printf("\nQual elemento deseja buscar? ");
    scanf("%d", &num);

    indice = buscaSeq(vet, tam, num);

    if(indice >= 1)
    {
        printf("\nAchei!!! O numero '%d' procurado esta no indice %d do vetor.\n\n", num, indice);
    }
    else
        printf("\nNao achei o numero '%d' no vetor...\n\n", num);


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


int buscaSeq(int *vet, int tam, int num)
{
    int i=0;
    
    do
    {
        if(vet[i] == num)
        {
        	
        return i;
        }
		imprimirVetor(vet,tam);
        i++;
		
    } while (i < tam);
    return -1;
}
