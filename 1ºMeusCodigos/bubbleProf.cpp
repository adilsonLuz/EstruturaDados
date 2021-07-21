/*

 * Nome .: BubbleSort.cpp

 * Author: Alunos Fatec SPB

 * Data .: 28 de outubro de 2020

 * Descrição: Programa para demonstrar o algoritmo de ordenação BUBBLE SORT (Método da bolha)

 */



#include <stdio.h>

 #include <conio.h>



//Prototipação

 void bubbleSort(int *, int);



int main()

 {

 int i, tamanho;

 int vet[] = {73, 14, 7, 45, -5, 3, 34, -20, 65, 201, 53, -78, 2, 91};

 tamanho = sizeof(vet)/sizeof(int);

 bubbleSort(vet, tamanho);


 puts("\n\nAlgoritmo da Bolha - Bubble Sort:");

 for(i = 0; i < tamanho; i++)

 printf("%d, ", vet[i]);


 }//fim do Programa



void bubbleSort(int vetor[], int tam)

 {

 int k, j, aux;


 for(k = 1; k < tam; k++)

 {

 printf("\n[%d] ", k);

 for(j = 0; j < tam - k; j++)

 {

 printf("%d, ", j);

 if(vetor[j] > vetor[j+1])

 {

 aux = vetor[j];

 vetor[j] = vetor[j+1];

 vetor[j+1] = aux;
 
 }
 
 }

 }


 }//fim da função bubble
