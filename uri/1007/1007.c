#include <stdio.h>
#include <stdlib.h>
int main(){
        int A,B,C,D,DIFERENCA;

        A = 0;
        B = 0;
        C = 0;
        D = 0;

        scanf("%d %d %d %d",&A,&B,&C,&D);

        DIFERENCA = (A * B - C * D);

        printf("DIFERENCA = %d\n",DIFERENCA);

        return 0;

}
