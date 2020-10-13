//Faça um algoritmo para ler e escrever o Nome, idade e sexo de 90000
//estudantes.Ao final escreva o total de alunos lidos.O final da leitura
//acontecerá quando for lido o valor zero.



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <ctype.h>
#include <stdbool.h>

int idade, i;
char sexo, nome[30];
bool valorzero;


int main() {
	for (i = 0; i < 90000; i++) 
	{
		printf("\nDigite seu nome: ");
		scanf_s("%[^\n]s", &nome, 30);
		(void)getchar();
		printf("\nDigite seu sexo F ou M: ");
		scanf_s("%c", &sexo, 1);
		sexo = toupper(sexo);
		(void)getchar();
		printf("\nDigite sua idade: ");
		scanf_s("%i", &idade);
		(void)getchar();

		if (idade <= 0) {
			printf("\nValor zero lido");
			valorzero = true;
			return 0;
		}


	}

	printf("\nTotal de pessoas lidas e: %i", i);


}
