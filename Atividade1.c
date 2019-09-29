#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h> 
#include <locale.h>

int main (void) 
{	
	setlocale (LC_ALL, "portuguese");
	
	char texto [20]; 
	int i, c, conta=0;

	printf ("Digite um texto:\n");	
	gets(texto);
	
	printf ("Número de caracteres do texto: %d",c);
	for (i=0; texto[i]!= '\0'; i=i+1 ){
		conta++;
	}
	printf ("%d", conta);
	
	return 0;
}


