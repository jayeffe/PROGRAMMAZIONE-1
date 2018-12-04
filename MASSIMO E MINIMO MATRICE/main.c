#include <stdio.h>
#include <stdlib.h>

int main()
{


int n=3;
int m=3;

    int i;
    int j;
    int massimo;
    int minimo;
    int matrice[n][m];
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
   massimo=matrice[0][0];
   minimo = matrice[0][0];

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           if(matrice[i][j]>massimo){
            massimo=matrice[i][j];
           }
           if(matrice[i][j]<minimo){
            minimo=matrice[i][j];
           }
        }
    }
    printf("---------------------------");
    printf("il massimo è %d\n",massimo);
    printf("il minimo e' %d\n",minimo);



    return 0;
}
