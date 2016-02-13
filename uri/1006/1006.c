#include <stdio.h>
#include <stdlib.h>
int main(){
        double A,B,C,MEDIA;

        A = 0;
        B = 0;
        C = 0;

        scanf("%lf %lf %lf",&A,&B,&C);

        A *= 2;
        B *= 3;
        C *= 5;

        MEDIA = (A + B + C) /10;

        printf("MEDIA = %.1lf\n",MEDIA);
        return 0;
}
