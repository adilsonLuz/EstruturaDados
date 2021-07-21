/*
 * Nome: Fila.cpp
 * Author: Alunos Fatec SPB
 * Data: 07 de outubro de 2020
 * Descrição: Programa para demonstrar o conceito da Estrutura de Dados Fila Circular
 */
 
 # include <conio.h>
 # include <stdio.h>
 
 //Prototipação das funções
 void inserir(int);
 int retirar();
 int isEmpty();
 int isFull();
 
 //Variáveis globais
 int inicio, fim, total;
 int valores[5];
     
 int main()
 {
     inicio = 0;
     fim = 0;
     total = 0;
     
     
     inserir(7);
     inserir(33);
     inserir(12);
     inserir(91);
     inserir(10);
     puts("Elementos presentes na Fila: 7, 33, 12, 91, 10");
     inserir(55);
     
     
     printf("Ordem dos elementos retirados da fila: "); //7, 33, 12, 91, 10
     while(isEmpty() == 0)
     {
         int x = retirar();
         printf("%d, ", x);
     }     

     int x = retirar(); //retirar um elemento após a fila estar vazia
     
     puts("Conteudo da fila:");
     int i;
     for(i=0;i<5;i++)
         printf("%d, ", valores[i]);
    
    
 }//fim do programa

void inserir(int elem)
{
    if(isFull() == 1)
       puts("Fila está cheia!!!");
    else
    {
        valores[fim] = elem;
        fim++;
        total++;
    }
}

int retirar()
{
    if(isEmpty() == 1)
       puts("\nA fila está vazia!!");
    else
   {
        int elemento;
        elemento = valores[inicio];
        valores[inicio] = NULL;
        inicio++;
        total--;
        return elemento;
   }
}

int isEmpty()
{
    if (total == 0)
      return 1;
    else
      return 0;
}


int isFull()
{
    if(total == 5)
        return 1;
    else
        return 0;
    
}
