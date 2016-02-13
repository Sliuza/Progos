#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
     int x,y,N,vencedor,resultado;
     scanf("%d",&N);

     while(N>0){
    	 scanf("%d %d",&x,&y);
    	 vencedor = 1;
    	 resultado = 9*pow(x,2)+ pow(y,2);
    	 if((2*pow(x,2)+25*pow(y,2))>resultado){
    		 vencedor = 2;
    		 resultado = 2*pow(x,2)+25*pow(y,2);
    	 }
    	 if((-100*x+pow(y,3))>resultado){
    		 vencedor = 3;
    	 }
    	 if(vencedor == 1){
    		printf("Rafael ganhou\n");
    	 }
    	 else if(vencedor == 2){
    		 printf("Beto ganhou\n");
    	 }
    	 else
    		 printf("Carlos ganhou\n");
    	 N--;
     }

      return 0;
}
