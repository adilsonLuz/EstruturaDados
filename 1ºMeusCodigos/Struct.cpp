/*
	Name: Struct
	Author: Adilson Luz (Chacal)
	Date: 16/09/2020 9:00
	Description: Criação e manipulação de estuturas em linguagem C
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>

using namespace std;	//para usar COUT e CIN do C++

// Sessão de prototipação
void flush_in();

//sessão de declaração de estruturas
typedef struct pessoa{
    char nome[20];
    int idade;
    float altura;
} pessoa;


main()
{
	//variaveis locais

	pessoa x, y, w;                 // definindo X e Y cada um como um registro da struct pessoa
    pessoa *vetPessoas[3];          // declaração de vetor para ponteiro tipo pessoa(Struct)

    //Registrando pessoa X
    puts("--------------------------------");
    printf("Digite os dados de uma pessoa(X)\n");
    printf("Nome: ");
    gets(x.nome);                  // gets suar sempre que houver espaço na string
    printf("Idade: ");
    scanf("%d", &x.idade);
    printf("Altura: ");
    scanf("%f", &x.altura);
	puts("--------------------------------");
	
    //Registrando pessoa Y
    printf("Digite os dados de uma pessoa(Y)\n");
    printf("Nome: ");
    scanf("%s", &y.nome);                  // gets suar sempre que houver espaço na string
    printf("Idade: ");
    scanf("%d", &y.idade);
    printf("Altura: ");
    scanf("%f", &y.altura);
	puts("--------------------------------");
	
    //Registrando pessoa w
    printf("Digite os dados de uma pessoa(W)\n");
    printf("Nome: ");
    scanf("%s", &w.nome);                  // gets suar sempre que houver espaço na string
    printf("Idade: ");
    scanf("%d", &w.idade);
    printf("Altura: ");
    scanf("%f", &w.altura);
    
    puts("\n");

    //Exibindo registro dsa pessoa X
    puts("===============================================");
    puts("Dados da pessoa(X)");
    printf("Nome: %s", x.nome);
    printf("\tIdade: %d", x.idade);
    printf("\tAltura: %.2f\n", x.altura);
    puts("===============================================");

    //Imprimindo registro da pessoa Y
    puts("===============================================");
    puts("Dados da pessoa(Y)");
    printf("Nome: %s", y.nome);
    printf("\tIdade: %d", y.idade);
    printf("\tAltura: %.2f\n", y.altura);
    puts("===============================================");

    //Imprimindo registro da pessoa w
    puts("===============================================");
    puts("Dados da pessoa(W)");
    printf("Nome: %s", w.nome);
    printf("\tIdade: %d", w.idade);
    printf("\tAltura: %.2f\n", w.altura);
 	puts("===============================================");
 	
    //imprimindo endereço de X e Y
    printf("\n\nEndereco do X na memoria: %p", &x);
    printf("\nEndereco do Y na memoria: %p", &y);
    printf("\nEndereco do W na memoria: %p", &w);

    // Carregando vetor com endereços de X e Y
    vetPessoas[0] = &x;
    vetPessoas[1] = &y;
    vetPessoas[2] = &w;

    puts(" ");

    // Imprimindo vetor de pessoas: Endereço de X, Y e W, endereço das posições 0 e 1 do vetor, conteudo da struct pessoa
    for(int i =0; i<3; i++){
        printf("\n%p, ", vetPessoas[i]);
        printf("%p, ", &vetPessoas[i]);
        printf("%s, ", vetPessoas[i] -> nome);
        printf("%d, ", vetPessoas[i] -> idade);
        printf("%.2f, ", vetPessoas[i] -> altura);
    }

}

