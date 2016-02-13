#include<stdio.h>
#include<string.h>
 
int main(){
 int N,i,j;
 char nomes[100005][15];
 int pontos[100005];
 
 scanf(" %d", &N);
 while( N != 0 ){
 long long total_sempesoB = 0;
 long long timeB = 0;
 for(i = 1; i <= N; i++ ){
 pontos[ i ] = 0;
 scanf(" %s", nomes[i]);
 for(j = 0; j < strlen(nomes[i]); j++ )
 pontos[ i ] += nomes[i][j];
 
 total_sempesoB += pontos[ i ];
 timeB += pontos[i]*i;
 }
 
 int solucao = 0;
 long long timeA = 0;
 long long total_sempesoA = 0;
 for(i = 1; i <= N; i++ ){
 timeB -= total_sempesoB;
 total_sempesoB -= pontos[i];
 
 total_sempesoA += pontos[i];
 timeA += total_sempesoA;
 if( timeA == timeB ){
 solucao = i;
 break;
 }
 if( timeA > timeB ) break;
 }
 
 
 if( solucao == 0 ) printf("Impossibilidade de empate.\n");
 else printf("%s\n", nomes[solucao]);
 scanf(" %d", &N);
 }
 return 0;
}
