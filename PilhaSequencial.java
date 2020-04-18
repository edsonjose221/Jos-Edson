
public class PilhaSequencial {
	String elementos[] = new String[100];
	int topo = -1;
	
	public boolean estaVazia() {
		return(topo == -1);
	}
	
	public boolean estaCheia() {
		return (topo == elementos.length - 1);
	}
	
	public int quantidadeElementos() {
		return(topo + 1);
	}
	
	public String top() {
		if(estaVazia())
			return null;
		return elementos[topo];
	}
	
	public String pop() {
		if(estaVazia())
			return null;
		String valor = elementos[topo];
		elementos[topo] = null;
		topo--;
		return valor;
	}
	
	public void push (String valor) {
		if (estaCheia())
			return;
		
		topo++;
		elementos[topo] = valor;
	}
	
	public void exibirElementos () {
		System.out.println("\nElementos da pilha:");
		
		for ( int i = 0; i <= topo; i++)
			System.out.println((i + 1)+ "o. Elemento: "+elementos[i]);
	}
}
