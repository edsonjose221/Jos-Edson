import java.util.Scanner;

public class Menu {
	
	public static void main(String[] args) {
		Scanner teclado = new Scanner(System.in);
		
		int op;
		
		System.out.println("-------ESCOLHA UMA ESTRUTURA DO MENU--------\n"
						  + "1. LISTA SEQUENCIAL\n"
						  + "2. LISTA ENCADEADA\n"
						  + "3. PILHA SEQUENCIAL\n"
						  + "4. PILHA ENCADEADA");
		op = teclado.nextInt();
		
		switch (op) {
		
		case 1:{
			System.out.println("LISTA SEQUENCIAL \n\n");
			
			Lista listasequencial = new Lista();
			
			System.out.println("A lista esta vazia? "+ listasequencial.estaVazia());
			System.out.println("A lista esta cheia? "+ listasequencial.estaCheia());
			System.out.println("A lista tem "+ listasequencial.tamanhoLista() +" elementos");
			
			// criando objetos Contato
			Contato c1 = new Contato();
			c1.nome = "Bruno";
			c1.telefone = "1111-1111";
			
			Contato c2 = new Contato();
			c2.nome = "Andréia";
			c2.telefone = "2222-2222";
			
			Contato c3 = new Contato();
			c3.nome = "Jose Ricardo";
			c3.telefone = "3333-3333";
			
			// inserindo objetos na lista sequencial
			listasequencial.inserirContato(0, c1);
			listasequencial.inserirContato(1, c2);
			listasequencial.inserirContato(2, c3);
			
			listasequencial.exibirLista();
			
			Contato removido = listasequencial.removerContato(0);
			System.out.println("\nO contato removido foi: "+removido.getNome());
			
			System.out.println("\nNome do elemento da segunda posição é: "+listasequencial.buscar(1).nome);
			
			System.out.println("\nPosição do contato Andréia é: "+listasequencial.retornarPosicao(c2));
			
		break;	
		}	
		
		case 2:{
			
			System.out.println("LISTA ENCADEADA: \n\n");
		
			Lista_encadeada listaencadeada = new Lista_encadeada();
			
			System.out.println("A lista está vazia? "+listaencadeada.estaVazia());
			
			Aluno a1 = new Aluno();
			a1.setNome("João Luiz");
			a1.setIdade("10");
			
			Aluno a2 = new Aluno();
			a2.setNome("Ana Luiza");
			a2.setIdade("17");
			
			listaencadeada.inserirAlunoInicio(a1);
			listaencadeada.inserirNoFim(a2);
			
			System.out.println("A lista tem "+listaencadeada.tamanhoDaLista()+" elementos.");
			System.out.println("Elementos da lista: ");
			listaencadeada.exibirLista();
			
			Aluno a3 =  new Aluno();
			a3.setNome("Luiza Santos");
			a3.setIdade("18");
			
			Aluno a4 = new Aluno();
			a4.setNome("João Marcos");
			a4.setIdade("21");
			
			listaencadeada.inserirAlunoInicio(a3);
			listaencadeada.inserirAlunoInicio(a4);
			listaencadeada.exibirLista();

			listaencadeada.removerAlunoPorNome("João Marcos");
			listaencadeada.exibirLista();		

			listaencadeada.removerAlunoPorNome("Ana Luiza");
			listaencadeada.exibirLista();		

			listaencadeada.removerAlunoPorNome("Santos Silva");
			
			break;
		  }
		
		case 3:{
			System.out.println("Pilha sequencial:\n");
			
			PilhaSequencial pilha = new PilhaSequencial();
			System.out.println("A pilha está vazia? "+pilha.estaVazia());
			System.out.println("A pilha está cheia? "+pilha.estaCheia());
			pilha.push("Ana");
			pilha.push("Bruno");
			pilha.push("Carla");
			pilha.push("Daniel");
			pilha.exibirElementos();
			System.out.println("Total de Elementos: "+pilha.quantidadeElementos());
			
			String elementoremovido = pilha.pop();
			System.out.println("O elemento removido foi: "+elementoremovido);
			System.out.println("Elemento que está no topo? "+pilha.top());
			pilha.exibirElementos();
			System.out.println("total de Elementos: "+pilha.quantidadeElementos());
			
			break;
		 }
	
		case 4:{
			System.out.println("Pilha Encadeada");
			
			PilhaEncadeada pilha = new PilhaEncadeada();
			
			System.out.println("A pilha está vazia? "+pilha.estaVazia());
			
			Estudantes a1 = new Estudantes();
			a1.setNome("Ana");
			pilha.push(a1);
			Estudantes a2 = new Estudantes();
			a2.setNome("Bruno");
			pilha.push(a2);
			Estudantes a3 = new Estudantes();
			a3.setNome("Carla");
			pilha.push(a3);
			Estudantes a4 = new Estudantes();
			a4.setNome("Daniel");
			pilha.push(a4);
			
			pilha.exibirAlunos();
			System.out.println("Total de Elementos: "+pilha.quantidadeElementos());
			
			Estudantes alunoremovido = pilha.pop();
			System.out.println("O aluno removido foi: "+alunoremovido.getNome());
			System.out.println("Aluno que está no topo? "+(pilha.top()).getNome());
			pilha.exibirAlunos();
			System.out.println("total de Elementos: "+pilha.quantidadeElementos());
			
			break;
		}
		
		default:{
			System.out.println("Opção inválida");
			System.exit(0);
			
			break;
		}

	   }
	}
}

