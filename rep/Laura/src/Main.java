import java.io.*;
public class Main {
	public static void main(String[] args) throws IOException {
		Laura l = new Laura();
		InputStream is = System.in;
	    InputStreamReader isr = new InputStreamReader(is);
	    BufferedReader br = new BufferedReader(isr);
		int c;
	    System.out.println("Escreva como a Laura");
		while(true){
			c =br.read();
			if(c!=10)
			l.EscreveChapado((char)c);;
		}

	}

}
