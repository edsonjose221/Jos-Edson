#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <locale.h>

struct dados{
	
	char nome[20];
	int idade;
	char cidade [20];
	char curso[50];
	
}Info;

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite seu nome:\n");
	fflush(stdin);
	fgets(Info.nome, 20, stdin);
	
	printf("Digite sua cidade:\n");
	fflush(stdin);
	fgets(Info.cidade, 20, stdin);
	
	printf("Digite o curso:\n");
	fflush(stdin);
	fgets(Info.curso, 20, stdin);
	
	printf("Digite a sua idade:\n");
	scanf("%d", &Info.idade);
	
	printf("Seu nome eh: %s \n", Info.nome);
	printf("Sua cidade eh: %s \n", Info.cidade);
	printf("Seu curso eh: %s \n", Info.curso);
	printf("Sua idade eh: %d \n", Info.idade);
		
	return 0;
}
