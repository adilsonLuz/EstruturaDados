#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 3

//Sessão de prototipação
void imprimirSequencial(int *, int);
int* alocarVetor(int);




int main(){

    setlocale(LC_ALL,"Portuguese");
    
    //Variaveis locais
    int vetor[TAM] = {1,2,3}, i, tamanhoDaLista;

    //Imprimindo Vetor
    for(i = 0; i < TAM; i++){
        printf("\nPosição %d, valor %d", i, vetor[i]);
    }
    //Invoke
    imprimirSequencial(vetor, 3);

    printf("\nDigite novos valores para o vetor\n");

    //Lendo novos valores e salvando no vetor
    for(i = 0; i < TAM; i++){
        scanf("%d", &vetor[i]);
    }

    //Invoke imprimindo novos valores
    imprimirSequencial(vetor, 3);

    //Pedindo para usuario informar o tamanho do seu novo vetor
    printf("\nDigite o tamanho do novo vetor: ");
    scanf("%d", &tamanhoDaLista);

    //Declaração do novo vetor
    int *vetorLidoNaHora;

    //Novo vetor recebendo invoke do tamanho escolhido pelo usuario
    vetorLidoNaHora = alocarVetor(tamanhoDaLista);

    //Lendo valores e salvando no novo vetor
    for(i = 0; i < tamanhoDaLista; i++){
        printf("Digite o %dº valor: ", i+1);
        scanf("%d", &vetorLidoNaHora[i]);
    }

    //Invoke imprimindo novos valores
    imprimirSequencial(vetorLidoNaHora, tamanhoDaLista);

    return 0;
}


 void imprimirSequencial(int *vt, int tamanhoListaSequencial){

     int i;

        puts(" ");
        for(i = 0; i < tamanhoListaSequencial; i++){
            printf("\nValor %d: |%d| ", i, vt[i]);
        }
        puts(" ");
    }


int* alocarVetor(int tam){

    int *v;

    v = (int*) malloc(tam * sizeof(int)); 

    return v;  
}






