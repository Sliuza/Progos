#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
      int C, QT,S,N,i,atual,vencedor;
      scanf("%d",&C);

      while(C>0){
    	 scanf("%d %d",&QT,&S);
    	 i = 1;
    	 scanf("%d",&N);
    	 atual = abs(N-S);
    	 vencedor = i;
    	 QT-=1;
    	 while(QT>0){
    		scanf("%d",&N);
    		i++;
    		if(abs(N-S)<atual){
    			vencedor = i;
    			atual = abs(N-S);
    		}
    		QT--;
    	 }
    	 printf("%d\n",vencedor);
    	 C--;
      }

      return 0;
}
