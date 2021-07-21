/*
	Name: ProvaExercicio3_2
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
typedef struct paciente{
    char nome[20];
    int rg;
	int telefone;
	char email[30];
    char insta[10];
} paciente;


main()
{
	//variaveis locais

	paciente x, y, w;                 // definindo X e Y cada um como um registro da struct pessoa
    paciente *vetPaciente[3];          // declaração de vetor para ponteiro tipo pessoa(Struct)

    //Registrando pessoa X
    puts("--------------------------------");
    printf("Digite os dados do paciente(X)\n");
    printf("Nome: ");
    gets(x.nome);                  // gets suar sempre que houver espaço na string
    printf("RG: ");
    scanf("%d", &x.rg);
    printf("Telefone: ");
    scanf("%d", &x.telefone);
    printf("Email: ");
    scanf("%s", &x.email);
    printf("Instagran: ");
    scanf("%s", &x.insta);
	puts("--------------------------------");
	
    //Registrando pessoa Y
    puts("--------------------------------");
    printf("Digite os dados do paciente(Y)\n");
    printf("Nome: ");
    scanf("%s",&y.nome);                  // gets suar sempre que houver espaço na string
    printf("RG: ");
    scanf("%d", &y.rg);
    printf("Telefone: ");
    scanf("%d", &y.telefone);
    printf("Email: ");
    scanf("%s", &y.email);
    printf("Instagran: ");
    scanf("%s", &y.insta);
	puts("--------------------------------");
	
    //Registrando pessoa w
    puts("--------------------------------");
    printf("Digite os dados do paciente(W)\n");
    printf("Nome: ");
    scanf("%s",&w.nome);                  // gets suar sempre que houver espaço na string
    printf("RG: ");
    scanf("%d", &w.rg);
    printf("Telefone: ");
    scanf("%d", &w.telefone);
    printf("Email: ");
    scanf("%s", &w.email);
    printf("Instagran: ");
    scanf("%s", &w.insta);
	puts("--------------------------------");
    
    puts("\n");

    //Exibindo registro dsa pessoa X
    puts("===============================================");
    puts("Dados do paciente(X)");
    printf("Nome: %s\n", x.nome);
    printf("\tRG: %d\n", x.rg);
    printf("\tTelefone: %d\n", x.telefone);
    printf("\tEmail: %d\n", x.email);
    printf("\tInstagran: %d\n", x.insta);
    puts("===============================================");

    //Imprimindo registro da pessoa Y
    puts("===============================================");
    puts("Dados do paciente(Y)");
    printf("Nome: %s\n", y.nome);
    printf("\tRG: %d\n", y.rg);
    printf("\tTelefone: %d\n", y.telefone);
    printf("\tEmail: %d\n", y.email);
    printf("\tInstagran: %d\n", y.insta);
    puts("===============================================");

    //Imprimindo registro da pessoa w
    puts("===============================================");
    puts("Dados do paciente(W)");
    printf("Nome: %s\n", w.nome);
    printf("\tRG: %d\n", w.rg);
    printf("\tTelefone: %d\n", w.telefone);
    printf("\tEmail: %d\n", w.email);
    printf("\tInstagran: %d\n", w.insta);
 	puts("===============================================");
 	
    //imprimindo endereço de X e Y
    printf("\n\nEndereco do X na memoria: %p", &x);
    printf("\nEndereco do Y na memoria: %p", &y);
    printf("\nEndereco do W na memoria: %p", &w);

    // Carregando vetor com endereços de X e Y
    vetPaciente[0] = &x;
    vetPaciente[1] = &y;
    vetPaciente[2] = &w;

    puts(" ");

    // Imprimindo vetor de pessoas: Endereço de X, Y e W, endereço das posições 0 e 1 do vetor, conteudo da struct pessoa
    for(int i =0; i<3; i++){
        printf("\n%p, ", vetPaciente[i]);
        printf("%p, ", &vetPaciente[i]);
        printf("%s, ", vetPaciente[i] -> nome);
        printf("%d, ", vetPaciente[i] -> rg);
        printf("%d, ", vetPaciente[i] -> telefone);
        printf("%d, ", vetPaciente[i] -> email);
        printf("%d, ", vetPaciente[i] -> insta);
    }
}
