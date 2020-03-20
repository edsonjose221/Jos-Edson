    
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

//QUARTO EXERCICIO
int main()
{
    unsigned long long n = 1;
	unsigned long long soma = 1;
    int c = 1;

    printf("[%d]--[%llu]--[%llu]\n", c, n, soma);
	
    for(c = 2; c <= 64; c++){
        n = n * 2;
        soma = soma + n;
        printf("[%d]--[%llu]--[%llu]\n", c, n, soma);
    }

    printf("\n\nULLONG_MAX  :   %llu\n", (unsigned long long) ULLONG_MAX);

    return 0;
}
