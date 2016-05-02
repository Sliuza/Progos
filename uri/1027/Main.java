import java.io.IOException;
import java.util.*;
public class Main {
	 public static void main(String[] args) throws IOException {
		 	List<Integer> eixo = new ArrayList<Integer>();
		 	List<Integer> x = new ArrayList<Integer>();
		 	List<Integer> y = new ArrayList<Integer>();
		 	Scanner l = new Scanner(System.in);
		 	int N;
		 	while(l.hasNext()){
		 		N = l.nextInt();
		 		l.nextLine();
		 		while(N>0){
		 			x.add(l.nextInt());
		 			y.add(l.nextInt());
		 			l.nextLine();
		 			N--;
		 		}
		 		ondaCritica(eixo,x,y);
		 		limpaListas(eixo,x,y);
		 		
		 	}
		 	l.close();
	  }

	public static void ondaCritica(List<Integer> eixo,List<Integer> x,List<Integer> y) {
		int pontos;
		atualizaEixo(eixo,y);
		pontos = verificaOnda(eixo,x,y);
		System.out.println(pontos);
		
	}

	private static int verificaOnda(List<Integer> eixo, List<Integer> x,List<Integer> y) {
		int maior = 0,e = 0;
		List<Integer> pontos = new ArrayList<Integer>();
		while(e!=eixo.size()){
			for(int i = 0;i<x.size();i++){
				if(eixo.get(e)+1 == y.get(i)){
					if(!pontos.contains(x.get(i))){
						pontos.add(x.get(i));
					}
				}
				else if(eixo.get(e)-1 == y.get(i)){
					if(!pontos.contains(x.get(i))){
						pontos.add(x.get(i));
					}
				}
			}
			if(maior<pontos.size()){
				maior = pontos.size();
			}
			e++;
			pontos.clear();
		}	
		
		return maior;
	}

	public static void atualizaEixo(List<Integer> eixo,List<Integer> y) {
		boolean contem;
		for(int i = 0;i<y.size();i++){
			contem = false;
			contem = eixo.contains(y.get(i));
			if(!contem){
				eixo.add(y.get(i));
			}	
		}
		
	}
	public static void limpaListas(List<Integer> eixo,List<Integer> x,List<Integer> y){
		eixo.clear();
		x.clear();
		y.clear();
	}
	
}
