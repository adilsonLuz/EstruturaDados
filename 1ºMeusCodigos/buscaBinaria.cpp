/*
	Name: buscaBinaria
	Author: Adilson Luz (Chacal)
	Date: 18/11/2020 11:13
	Description: Programa para demonstrar a busca sequencial em uma estrutura desordenada
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<math.h>

//Sessão de prototipação
void quickSort(int*, int, int);
int particionar(int*, int, int);
void imprimirVetor(int*, int);
void imprimirVetorChar(char*, int);
int buscaBinaria(int *, int, int);

main()
{
    char letra[] = "ADILSON DA SILVA LUZ";
    int vet[] = {-50,0,22,39,60,99,105};
    int tam, tamC;
    int num;
    int indice;

    tam = sizeof(vet) / sizeof(int);
    tamC = sizeof(letra) / sizeof(char);

    imprimirVetor(vet, tam);
    quickSort(vet, 0, tam-1);
    imprimirVetor(vet, tam);

    printf("\nQual elemento deseja procurar? ");
    scanf("%d", &num);

    indice = buscaBinaria(vet, tam, num);

    if(indice >= 0)
    {
        printf("\nAchei!!! O numero '%d' esta no indice %d do vetor.\n\n", num, indice);
    }
        else
        {
            printf("\nNao achei o numero '%d' no vetor...\n\n", num);
        }
}//fim do programa

//Sessao de prototipaçao
void imprimirVetor(int *vt, int tam)

{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %d |", vt[i]);
    }
    puts(" ");
}//fim da funcao


void imprimirVetorChar(char *vt, int tam)
{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %c |", vt[i]);
    }
    puts(" ");
}//fim da funcao


int buscaBinaria(int *vet, int tam, int elem)
{
    int inf = 0;
    int sup = tam - 1;
    int meio;
    while(inf <= sup)
    {
        meio = (inf+sup) / 2;
        if(elem == vet[meio])
        {
            return meio;
        }
            else if(elem < vet[meio])
            {
                sup = meio - 1;
            }
            else
            {
                inf = meio + 1;
            }            
    }
    return -1;
}//fim da funcao


void quickSort(int *v, int inicio, int fim)
{
    int pivo;
    if(fim > inicio)
    {
        pivo = particionar(v,inicio,fim);
        quickSort(v, inicio, pivo-1);
        quickSort(v, pivo+1, fim);
    }
}//fim da função


int particionar(int *v, int inicio, int fim)
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
}//fim da função
