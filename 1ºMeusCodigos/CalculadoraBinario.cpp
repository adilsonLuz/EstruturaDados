/*
	Name: calculadoraBinarioBaseDez.cpp
	Author: Adilson Luz (Chacal)
	Date: 30/09/2020 10:44
	Description: Programa que faz conversão para binario - L I F O (Last in First Out) em linguagem C
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;	//para usar COUT e CIN do C++

//Sessão de Prototipação
void push(int);                       //função para inserir um elemento na pilha
int pop();                            //tira um elemento da pilha
int isEmpity();                       //testa se a pilha vazia
int isFull();                         //testa se a pilha cheia
int isTop();                          //testa ultimo elemento da pilha, o topo

//variavel global
int binario[20];
int topo = -1;                         //posição invalida no vetor

main()
{
    int numBaseDez = 0;
    int quoc, resto;
    quoc = resto = 0;

    printf("Digite um numero na base 10: ");
    scanf("%d", &numBaseDez);

    while(numBaseDez >= 2)
    {
        quoc = numBaseDez / 2;
        resto = numBaseDez - (quoc * 2);
        //Realizando a operação de empilhamento dos elementos (PUSH)
        push(resto);
        numBaseDez = quoc;
    }
    push(numBaseDez);
  

    //realizando a operação de desempilhar os elementos (POP)
    puts("Binario Equivalente: ");
    while(isEmpity() == 0)
    {
        int elemento = pop();
        printf("%d", elemento);
    }

    //int elemento = pop();
    
}//fim do programa

//Função que insere um elemento na pilha
void push(int elem )
{
    if(isFull() == 1)
    puts("\t========> Stack OverFlow - Estouro da pilha!!!");
    else
    {
    topo ++;
    binario[topo] = elem;
    }
}

//função que retira um elemento na pilha
int pop()
{
    if(isEmpity() == 1)
    puts("\t=========> Empity Stack - pilha vazia");
    int elem;
    elem = binario[topo];
    topo --;
    return elem;


}

//função que testa se a pilha esta vazia - empity Stack
int isEmpity()
{
    return (topo == -1) ? 1:0;
}

//função que testa se a pilha esta cheia - stack OverFlow
int isFull()
{
    return (topo == 19) ? 1:0;
}

//verifica qual o ultimo elemento d pilha
int isTop()
{
    return binario[topo];
}

