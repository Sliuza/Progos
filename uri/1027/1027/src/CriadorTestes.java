import java.util.*;
import java.util.Scanner;


public class CriadorTestes {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		int range,N;
		Random g = new Random();
		Scanner l = new Scanner(System.in);
		N = l.nextInt();
		range = l.nextInt();
		for(int j = 0;j<N;j++){
			System.out.println("10");
			for(int i =0;i<5;i++){
				System.out.println(g.nextInt(range) + " " + g.nextInt(range));
				System.out.println(g.nextInt(range) + " " + -g.nextInt(range));
				
			}
		}
		l.close();
	}

}
