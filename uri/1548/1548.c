#include <stdio.h>
#include <stdlib.h>

void troca(int *a, int *b);
void selectionSort(int vet[], int n);
int indiceMaior(int vet[], int n, int inicio);

int main(){
	int N,M,*lista,*resposta,nope,i;

	scanf("%d",&N);

	while(N>0){
		nope = 0;
		scanf("%d",&M);
		lista = malloc(M*sizeof(int));
		resposta = malloc(M*sizeof(int));
		for(i = 0;i<M;i++){
			scanf("%d",&lista[i]);
			resposta[i] = lista[i];
		}
		selectionSort(resposta, M);
		for(i = 0;i<M;i++){
			if(resposta[i] == lista[i]){
				nope++;
			}
		}
		printf("%d\n",nope);
		free (lista);
		free (resposta);
		N--;
	}
	return 0;

}
void troca(int *a, int *b) {
int aux;
aux = *a;
*a = *b;
*b = aux;
}

void selectionSort(int vet[], int n) {
int i, min;
for (i = 0; i < n; i++) {
min = indiceMaior(vet, n, i);
troca(&vet[i], &vet[min]);
}
}

int indiceMaior(int vet[], int n, int inicio){
int j, min = inicio;
for (j = inicio + 1; j < n; j++)
if (vet[min] < vet[j])
min = j;
return min;
}
