import java.util.Scanner;
import java.util.*;

public class Principal {

	public static void main(String[] args) {
		Random random = new Random(); 
		Scanner teclado = new Scanner (System.in);
		System.out.println("--------- MENU DE ATIVIDADES---------\n");
		int op;
			
		System.out.println("----------ESCOLHA UM PROGRAMA---------\n");
		System.out.println("-----------DIGITE UM NÚMERO------------\n"
				+ "1.PRIMEIRO PROGRAMA\n"
				+ "2.SEGUNDO PROGRAMA \n"
				+ "3.TERCEIRO PROGRAMA \n"
				+ "4.QUARTO PROGRAMA \n"
				+ "5.QUINTO PROGRAMA \n"
				+ "6.SEXTO PROGRAMA \n"
				+ "7.SÉTIMO PROGRAMA \n");
		op = teclado.nextInt();
		
		switch(op) {
		case 1: 
			int gol1, gol2;
			
			System.out.println("Digite o número de gols marcados pelos dois times:\n");
			gol1 = teclado.nextInt();
			gol2 = teclado.nextInt();
			
			if(gol1 > gol2) {
				System.out.println("O Treze venceu!!!");
			}
			if(gol2 > gol1) {
				System.out.println("O Nacional venceu!!!");
			}else if (gol1 == gol2) {
				System.out.println("Empate!");
			}
		    break;
		
		case 2:
			int senha;
			
			System.out.println("Digite uma senha!");
			senha = teclado.nextInt();
			
			if(senha == 123456) {
				System.out.println("Acesso Liberado!");
			}else {
				System.out.println("Acesso Negado!");
			}
			
		    break;
		case 3:
			int num;
			
			System.out.println("Digite um número:");
			num = teclado.nextInt();
			
			switch (num) {	
			case 1:
				System.out.println("DOMINGO");
				break;
				
			case 2:
				System.out.println("SEGUNDA");
				break;
			
			case 3:
				System.out.println("TERÇA");
				break;
				
			case 4:
				System.out.println("QUARTA");
				break;
					
			case 5:
				System.out.println("QUINTA");
				break;
				
			case 6:
				System.out.println("SEXTA");
				break;
				
			case 7:
				System.out.println("SÁBADO");
				break;
			
			default:
				System.out.println("Dia da semana inexistente:");
				break;
			}
			
		case 4:
			int a, b, c, soma;
			
			System.out.println("Digite o primeiro valor:\n\n");
			a = teclado.nextInt();
			
			System.out.println("Digite o segundo valor:\n");
			b = teclado.nextInt();
			
			System.out.println("Digite o terceiro valor:\n");
			c = teclado.nextInt();
			
			soma = a + b;
			
			if (soma < c) {
				System.out.println("A soma de a e b é menor que c:");
			}else {
				System.out.println("Operação inválida:");
			}
			
			
		case 5:
			
			int n = random.nextInt(60);
			System.out.println(n);
			break;
		
		case 6:
			int i;
			
			for (i = 0; i <= 20; i++) {
				if (i %2 == 0) {
				System.out.println("Os números pares são:\n" +i);
			}
		}	
		break;
		case 7:
			double nota1, nota2, nota3, media;
			
			System.out.println("Informe as três notas do aluno:\n");
			nota1 = teclado.nextDouble();
			nota2 = teclado.nextDouble();
			nota3 = teclado.nextDouble();
			
			media = (nota1 + nota2 + nota3)/3;
			
			System.out.printf("A média do aluno é:\n" + media);
			break;
			
		default:
			System.out.println("Opção inválida:");
			break;			
		}		
	}
	

}
