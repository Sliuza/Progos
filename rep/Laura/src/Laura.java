public class Laura {
	public void EscreveChapado(char letra){
		double r;
		char palavra;
		switch(letra){
		case 'q':
			//3 letras
			r = Math.random();
			if(r<=0.7)
				palavra='q';
			else if(r>0.7 && r<0.85)
				palavra='w';
			else
				palavra='a';
			System.out.print(palavra);
			break;
		case 'w':	
			//5 letras
			r = Math.random();
			if(r<=0.7)
				palavra='w';
			else if(r>0.7 && r<=0.775)
				palavra='q';
			else if(r>0.775 && r<=0.85)
				palavra='e';
			else if(r>0.85 && r<=0.925)
				palavra='a';
			else
				palavra='s';
			System.out.print(palavra);
			break;
		case 'e':
			r = Math.random();
			if(r<=0.7)
				palavra='e';
			else if(r>0.7 && r<=0.775)
				palavra='w';
			else if(r>0.775 && r<=0.85)
				palavra='r';
			else if(r>0.85 && r<=0.925)
				palavra='s';
			else
				palavra='d';
			System.out.print(palavra);
			break;
		case 'r':
			r = Math.random();
			if(r<=0.7)
				palavra='r';
			else if(r>0.7 && r<=0.775)
				palavra='e';
			else if(r>0.775 && r<=0.85)
				palavra='t';
			else if(r>0.85 && r<=0.925)
				palavra='d';
			else
				palavra='f';
			System.out.print(palavra);
			break;
		case 't':
			r = Math.random();
			if(r<=0.7)
				palavra='t';
			else if(r>0.7 && r<=0.775)
				palavra='r';
			else if(r>0.775 && r<=0.85)
				palavra='y';
			else if(r>0.85 && r<=0.925)
				palavra='g';
			else
				palavra='f';
			System.out.print(palavra);
			break;
		case 'y':	
			r = Math.random();
			if(r<=0.7)
				palavra='y';
			else if(r>0.7 && r<=0.775)
				palavra='t';
			else if(r>0.775 && r<=0.85)
				palavra='u';
			else if(r>0.85 && r<=0.925)
				palavra='g';
			else
				palavra='h';
			System.out.print(palavra);
			break;
		case 'u':
			r = Math.random();
			if(r<=0.7)
				palavra='u';
			else if(r>0.7 && r<=0.775)
				palavra='y';
			else if(r>0.775 && r<=0.85)
				palavra='i';
			else if(r>0.85 && r<=0.925)
				palavra='h';
			else
				palavra='j';
			System.out.print(palavra);
			break;
		case 'i':	
			r = Math.random();
			if(r<=0.7)
				palavra='i';
			else if(r>0.7 && r<=0.775)
				palavra='u';
			else if(r>0.775 && r<=0.85)
				palavra='o';
			else if(r>0.85 && r<=0.925)
				palavra='j';
			else
				palavra='k';
			System.out.print(palavra);
			break;
		case 'o':
			r = Math.random();
			if(r<=0.7)
				palavra='o';
			else if(r>0.7 && r<=0.775)
				palavra='i';
			else if(r>0.775 && r<=0.85)
				palavra='p';
			else if(r>0.85 && r<=0.925)
				palavra='k';
			else
				palavra='l';
			System.out.print(palavra);
			break;
		case 'p':
			r = Math.random();
			if(r<=0.7)
				palavra='p';
			else if(r>0.7 && r<0.85)
				palavra='o';
			else
				palavra='l';
			System.out.print(palavra);
			break;
		case 'a':
			r = Math.random();
			if(r<=0.7)
				palavra='a';
			else if(r>0.7 && r<0.85)
				palavra='q';
			else
				palavra='s';
			System.out.print(palavra);
			break;
		case 's':	
			r = Math.random();
			if(r<=0.7)
				palavra='s';
			else if(r>0.7 && r<=0.775)
				palavra='w';
			else if(r>0.775 && r<=0.85)
				palavra='a';
			else if(r>0.85 && r<=0.925)
				palavra='d';
			else
				palavra='z';
			System.out.print(palavra);
			break;
		case 'd':
			r = Math.random();
			if(r<=0.7)
				palavra='d';
			else if(r>0.7 && r<=0.775)
				palavra='s';
			else if(r>0.775 && r<=0.85)
				palavra='f';
			else if(r>0.85 && r<=0.925)
				palavra='r';
			else
				palavra='x';
			System.out.print(palavra);
			break;
		case 'f':	
			r = Math.random();
			if(r<=0.7)
				palavra='f';
			else if(r>0.7 && r<=0.775)
				palavra='r';
			else if(r>0.775 && r<=0.85)
				palavra='d';
			else if(r>0.85 && r<=0.925)
				palavra='g';
			else
				palavra='c';
			System.out.print(palavra);
			break;
		case 'g':
			r = Math.random();
			if(r<=0.7)
				palavra='g';
			else if(r>0.7 && r<=0.775)
				palavra='t';
			else if(r>0.775 && r<=0.85)
				palavra='f';
			else if(r>0.85 && r<=0.925)
				palavra='h';
			else
				palavra='v';
			System.out.print(palavra);
			break;
		case 'h':	
			break;
		case 'j':
			r = Math.random();
			if(r<=0.7)
				palavra='j';
			else if(r>0.7 && r<=0.775)
				palavra='u';
			else if(r>0.775 && r<=0.85)
				palavra='h';
			else if(r>0.85 && r<=0.925)
				palavra='k';
			else
				palavra='n';
			System.out.print(palavra);
			break;
		case 'k':	
			r = Math.random();
			if(r<=0.7)
				palavra='k';
			else if(r>0.7 && r<=0.775)
				palavra='i';
			else if(r>0.775 && r<=0.85)
				palavra='j';
			else if(r>0.85 && r<=0.925)
				palavra='l';
			else
				palavra='m';
			System.out.print(palavra);
			break;
		case 'l':
			r = Math.random();
			if(r<=0.7)
				palavra='l';
			else if(r>0.7 && r<=0.775)
				palavra='o';
			else if(r>0.775 && r<=0.85)
				palavra='p';
			else if(r>0.85 && r<=0.925)
				palavra='m';
			else
				palavra='k';
			System.out.print(palavra);
			break;
		case 'z':
			r = Math.random();
			if(r<=0.7)
				palavra='z';
			else if(r>0.7 && r<0.85)
				palavra='s';
			else
				palavra='x';
			System.out.print(palavra);
			break;
		case 'x':	
			r = Math.random();
			if(r<=0.7)
				palavra='x';
			else if(r>0.7 && r<=0.775)
				palavra='d';
			else if(r>0.775 && r<=0.85)
				palavra='z';
			else if(r>0.85 && r<=0.925)
				palavra='c';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case 'c':
			r = Math.random();
			if(r<=0.7)
				palavra='c';
			else if(r>0.7 && r<=0.775)
				palavra='f';
			else if(r>0.775 && r<=0.85)
				palavra='x';
			else if(r>0.85 && r<=0.925)
				palavra='v';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case 'v':	
			r = Math.random();
			if(r<=0.7)
				palavra='v';
			else if(r>0.7 && r<=0.775)
				palavra='g';
			else if(r>0.775 && r<=0.85)
				palavra='c';
			else if(r>0.85 && r<=0.925)
				palavra='b';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case 'b':
			r = Math.random();
			if(r<=0.7)
				palavra='b';
			else if(r>0.7 && r<=0.775)
				palavra='h';
			else if(r>0.775 && r<=0.85)
				palavra='v';
			else if(r>0.85 && r<=0.925)
				palavra='m';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case 'n':	
			r = Math.random();
			if(r<=0.7)
				palavra='n';
			else if(r>0.7 && r<=0.775)
				palavra='j';
			else if(r>0.775 && r<=0.85)
				palavra='b';
			else if(r>0.85 && r<=0.925)
				palavra='m';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case 'm':
			r = Math.random();
			if(r<=0.7)
				palavra='m';
			else if(r>0.7 && r<=0.775)
				palavra='k';
			else if(r>0.775 && r<=0.85)
				palavra='l';
			else if(r>0.85 && r<=0.925)
				palavra='n';
			else
				palavra=' ';
			System.out.print(palavra);
			break;
		case '\n':
			System.out.println();
		case ',':
			r = Math.random();
			if(r<=0.7)
				palavra = ',';
			else if(r>0.7 && r<0.85)
				palavra = ' ';
			else
				palavra = 'z';
			System.out.print(letra);
			break;
		case ' ':
			System.out.print(" ");
		default:
			System.out.print(letra);
		}
	}
}
