#include <stdio.h>
#include <stdlib.h>

int main(){
	int N,K,P[100],atual,i,resultado;
	scanf("%d %d",&N,&K);
	while(N>0 && K>0){
		resultado = 0;
		for(i = 0;i<100;i++)
				P[i] = 0;
		while(N>0){
			scanf("%d",&atual);
			P[atual-1]++;
			N--;
		}
		for(i = 0;i<100;i++){
			if(P[i]>= K)
				resultado++;
		}
		printf("%d\n",resultado);
		scanf("%d %d",&N,&K);
	}

	return 0;
}
