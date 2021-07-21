#include<iostream>
#include<stdio.h>
#include<new>
#include<string.h>
#include<stdlib.h>
#include<locale.h>
#define TAM 10

using namespace std;

//sessão de prototipação
void limparTela();
void imprimirVetor(int[]);

//variaveis globais


int main(){

    //variaveis
    int funcaoDesejada = 1;

    setlocale(LC_ALL,"Portuguese");

    while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //mostrando o menu
        cout << "\tOperacoes \n";
        cout << "1 - Inserção de um node no inicio da lista \n";
        cout << "2 - Inserção de um node no fim da lista \n";
        cout << "3 - Inserção de um node na posição N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posição N \n";
        cout << "7 - Porcurar um node com campo RG \n";
        cout << "8 - Imprimir a lista. \n";
        cout << "9 - Sair do sistema \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";

        //lendo a opção do usuario
        cin>> funcaoDesejada;

        limparTela();

        //chama a função Desejada
        switch(funcaoDesejada){
            case 1:
                cout << "\nFuncao escolhida 1\n\n";
                break;
            case 2:
                cout << "\nFuncao escolhida 2\n\n";
                break;
            case 3:
                cout << "\nFuncao escolhida 3\n\n";
                break;
            case 4:
                cout << "\nFuncao escolhida 4\n\n";
                break;
            case 5:
                cout << "\nFuncao escolhida 5\n\n";
                break;
            case 6:
                cout << "\nFuncao escolhida 6\n\n";
                break;
            case 7:
                cout << "\nFuncao escolhida 7\n\n";
                break;
            case 8:
                cout << "\nFuncao escolhida 8\n\n";
                break;
            case 9:
                cout << "\nFuncao escolhida 9\n\n";
                break;
        }
    }

return 0;
}

    //sessão de funções
    void limparTela(){
        system("CLS");
    }

    void imprimirVetor(int vt[TAM]){

        puts(" ");
        for(int i = 0; i < TAM; i++){
            printf(" |%d| ", vt[i]);
        }
        puts(" ");
    }