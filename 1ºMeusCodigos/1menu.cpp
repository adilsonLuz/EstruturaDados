#include<iostream>
#include<stdio.h>
#include<new>
#include<string>
#include<stdlib.h>

using namespace std;

//sessa�o de prototipa��o
void limparTela();

//variaveis globais


int main(){

    //variaveis
    int funcaoDesejada = 1;

    while(funcaoDesejada < 10 && funcaoDesejada > 0){

        //mostrando o menu
        cout << "\tOperacoes \n";
        cout << "1 - Insercao de um node no inicio da lista \n";
        cout << "2 - Insercao de um node no fim da lista \n";
        cout << "3 - Insercao de um node na posicao N \n";
        cout << "4 - Retirar um node do inicio da lista \n";
        cout << "5 - Retirar um node no fim da lista \n";
        cout << "6 - Retirar um node na posicao N \n";
        cout << "7 - Porcurar um node com campo RG \n";
        cout << "8 - Imprimir a lista. \n";
        cout << "9 - Sair do sistema \n";
        cout << "\nEscolha um numero e pressione ENTER: \n";

        //lendo a opcao do usuario
        cin>> funcaoDesejada;

        limparTela();

        //chama a funcaoDesejada
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
                cout << "\nFuncao escolhida 9, SAIR\n\n";
                exit(0);
                break;
        }
    }

return 0;
}

    //sess�o de fun��es
    void limparTela(){
        system("CLS");
    }

