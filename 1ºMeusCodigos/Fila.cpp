/*
	Name: Fila.cpp
	Author: Adilson Luz (Chacal)
	Date: 07/10/2020 10:45
	Description: programa para demonstrar o conceito da Estrutura de dados fila circular
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;	//para usar COUT e CIN do C++

//Sessão de Prototipação
void inserir(int);
int retirar();
int isEmpity();
int isFull();


//variavel global
int inicio, fim, total;
int valores[5];

main()
{
    inicio = 0;
    fim = 0;
    total = 0;

    
    inserir(7);
    inserir(33);
    inserir(12);
    inserir(91);
    inserir(10);
    puts("\n\tElementos presentes na fila : 7, 33, 12, 91, 10");
    inserir(55);
  
    printf("\nOrdem dos elementos retirados da fila: ");
    while(isEmpity() == 0)
    {
        int x = retirar();
        printf("%d, ", x);
    }

    int x = retirar();

    for(int i = 0; i<5; i++)
        printf("%d, ", valores[i]);

}//fim do programa

void inserir( int elem)
{
    if(isFull() == 1)
        puts("\nFila esta cheia!!!");
    else   
    {
        valores[fim] = elem;
        fim ++;
        total ++;
    }
}//fim da funcao

int retirar()
{
    if(isEmpity() == 1)
        puts("\n\nA fila esta vazia!!\n");
    else
    {
        int elemento = valores[inicio];
        valores[inicio] = NULL;
        inicio ++;
        total --;
        return elemento;
    }
}//fim da funcao

//função que testa se a fila esta vazia - empity Stack
int isEmpity()
{
    if (total == 0)
        return 1;
    else
        return 0;
}//fim da funcao

//função que testa se a pilha esta cheia - stack OverFlow
int isFull()
{
    if(total == 5)
        return 1;
    else
        return 0;
}//fim da funcao


