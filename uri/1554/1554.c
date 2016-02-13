#include <stdio.h>
#include <math.h>
int main(){
	int C,N,x[51],y[51],distancia,i,menor,bola;
	scanf("%d",&C);
	while(C>0){	
		scanf("%d",&N);
		N++;
		for(i = 0;i<N;i++){
			scanf("%d %d",&x[i],&y[i]);
		}
		menor = 4001;
		for(i = 0;i<N-1;i++){
			distancia = abs(x[0]-x[i+1])+abs(y[0]-y[i+1]);
			if(distancia<menor){
				menor = distancia;
				bola = i;
			}
		}
		printf("%d\n",bola+1);
		C--;
	}	
	return 0;
}
