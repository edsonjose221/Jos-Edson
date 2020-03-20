// loop de 0 até 15 fazendo o calculo valor = valor * 3 e
// imprimindo cada calculo
// 3 elevado a x = y
#include  <stdio.h>
#include  <stdlib.h>

int	main(){
	
	int	i,valor = 1;
	
	printf("3 elevado a 0 = 1\n");
	
	for (i = 1; i <= 15; i++)
	{
		valor = valor * 3;
		printf("3 elevado a %d = %d\n", i, valor);		
	}	
}
