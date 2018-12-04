
/*Dato un array A[ N ][ M] di elementi reali, produrre:
-La riga di somma massima
-La riga di somma minima
-L’inversione delle due righe
-La colonna di somma minima
-L’inversione con la prima colonna
N=4
M=4
1 2 3 4
5 6 7 8
9 1 2 3
4 5 6 7
Riga somma max 2
Riga somma min 1
Colonna somma min 2
Riga somma max 2
Riga somma min 1
Colonna somma min 2
6 5 7 8
2 1 3 4
1 9 2 3
4 6 5 7*/

#include <stdio.h>
#include <stdlib.h>

int main()
{


int n=3;
int m=3;
int temp;
int trovatorigamax=0;
int trovatorigamin=0;
int trovatominimocolonna=0;

    int i;
    int j;
    int max;
    int min;
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
min=sommarighe[0];

for(i=0;i<n;i++){
    if(sommarighe[i]>max){
        max=sommarighe[i];
      trovatorigamax=i;
    }
    if(sommarighe[i]<min){
        min=sommarighe[i];
        trovatorigamin=i;
    }
}
printf("\n la riga %d ha valore massimo \n ",trovatorigamax);
printf("\n la riga %d ha valore minimo \n ",trovatorigamin);
for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      temp= matrice[trovatorigamax][j];
       matrice[trovatorigamax][j]=matrice[trovatorigamin][j];
       matrice[trovatorigamin][j]=temp;
        }
    }
 for(i=0;i<n;i++){
       printf("\n");
        for(j=0;j<m;j++){
            printf(" %d",matrice[i][j]);

    }
   }

   for(j=0;j<m;j++){
    sommacolonne[j]=0;
    for(i=0;i<n;i++){
   sommacolonne[j]=sommacolonne[j]+matrice[i][j];
    }
    printf(" \n la colonna %d ha la somma %d\n ",j,sommacolonne[j]);

   }
   min=sommacolonne[0];
   for(j=0;j<m;j++){
    for(i=0;i<n;i++){
        if(sommacolonne[j]<min){
            min=sommacolonne[j];
            trovatominimocolonna=j;
        }
    }
   }
   printf("\n la colonna %d che ha la somma minima e' %d ",trovatominimocolonna,min);


   for(j=0;j<m;j++){
    for(i=0;i<n;i++){
        temp=matrice[i][trovatominimocolonna];
        matrice[i][trovatominimocolonna]=matrice[i][0];
        matrice[i][0]=temp;
    }
   }

 for(i=0;i<n;i++){
       printf("\n");
        for(j=0;j<m;j++){
            printf(" %d",matrice[i][j]);

    }
   }

return 0;





   }






