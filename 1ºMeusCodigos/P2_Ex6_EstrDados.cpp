/*
	Name: Ordenação, entrada, saida, listagem
	Author: Adilson Luz (Chacal)
	Date: 03/12/2020 17:40
	Description: Algoritmo que manipula dados de um vetor
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

//Sessao de prototipacao
void limparTela();
int buscaBinaria(int *, int, int);
void quickSort(int*, int, int);
int particionar(int*, int, int);
void imprimirVetor(int*, int);
void menu();

//variavel global
int inicio, fim, total;
int *valores;
int vetor[]={13,5,28,32,65,0,0,0,99,57,66,69,47,88,22,0,7};
int tam;

main()
{
    tam = sizeof(vetor) / sizeof(int);
    menu();
}//fim do programa


//Sessao de Funções
void menu()
{
    int esc = 1;

    while(esc < 5 && esc > 0){

        //mostrando o menu
        printf("\n\n\t*** Operacoes ***\n\n");
        printf("\t1 - INSERIR\n");
        printf("\t2 - REMOVER\n");
        printf("\t3 - CONSULTAR\n");
        printf("\t4 - SAIR\n");

        //lendo a opcao do usuario
        scanf("%d",&esc);

        int add,rm,tira;
        
    switch (esc)
    {
    case 1:
    	limparTela();
        printf("Qual numero deseja INSERIR? ");
        scanf("%d",&add);
        if(vetor[0]<1 && vetor[0] > -1)
        {
        vetor[0]=add;
        printf("\nO elemento %d foi inserido da estrutura\n", add);
        }
        else{
            printf("\nA estrutura esta cheia\n");
        }
        quickSort(vetor,0,tam-1);
        menu();
        break;
    case 2:
        limparTela();
        printf("Qual numero deseja REMOVER? ");
        scanf("%d",&rm);
        tira = buscaBinaria(vetor, tam, rm);
        if(tira >= 0)
        {
            printf("\nO elemento %d foi removido da estrutura\n", vetor[tira]);
            vetor[tira] = 0;
        }
        else{        
            printf("\nElemento %d nao existe na estrutura\n", rm);
        }
        quickSort(vetor,0,tam-1);
        menu();
        break;
    case 3:
    	limparTela();
        printf("Os Elementos da estrutura sao: \n");
        quickSort(vetor,0,tam-1);
        imprimirVetor(vetor, tam);
        menu();
        break;
    case 4:
        exit(0);
        break;
    default :
    printf("Valor invalido\n\n");
    menu();
    }
    }
}//fim da funcao menu

void imprimirVetor(int vt[], int tam)

{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %d |", vt[i]);
    }
    puts(" ");
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
}

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
}

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

void limparTela(){
        system("CLS");
    }
