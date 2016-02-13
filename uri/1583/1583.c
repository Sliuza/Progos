#include <stdio.h>
#include <stdlib.h>

void Contamina(char **mapa,int x,int y,int N,int M);
char ** AlocaMatriz(int N,int M);
void DesalocaMatriz(char **mapa,int N);	
void ObtemMapa(char **mapa,int N);
void AchaT(char **mapa,int N,int M);
void ImprimeMapa(char **mapa,int N,int M);
int main(){
	char **mapa;
	int N,M,i;
	mapa = NULL;
	scanf("%d %d",&N,&M);
	while(N!=0 && M!= 0){
		mapa = AlocaMatriz(N,M);
		ObtemMapa(mapa,N);
		AchaT(mapa,N,M);
		ImprimeMapa(mapa,N,M);
		DesalocaMatriz(mapa,N);	
		scanf("%d %d",&N,&M);
	}


}

char ** AlocaMatriz(int N,int M){
	int i;
	char **mapa;
	mapa  = malloc(N*sizeof(char *));
	for(i = 0;i<N;i++)
		mapa[i] = malloc((M+1)*sizeof(char));		
		
	return mapa;	
}	

void DesalocaMatriz(char **mapa,int N){
	int i;
	
	for(i = 0;i<N;i++)
		free(mapa[i]);
	free(mapa);	

}
void ObtemMapa(char **mapa,int N){
	int i;
	for(i = 0;i<N;i++){
		scanf("%s",mapa[i]);
	}
}
void AchaT(char **mapa,int N,int M){
	int i,j;
	for(i = 0;i<N;i++){
		for(j = 0;j<M;j++)
			if(mapa[i][j] == 'T')
				Contamina(mapa,i,j,N,M);
	}


}


void Contamina(char **mapa,int x,int y,int N,int M){
	if(x-1>=0)
		if(mapa[x-1][y] == 'A'){
			mapa[x-1][y] = 'T';
			Contamina(mapa,x-1,y,N,M);
		}
	if(x+1<N)
		if(mapa[x+1][y] == 'A'){
			mapa[x+1][y] = 'T';
			Contamina(mapa,x+1,y,N,M);
		}
	if(y-1>=0)
		if(mapa[x][y-1] == 'A'){
			mapa[x][y-1] = 'T';
			Contamina(mapa,x,y-1,N,M);
		}
	if(y+1<M)
		if(mapa[x][y+1] == 'A'){
			mapa[x][y+1] = 'T';
			Contamina(mapa,x,y+1,N,M);
		}
	
	return;				
	
	
}

void ImprimeMapa(char **mapa,int N,int M){
	int i,j;
	for(i = 0;i<N;i++){
		for(j = 0;j<M;j++)
			printf("%c",mapa[i][j]);
		
		printf("\n");
			
	}
	printf("\n");
}



