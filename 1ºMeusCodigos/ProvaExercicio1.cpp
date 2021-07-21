/*
	Name: Junkebox.cpp
	Author: Adilson Luz(chacal)
	Date: 14/10/20 08:40
	Description: Programa em formato de pilha para controlar uma junkebox
*/



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>



//Sessão de Prototipação
void push(char);                       //função para inserir um elemento na pilha
char pop();                            //tira um elemento da pilha
int isEmpity();                        //testa se a pilha vazia
int isFull();                          //testa se a pilha cheia
char isTop();                          //testa ultimo elemento da pilha, o topo
     

//variavel global
int pilha[10];
int topo = -1;                         //posição invalida no vetor

main()
{

char elemento;

printf("\n\n\t**********Bem vindo a JunkeBox**********\n\n");
printf("A - Aguas de marco, de Tom Jobim\n"
       "B - Metamorfose ambulante, de Raul Seixas\n"
       "C - Drao, de Gilberto Gil\n"
       "D - Como nossos pais, de Belchior\n"
       "E - Alegria, alegria, de Caetano Veloso\n"
       "F - Misterio do planeta, dos Novos Baianos\n"
       "G - Construcao, de Chico Buarque\n"
       "H - Chao de giz, de Ze Ramalho\n"
       "I - Era uma vez, Kell Smith\n"
       "J - Nos dois, Angelo paes Leme\n"
       "K - Trem Bala, Ana Vilila\n"
       "L - Por onde andei, Nando Reis\n"
       "M - Dez minutos, Ana Carolina\n");
printf("\n\n\tEscolha a ordem de suas musicas: \n\n");

    //Realizando operação de empilhamento (PUSH)
  while(topo < 9)
    {
        elemento = ' ';
        scanf("%s", &elemento);
        push(elemento);
    }
    printf("\nSua sequencia escolhida foi: ");
    for(int i=0;i<10;i++)
    {
        printf("%c, ", pilha[i]);
    }
    puts(" ");
  

    //realizando a operação de desempilhar os elementos (POP)
    while(isEmpity() == 0)
    {
        char elemento = pop();
        printf("\nA proxima musica a tocar e: %c", elemento);
    }

    elemento = pop();
    elemento = pop();


}//fim do programa

//Função que insere um elemento na pilha
void push(char elem )
{
    if(isFull() == 1)
    puts("\t========> Junkebox cheia!!!");
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
    puts("\t===>Junkebox Vazia");
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
    if(topo == 9)
        return 1;
    else
         return 0;
}

//verifica qual o ultimo elemento d pilha
char isTop()
{
    return pilha[topo];
}



