#include <stdio.h>
#include <iostream>
#include <new>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;// para utilizar cout/cin

//Sess�o de prototipa��o
void imprimirVetor(int vetor[TAM]);
int buscarSimples(int [], int , int* );

main()
{
    //variaveis
    int vet[TAM] = {1,25,44,56,63,72,84,90,98};
    int valorProcurado;
    int Posicao, posicaoEncontrada;

    //Invoke
    imprimirVetor(vet);

    printf("\nQual valor deseja encontrar?\n");
    scanf("%d", &valorProcurado);//le opcao do usuario

    //Invoke
    if(buscarSimples(vet, valorProcurado, &posicaoEncontrada)){
        printf("\nO valor foi encontrado na posicao %d\n", posicaoEncontrada);
    }
    else{
        printf("\nValor nao encontrado\n");
    }


return 0;
}


//Sess�o de fun�es
void imprimirVetor(int vet[TAM]){
    for(int i=0;i<TAM;i++){
        printf("%d - ",vet[i]);
    }
    puts(" ");
}

int buscarSimples(int vt[TAM], int valorProcurado, int *posicaoEncontrada){

    //verifica se o valor foi encontrado
    bool valorFoiEncontrado;

    //percorre a lista em busca do valor
    for(int i = 0; i < TAM; i++){
        if(vt[i] == valorProcurado){//condicao para comparar valores
            valorFoiEncontrado = true;//variavel recebe verdadeiro
            *posicaoEncontrada = i;//ponteiro recebe o valor da posicao
        }
    }

    if(valorFoiEncontrado){
        return 1;//se valor for encontrado recebe verdadeiro
    }
    else{
        return 0;//se valor nao for encontrado recebe falso
    }
}


