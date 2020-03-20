#include <stdio.h>
#include <conio.h> 

int	cont = 0;

int fibonacci(int num)
{
	printf("[%d]\t", ++cont);
	
	if(num==1 || num==2)
       return 1;
	else
       return fibonacci(num-1) + fibonacci(num-2); 
}

main()
{
   int n,i;
   printf("Digite a quantidade de termos da sequência de Fibonacci: ");
   scanf("%d", &n);
   printf("\nA sequência de Fibonacci e: \n");
   for(i=0; i<n; i++)
       printf("\n%d\n", fibonacci(i+1));
} 


