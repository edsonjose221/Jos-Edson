#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

typedef struct elementos {
	char nome[50];
	char telefone [50];	
} contato;
	
typedef struct lista {
	contato contatos[MAX];
	int ultimo_contato;
} Lista;

Lista criar(){
	Lista l;
	l.ultimo_contato = -1;
	
	return l;
}

int isVazia (Lista * l){
	return(lista->n == -1);
}

int isCheia(Lista * l){
	return(lista->n == (MAX - 1));
	
}

int getTamanho (Lista * l){
	return l->ultimo_contato + 1;
}

contato * getElemento (Lista * l, int pos){
	if ((pos > l -> ultimo_contato) || (pos < 0))
		return Null;
	return &(l->contatos[pos])
}

int main(){
	
	Lista listasequencial = criar();
	
	 if(isVazia(&listasequencial))
	 	printf("A lista esta vazia \n");
	 	
	if (isCheia(&listasequencial));
		printf("A lista esta cheia \n");
	
	printf("A lista tem %d contatos\n");
		getTamanho(&listasequencial);
		
	printf("O elemento que esta na posicao 0 e: %s \n",
	(getElemento(&listasequencial, 0)->nome));	
}


