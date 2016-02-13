#include <stdio.h>
#include <stdlib.h>
int main(){
      int N,K,M;
      M = 0;
      N = 0;
      K = 0;

      scanf("%d",&N);
      while(N > 0){
    	  scanf("%d",&K);
    	  while(K > 0){
			 scanf("%d",&M);
			 if(M == 1){
				printf("Rolien\n");
			 }

			 else if(M == 2){
				 printf("Naej\n");
			 }

			 else if(M == 3){
				printf("Elehcim\n");
			 }

			 else if(M == 4){
				 printf("Odranoel\n");
			 }
			 K--;
		  }
		  N--;
      }

      return 0;
}

