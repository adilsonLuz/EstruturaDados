#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<locale.h>
#define TAM 10

using namespace std;

//sess�o de prototipa��o
void imprimirVetor(int []);
bool pilhaVazia(int);
bool pilhaCheia(int);
int pilhaTamanho(int);
int pilhaGet(int [], int*);
void empilharPush(int [], int, int*);
void desempilharPop(int [], int*);
void pilhaConstrutor(int [], int*);

int main(){

    setlocale(LC_ALL,"Portuguese");

    int pilha[TAM];
    int topo;         //define topo da pilha

	pilhaConstrutor(pilha, &topo);
    //memset(pilha, 0, sizeof(pilha));

   	imprimirVetor(pilha);
	printf("Pilha vazia\n");

    empilharPush(pilha, 5, &topo);
    empilharPush(pilha, 7, &topo);
    empilharPush(pilha, 6, &topo);
    empilharPush(pilha, 4, &topo);
	imprimirVetor(pilha);
    printf("O ultimo valor da pilha e: %d\n", pilhaGet(pilha, &topo));    
    empilharPush(pilha, 8, &topo);
    empilharPush(pilha, 9, &topo);
    empilharPush(pilha, 3, &topo);
    empilharPush(pilha, 1, &topo);
    empilharPush(pilha, 2, &topo);
    empilharPush(pilha, 5, &topo);
    imprimirVetor(pilha);
    printf("O ultimo valor da pilha e: %d\n", pilhaGet(pilha, &topo)); 
    
    imprimirVetor(pilha); 
    printf("vetor depois de empilhar\n");
	    
    desempilharPop(pilha, &topo);
	imprimirVetor(pilha);
    printf("vetor depois de desempilhar");
	
    desempilharPop(pilha, &topo);
	imprimirVetor(pilha);
    printf("vetor depois de desempilhar");
	
}



//Sess�o de fun�es
void imprimirVetor(int vet[TAM]){
    puts(" ");
    for(int i=0;i<TAM;i++){
        printf(" |%d| ",vet[i]);
    }
    puts(" ");
}


bool pilhaVazia(int topo){
	
	if(topo == -1){
		return true;
	}else{
		return false;
	}
}


bool pilhaCheia(int topo){
	
	if(topo == TAM -1){
		return true;
	}else{
		return false;
	}
}


int pilhaTamanho(int topo){
	
	return topo +1;
}


int pilhaGet(int pilha[TAM], int *topo){
	
	//Retorna ultimo valor da pilha
	if(pilhaVazia(*topo)){
		printf("A pilha est� vazia");
		return 0;
	}else{
		return pilha[*topo];
	}
}


void empilharPush(int vt[TAM], int valor, int *topo){

//caso n�o possa colocar mais valores
    if(pilhaCheia(*topo)){
        printf("\nA pilha est� cheia!\n");
    }else{
        *topo = *topo +1;
        vt[*topo] = valor;
    }
}


void desempilharPop(int vt[TAM], int *topo){
	
	//
	if(pilhaVazia(*topo)){
		printf("A pilha j� est� vazia");
	}else{
		printf("\nValor removido %d\n", vt[*topo]);
		vt[*topo] = 0;
		*topo = *topo -1;
	}
	
}


void pilhaConstrutor(int pilha[TAM], int *topo){
	
	*topo = -1;						//Topo negativo indica pilha vazia
	for(int i = 0;i < TAM; i++){	//percorre vetor
		pilha[i] = 0;				//colocando 0 em todas posi��es do vetor
	}
}
