#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int MedeForca(char nome[]);
int Cabo(char nome[100005][15],unsigned long long int forca[],int N);

int main(){
	float tempo;
	char nome[100005][15];
	time_t t_ini, t_fim;
	unsigned long long int N,contador,forca[100005];
	int empate,i;
	t_ini = time(NULL);
	
	scanf("%llu",&N);
		while(N!=0){
			contador = 0;
			while(contador<N){
				scanf("%s",nome[contador]);
				forca[contador] = MedeForca(nome[contador]);
				contador++;
			}
			empate = Cabo(nome,forca,N);
			if(empate){
				printf("%s\n",nome[empate]);	
			}	
			else 
				printf("Impossibilidade de empate.\n");	
			scanf("%llu",&N);
		}
		t_fim = time(NULL);
		tempo = difftime(t_fim,t_ini);
	
		return 0;	
}

int MedeForca(char nome[]){
	int i = 0,forca = 0;
	while(nome[i]!= '\0'){
		forca += nome[i];
		i++;
	}
	return forca;
		
}

int Cabo(char nome[100000][11],unsigned long long int forca[],int N){
	char semEmpate[27] = "Impossibilidade de empate.";
	unsigned long long int timeA,timeB;
	int i,j,k;
	for(i = 0;i<N;i++){
		timeA = 0;
		timeB = 0;
		
		for(j = i;j>=0;j--)
			timeA += forca[j]*(i-j+1);
		for(k = i+1;k<N;k++)
			timeB+= forca[k]*(k-i);
		if(timeA == timeB){
			return i;
		if(timeA > timeB)
			return 0;			
		}
		
	}
	return 0;
}





