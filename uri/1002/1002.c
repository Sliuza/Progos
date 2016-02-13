#include <stdio.h>
#include <stdlib.h>
int main(){
        double A,Raio,Pi;
        Pi = 3.14159;
        A = 0;
        Raio = 0;
        scanf("%lf",&Raio);
        A = Raio * Raio * Pi;
        printf("A=%.4lf\n",A);
        return 0;

}
