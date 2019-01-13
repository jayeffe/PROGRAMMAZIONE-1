#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int i;
    int j=0;
    int vett[n];
    int compatto[n];
    int trovato;
    int ncomp;

    printf("inserire elementi nel vettore \n");
    for(i=0;i<n;i++){
        printf("elemento %d ",i);
        scanf("%d", &vett[i]);
    }

     for(ncomp=0/*indice vettore compattato*/,i=0;i<n;i++)/*scandisce vett[i]*/
        {
             if((!vett[i])||(confronto(vett,ncomp,vett[i])))    // !vettore ritorna 0 se l'espressione è diversa da 0
                    trovato=1;  // il valore è diverso da 0
            if(!trovato)/*se il flag e' negativo assegna vett[i] a al vettore compattato comp[ncomp]*/
            {
                compatto[ncomp]=vett[i];
                ncomp++;/*incrementa l'indice del vettore compattato*/
            }
        }



return 0;
    }

int confronto(int vet[],int n, int valore){
     int i;
    for(i=0;i<n;i++){
        if(vet[i]==valore) return 1;
        else return 0;
    }
}
