
public class PilhaEncadeada {
	Estudantes	topo;
	int		quantidade = 0;
	
	public boolean estaVazia() {
		return (topo == null);
	}
	
	public int quantidadeElementos() {
		return quantidade;
	}
	
	public Estudantes top () {
		if (estaVazia())
			return null;
		
		return (topo);
	}
	
	public void push(Estudantes a) {
		a.proximo = topo;
		topo = a;
		quantidade++;
	}
	
	public Estudantes pop () {
		if (estaVazia())
			return null;
			
		Estudantes aux = topo;
		topo = topo.proximo;
		quantidade--;
		return aux;
	}
	
	public void exibirAlunos () {
		if (estaVazia()) {
			System.out.println("A pilha está vazia");
			return;
		}
		
		Estudantes aux = topo;
		for (int i = 0; i < quantidade; i++) {
			System.out.println("Aluno: "+aux.getNome());
			aux = aux.proximo;
		}
	}

}
