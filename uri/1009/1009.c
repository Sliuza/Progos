#include <stdio.h>
#include <stdlib.h>
int main(){
      char nome[21];
      double salario,venda,TOTAL;

      salario = 0;
      venda = 0;
      TOTAL = 0;

      scanf("%s %lf %lf",nome,&salario,&venda);

      TOTAL = (venda * 0.15) + salario;

      printf("TOTAL = R$ %.2lf\n",TOTAL);

      return 0;
}
