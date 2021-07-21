/*
	Name: Lanchonete.cpp
	Author: Adilson Luz(Chacal)
	Date: 14/10/20 08:40
	Description: Programa que organiza FILA de uma lanchonete e entrega dos pedidos
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
int pedido[10];

main()

{
    int senha = 10;

    printf("\n\n\t************  Seja bem vindo a Lanchonete X-BURGAO  ************\n\n");

    retirar();

    printf("\tRetire sua senha e clique ENTER para fazer seu pedido!!!\n");
    
    while(fim < 10)
    {
        inserir(senha);
        ++senha ;
    }
    
    for(int i=0;i<10;i++)
    {
      
        getch();
        printf("Seu pedido foi feito e sua senha e: %d\n", pedido[i]);
        printf("\tRetire sua senha e clique ENTER para fazer seu pedido!!!\n");
    }    
        
       
    inserir(senha);
    puts("\n");

    for(int i=0;i<10;i++)
    {
        printf("O Pedido %d foi encaminhado para cozinha\n", pedido[i]);
    }

    puts("\n");
    
    while(isEmpity() == 0)
        {
            int x = retirar();
            printf("Pedido %d concluido!!!\n", x);
        }
    

     

   
    

}//fim do programa

void inserir( int elem)
{
    if(isFull() == 1)
        puts("\nFila esta cheia!!!");
    else   
    {
        pedido[fim] = elem;
        fim ++;
        total ++;
    }
}

int retirar()
{
    if(isEmpity() == 1)
        puts("\n\nA fila esta vazia!!\n");
    else
    {
        int elemento = pedido[inicio];
        pedido[inicio] = NULL;
        inicio ++;
        total --;
        return elemento;
    }
}

//função que testa se a fila esta vazia - empity Stack
int isEmpity()
{
    if (total == 0)
        return 1;
    else
        return 0;
}

//função que testa se a pilha esta cheia - stack OverFlow
int isFull()
{
    if(total == 10)
        return 1;
    else
        return 0;
}

