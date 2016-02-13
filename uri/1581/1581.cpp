#include <cstdio>
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int N,K,nope;
	char S[21],principal[21];
	scanf("%d",&N);
	
	while(N>0){
		scanf("%d",&K);
		scanf("%s",principal);
		nope = 0;
			while(K>1){
				scanf("%s",S);
				if(strcmp(principal,S)!=0){
					nope = 1;
				}
				K--;
		}
		if(nope == 0)
				cout << principal << "\n";
		else 
			cout << "ingles\n";		
		N--;
	}
	
	
	return 0;
}

