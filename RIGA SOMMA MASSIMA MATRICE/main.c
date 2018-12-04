#include <stdio.h>
#include <stdlib.h>

int main()
{


int n=3;
int m=3;
int trovato;
    int i;
    int j;
    int max;
    int matrice[n][m];
    int sommarighe[n];
    int sommacolonne[n];
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
        sommarighe[i]=0;
   for(j=0;j<m;j++){

    sommarighe[i]=sommarighe[i]+matrice[i][j];
   }
printf("la somma della riga con indice %d e' %d\n",i,sommarighe[i]);
   }
max=sommarighe[0];
for(i=0;i<n;i++){
    if(sommarighe[i]>max){
        max=sommarighe[i];
        trovato=i;
    }
}
printf("la riga con il valore massimo e' %d %d\n",trovato,max);
   return 0;




}
