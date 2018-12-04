#include <stdio.h>
#include <stdlib.h>

int main()
{


int n=3;
int m=3;
int somma=0;
    int i;
    int j;
    int matrice[n][m];
    printf("inserisci gli elementi nella matrice \n \n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("elemento [%d][%d] ",i,j);
            scanf("%d",&matrice[i][j]);
        }
    }
    // stampa

   for(i=0;i<n;i++){
       printf("\n");
        for(j=0;j<m;j++){
            printf(" %d",matrice[i][j]);

    }
   }

//somma elementi
for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            somma=somma+matrice[i][j];
        }
    }
    printf("\n la somma e' %d\n",somma);

    return 0;
}
