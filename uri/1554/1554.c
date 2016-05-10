#include <stdio.h>
#include <math.h>
int main(){
	int C,N,x[51],y[51],i,bola;
	double distancia,menor;
	scanf("%d",&C);
	while(C>0){	
		scanf("%d",&N);
		N++;
		for(i = 0;i<N;i++){
			scanf("%d %d",&x[i],&y[i]);
		}
		menor = 5000;
		for(i = 0;i<N-1;i++){
			distancia = sqrt(pow((x[0]-x[i+1]),2)+pow((y[0]-y[i+1]),2)) ;
			if(distancia<menor && (menor-distancia>=0.01)){
				menor = distancia;
				bola = i;
			}
		}
		printf("%d\n",bola+1);
		C--;
	}	
	return 0;
}
