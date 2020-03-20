// base elevado a expoente
// loop expoente vezes fazendo o calculo valor = valor * base

#include <stdio.h>
#include <stdlib.h>

int	main() {
	
	int	base, expoente, valor = 1, i;
	
	// entrada de dados para captar base e expoente
	printf("Informe o valor da base e do expoente\n");
	
	scanf ("%d %d", &base, &expoente);
	
	for (i = 0; i < expoente; i++)
	{
		valor = valor * base;		
	}
	
	printf("%d elevado a %d = %d", base, expoente, valor);
}
