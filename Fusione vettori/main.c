#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1=3;
    int n2=4;
    int i;
    int j=0;
    int vettore[n1];
    int vettore2[n2];
    int fusione[n1];
    printf("inserire elementi vettore\n\n");

    for(i=0;i<n1;i++){
    printf("elemento %d ",i);
    scanf("%d",&vettore[i]);
    }


    printf("STAMPA PRIMO VETTORE \n");
    for(i=0;i<n1;i++){
        printf("%d %d\n",i,vettore[i]);
    }


    printf("inserire elementi secondo vettore\n\n");

    for(i=0;i<n2;i++){
    printf("elemento %d ",i);
    scanf("%d",&vettore2[i]);
    }


    printf("STAMPA secondo VETTORE \n");
    for(i=0;i<n2;i++){
        printf("%d %d\n",i,vettore2[i]);
    }


    for(i=0;i<n1;i++){
        fusione[i]=vettore[i];
    }

    for(i=n1;i<(2*n2)-1  ;i++){
    fusione[i]=vettore2[j];
    j++;
}


printf("fusione \n");

for(i=0;i<(n1+n2);i++){
    printf("%d\n",fusione[i]);
}


    return 0;
}
