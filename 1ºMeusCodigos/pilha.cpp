/*
	Name: Pilha.cpp
	Author: Adilson Luz (Chacal)
	Date: 30/09/2020 9:09
	Description: Criação e manipulação de pilha - L I F O (Last in First Out) em linguagem C
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;	//para usar COUT e CIN do C++

//Sessão de Prototipação
void push(char);                       //função para inserir um elemento na pilha
char pop();                            //tira um elemento da pilha
int isEmpity();                        //testa se a pilha vazia
int isFull();                          //testa se a pilha cheia
char isTop();                          //testa ultimo elemento da pilha, o topo

//variavel global
char pilha[5];
int topo = -1;                         //posição invalida no vetor

main()
{
    //Realizando operação de empilhamento (PUSH)
    push('G');
    push('F');
    push('E');
    push('D');
    push('C');
    push('B');
    push('A');
  

    //realizando a operação de desempilhar os elementos (POP)
    while(isEmpity() == 0)
    {
        char elemento = pop();
        printf("\nDesempilhei %c", elemento);
    }

    char elemento = pop();
    elemento = pop();


}//fim do programa

//Função que insere um elemento na pilha
void push(char elem )
{
    if(isFull() == 1)
    puts("\t========> Stack OverFlow - Estouro da pilha!!!");
    else
    {
    topo ++;
    pilha[topo] = elem;
    }
}

//função que retira um elemento na pilha
char pop()
{
    if(isEmpity() == 1)
    puts("\t=========> Empity Stack - pilha vazia");
    char elem;
    elem = pilha[topo];
    topo --;
    return elem;


}

//função que testa se a pilha esta vazia - empity Stack
int isEmpity()
{
    if(topo == -1)
        return 1;
    else
        return 0;
}

//função que testa se a pilha esta cheia - stack OverFlow
int isFull()
{
    if(topo == 4)
        return 1;
    else
         return 0;
}

//verifica qual o ultimo elemento d pilha
char isTop()
{
    return pilha[topo];
}


