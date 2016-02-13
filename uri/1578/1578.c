#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    unsigned long long m[25][25], num;
    int n, i, x, w, j, dig[25][25], digm[25];
    scanf("%d", &n);
    for(w=0; w<n; w++)
    {
        scanf("%d", &x);
        for(i=0; i<x; i++)
        {
            for( j=0; j<x; j++)
            {
                scanf("%llu", &m[i][j]);
                m[i][j] *= m[i][j];
                num = m[i][j];
                dig[i][j] = 0;
                if(num == 0)
                	dig[i][j]++;
                while(num>0){
                    num /= 10;
                    dig[i][j]++;
                }
                if(i==0)
                	digm[j] = dig[i][j];
                else if(dig[i][j]>digm[j])
                	digm[j] = dig[i][j];
            }
        }
        printf("Quadrado da matriz #%d:\n", (w+4));
        for(i=0; i<x; i++){
            for(j=0;j<x;j++){
                while(dig[i][j]<digm[j]){
                    printf(" ");
                    dig[i][j]++;
                }
                printf("%llu", m[i][j]);
                if(j==(x-1)) printf("\n");
                else printf(" ");
            }
        }
        if(w<(n-1))printf("\n");
    }
    return 0;
}
