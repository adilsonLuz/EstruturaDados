/*
	Name: 
	Author: Adilson Luz (Chacal)
	Date: 02/12/2020
	Description: 
*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<math.h>

//Sessao de Prototipacao
void bubbleSort(int *, int);
void imprimirVetor(int*, int);
//variavel global
int *count;

main()
{
	int tam;
	int vet[] = {-7,146,148,239,219,11,66,264,114,58,222,84,234,67,-14,103,259,73,143,151,272,
				 232,-5,119,176,253,139,273,112,-9,21,15,256,266,22,46,254,113,185,37,60,-4,153,
  				 4,124,137,-8,13,99,249,33,243,150,106,187,244,165,233,145,223,0,216,202,125,265,
				 225,144,102,174,135,1,2,127,92,96,224,175,8,192,64,170,214,196,141,59,24,131,194,
				 142,136,118,180,152,269,31,238,85,57,258,250,83,5,65,205,188,43,183,173,210,44,
				 -11,237,195,133,72,126,197,34,236,-21,-6,262,270,63,91,230,104,12,169,7,81,184,
				 41,98,193,158,154,62,49,263,168,108,177,115,275,-16,79,162,107,246,32,16,3,240,
				 161,134,50,163,166,201,27,90,227,231,25,260,123,215,19,97,156,89,171,6,38,-22,47,
				 149,74,261,200,88,-25,241,204,93,129,-24,245,87,159,247,242,160,209,23,70,117,274,
				 -10,248,53,18,182,147,268,80,-1,221,-13,39,36,-20,220,199,186,252,28,56,90,105,
				 9,52,178,157,213,14,55,61,69,-19,110,-18, 17,203,228,26,212,78,75,51,122,-2,229,
				 101,77,116,95,198,-17,138,211,208,86,179,30,181,189,76,128,140,218,271,68,82,255,
				 48,10,-23,15,155,191,40,42,120,206,94,164,132,-3,172,257,121,-12,20,130,45,226,
				 54,217,109,235,167,251,71,267,35,207,29,100,};

	tam = sizeof(vet) / sizeof(int);	//uso da função sizeof para calcular o tamanho do vetor de inteiros

	puts("Vetor desordenado: ");
    imprimirVetor(vet, tam);

    bubbleSort(vet, tam);

    puts("Vetor ORDENADO: ");
    imprimirVetor(vet, tam);

}//Fim do Programa


//Sessao de Funcoes

void imprimirVetor(int vt[], int tam)

{
    puts(" ");
    for(int i = 0; i < tam; i++)
    {
        printf("| %d |", vt[i]);
    }
    puts(" ");
}//fim da funcao


void bubbleSort(int numeros[], int TAMANHO)
{
    int contador, cont, aux, i;
    for (contador = 1; contador < TAMANHO; contador++) 
	{
		for (i = 0; i < TAMANHO - 1; i++) 
		{
     		if (numeros[i] > numeros[i + 1]) 
			{
       			cont++;
				aux = numeros[i];
       			numeros[i] = numeros[i + 1];
       			numeros[i + 1] = aux;
    		}//fim do if
   		}//fim do for
 	}//fim do for
     printf("Total de passos: %d " ,cont);
}//fim do bubble