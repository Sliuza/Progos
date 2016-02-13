#include <cstdio>
#include <iostream>
#include <string>
using namespace std;

int main(){
	int N,letras[26],contador,i,nda;
	string frase;
	scanf("%d %d",&N,&nda);
	
	while(N>0){
		for(i = 0;i<26;i++)
			letras[i] = 0;
		contador = 0;
		getline(cin,frase);
		for(i = 0;i<frase.length();i++){
			if(frase[i] != ' ' && frase[i] != ',') {
				letras[frase[i]-'a']++;	
			}				
		}
		for(i = 0;i<26;i++){
			if(letras[i]!= 0)
				contador++;
		}
			
		if(contador == 26)
			printf("frase completa\n");
		else if(contador >= 13)
			printf("frase quase completa\n");
		else
			printf("frase mal elaborada\n");		
			
		N--;
	}
		
	
	return 0;
	
	
	
}
