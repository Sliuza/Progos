#include <stdio.h>
#include <stdlib.h>
int main(){
       int NF,NT;
       double VH,SALARY;

       NF = 0;
       NT = 0;
       VH = 0;
       SALARY = 0;

       scanf("%d %d %lf",&NF,&NT,&VH);

       SALARY = NT * VH;

       printf("NUMBER = %d\nSALARY = U$ %.2lf\n",NF,SALARY);

       return 0;

}
