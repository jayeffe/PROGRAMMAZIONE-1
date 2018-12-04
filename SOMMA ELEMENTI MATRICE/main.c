#include <stdio.h>
#include <stdlib.h>

int main()
{
    int somma=0;
    int n=2;
    int m=2;
    int i;
    int j;
    int matrice[n][m];
    printf("inserire gli elementi nella matrice\n");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("elemento [%d] [%d] ",i,j);
            scanf("%d",&matrice[i][j]);
        }
    }

    //STAMPA
     for(i=0;i<n;i++){
            printf("\n");
        for(j=0;j<m;j++){
            printf("%d",matrice[i][j]);

        }
    }
    printf("\n --------------\n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           somma=somma+matrice[i][j];

        }
    }
    printf("\n \n la somma dellerighe e' %d ",somma);

    return 0;
}
