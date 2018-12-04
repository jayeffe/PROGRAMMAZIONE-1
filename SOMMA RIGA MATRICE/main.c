#include <stdio.h>
#include <stdlib.h>

int main()
{

int sommaRighe=0;
int sommaColonne=0;
int n=2;
int m=2;
    int i;
    int j;
    int matrice[n][m];
    int sommari[n];
    int sommaCo[m];
    printf("inserisci gli elementi nella matrice \n \n ");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("elemento [%d][%d] ",i,j);
            scanf("%d",&matrice[i][j]);
        }
    }

   for(i=0;i<n;i++){
       printf("\n");
        for(j=0;j<m;j++){
            printf(" %d",matrice[i][j]);

    }
   }
for(i=0;i<n;i++){
        sommari[i]=0;
        for(j=0;j<m;j++){
        sommari[i]=sommari[i]+matrice[i][j];

        }
        printf("\n");
        printf(" la somma della riga %d e' %d\n",i,sommari[i]);
    }

   for(j=0;j<m;j++){
        sommaCo[j]=0;
    for(i=0;i<n;i++){
        sommaCo[j]=sommaCo[i]+matrice[i][j];

    }
  printf(" la somma della colonna %d e' %d\n",j,matrice[i][j]);

   }

    return 0;
}
