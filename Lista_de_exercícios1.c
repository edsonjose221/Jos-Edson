#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero ,x, n2, num, z, naa, fat, n, num1, i, resultado = 0, b=0, qnt, fb=0, fb2 = 1;
	float n1, mult, nume, potencia, nt1, nt2, nt3, media, nota1, nota2, nota3, media0, nta1, nta2, mdia;
	char numEmHexa [10];
	char nome [128]= "\0";
	
	printf("\t----------MENU DE N�MEROS----------\n"
		"\nDigite 1 para o primeiro programa"
		"\nDigite 2 para o segundo programa"
		"\nDigite 3 para o terceiro programa"
		"\nDigite 4 para o quarto programa"
		"\nDigite 5 para o quinto programa"
		"\nDigite 6 para o sexto programa"
		"\nDigite 7 para o s�timo programa"
		"\nDigite 8 para o oitavo programa"
		"\nDigite 9 para o nono programa"
		"\nDigite 10 para o d�cimo programa"
		"\nDigite 0 para encerrar o programa\n\n\tRESPOSTA: ");
	scanf("%d", &numero);
	
	switch (numero)
	{
		
		case 0:
			printf("\t----------O programa foi encerrado----------");
			return 0;
			
		case 1:
			//fa�a um programa que ler um numero e diga se ele � par ou n�o
			
			printf("\n\t-----PROGRAMA 1-----\nDigite um n�mero: ");//recebe a variavel do usuario
			scanf("%d", &x);//capta e armazena o valor digitado
			
			if(x % 2 == 0){//faz o calculo 
			printf("Esse numero � par!");//informa ao usuario que o numero digitado � par
			}
			else {
			printf("Esse numero n�o � par!");//informa ao usuario se o numero digitado for impa
			}
			break;
	
	
		case 2:
			//Fa�a um programa que leia um n�mero de ponto flutuante A e um inteiro B
			printf("\n\t-----PROGRAMA 2-----\nDigite um n�mero flutuante e um n�mero inteiro:\n");//pede os n�meros ao usuario
			scanf("%f", &n1);//colhe os n�meros
			scanf("%d", &n2);
				
			mult = pow(n1, n2);//faz a potencia��o
				
			if(n1 >= 1  && n2 >=1){//se os numeros forem maior que 1 eles executam o programa	
			printf("O resultado da pot�ncia de %.1f elevado a %d �: %e",n1, n2, mult);
			}
			else{//caso os numeros forem menor que zero exibe essa menssagem
			printf("O valor digitado � incorreto!");
			}
		 	
		break;
		
		case 3:
						
			printf("\n\t-----PROGRAMA 3-----\nDigite um n�mero flutuante A e um n�mero inteiro B:\n");
			scanf("%f %d", &nume, &num);
			
			potencia = pow(nume,num);
			
			printf("O resultado da base %.1f elevado a base %d � %e:", nume, num, potencia);
					
		break;
			
		case 4:	
			printf("\n\t-----PROGRAMA 4-----\nInforme um ano (ex.: 2005): ");
			scanf("%d", &z);
			
			if(z % 4 == 0){
				printf("Esse � um ano bissexto.");
			}
			else{
				printf("Esse n�o � um ano bissexto.");
			}
		break;
						
	 	case 5:
	 		
		   		printf("\n\t-----PROGRAMA 5-----\nInforme sua primeira nota: ");
		        scanf("%f",&nt1);
		        
		        printf("Informe sua segunda nota: ");
		        scanf("%f",&nt2);
		        
		        printf("Informe sua terceira nota: ");
		        scanf("%f",&nt3);
		        
		        media = (nt1 + nt2 + (nt3 * 2));
		        
		     	printf("Voc� obteu %.2f pontos.\n", media);
		     
			    if(media >= 60,0){
		            printf("Voc� foi aprovado\n");
				}
				else {
					printf("Voc� foi reprovado\n");
				}
		break;
		
		case 6:
				printf("\n\t-----PROGRAMA 6-----\nDigite duas notas em um ponto flutuante:\n");
				scanf("%f %f", &nota1, &nota2);
				
				media0 = (nota1+nota2)/2;
				
				if(nota1>=0.0 && nota1<=10.0 && nota2>=0.0 && nota2<=10.0){
					printf("A m�dia das suas notas foi: %.1f", media0);
				}
				else{
					printf("Esse n�o � um valor v�lido.");
				}
		break;
		
		case 7:
			
				scanf ("%d", &n);
				
				for (fat = 1; n > 1; n = n - 1)				
				{
					fat = fat * n;
					
				}
				
				printf ("\n %d",fat);
		break;
		
		case 8:
				
				 printf("Digite um n�mero: ");
				 scanf("%d", &num);
 
 					for (i = 2; i <= num / 2; i++) {
    					if (num % i == 0) {
 	      					resultado++;
       				break;
    			}
			 }
 	
 			if (resultado == 0)
    			printf("%d � um n�mero primo\n", num);
 			
			 else		
    			printf("%d n�o � um n�mero primo\n", num);
 
 		return 0;
				
				break;	
				
		case 9:
		
			
   				 printf("Insira um valor: ");
    			scanf("%d", &qnt);
    			
    			printf("0\b");
    			
 		   while (b<qnt)
    {
        fb= fb+fb2;
        fb2 = fb - fb2;
        printf("%d\b", fb);
        b++;
    }
    	break;
    
    	return 0;
			
		case 10:
			printf("\n\t-----PROGRAMA 10-----\nDigite seu nome: ");
				gets(nome);
				
				printf("\nDigite sua matr�cula: ");
				scanf("%d", &naa);
				sprintf(numEmHexa, "%x", naa);
				
				printf("Seu nome �: %s", nome);
				printf("\nE sua matr�cula em hexadecimal �: %s", numEmHexa);
			
			break;
       } 
}
