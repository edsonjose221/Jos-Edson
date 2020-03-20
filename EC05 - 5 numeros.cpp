#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int	main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int	i, vetor[5], maior, menor, n;
	
	// loop para pegar os números e guardar
	for (i = 0; i < 5; i++)
	{
		printf("Digite um número inteiro positivo\n");
		scanf("%d", &n);
		vetor[i] = n;
	}
	// loop  para percorrer o vetor, mostrar o numero
	i = 0;
	maior = menor = vetor[i];
	printf("o valor em vet[%d] é %d\n", i, vetor[i]);
	for (i = 1; i < 5; i++)
	{
		printf("o valor em vet[%d] é %d\n", i, vetor[i]);
		
		if (vetor[i] > maior)
			maior = vetor[i];
		else if (vetor[i] < menor)
			menor = vetor[i];
	}
		// descobrir o maior e o menor
		printf("\nMaior = [%d] \nMenor = [%d]\n", maior, menor);
		
	return 0;
}
