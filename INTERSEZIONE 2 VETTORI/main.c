#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4;
    int i,j;
    int vettore1[n];
    int vettore2[n];
    int vettoreFuso[n];
    int k=0;
    int trovato=0;

    printf("inserisci elementi\n");

    for(i=0;i<n;i++){
        scanf("%d",&vettore1[i]);
    }
for(i=0;i<n;i++){
    printf("elemento %d -> %d\n",i,vettore1[i]);
}
    printf("inserisci elementi secondo vettore \n");


for(i=0;i<n;i++){
        scanf("%d",&vettore2[i]);
}
for(i=0;i<n;i++){
    printf("elemento %d -> %d\n",i,vettore2[i]);
}

// confronto
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(vettore1[i]==vettore2[j]){
        trovato++;
      }
    }
}

for(i=0;i<trovato;i++){
    for(j=0;j<n;j++){
    if(vettore1[i]==vettore2[j]){
            vettoreFuso[i]=vettore1[i];
}
    }
}
if(trovato){
printf("ho trovato %d elementi uguali ",trovato);
}

printf("IL VETTORE INTERSEZIONE SARA' \n ");

for(i=0;i<trovato;i++){
    printf("%d\n",vettoreFuso[i]);
}

    return 0;
}
