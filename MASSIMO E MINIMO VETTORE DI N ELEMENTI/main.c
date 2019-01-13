#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=5;
    int i;
    int vett[n];
    int max;
    int min;

    printf("inserire gli elementi nell'array \n");

    //inserimento
    for(i=0;i<n;i++){
        printf("elemento %d :",i);
        scanf("%d",&vett[i]);
    }

        printf("STAMPA ELEMENTI \n");

        //stampa
        for(i=0;i<n;i++){
            printf("elemento %d : %d\n",i,vett[i]);
        }


       max=vett[0];
       min=vett[0];
        for(i=0;i<n;i++){
            if(vett[i]>max){
                    max=vett[i];
            }
            if(vett[i]<min){
                min=vett[i];
            }

        }

printf("il massimo e' %d ",max);
printf("il minimo e' %d",min);


    return 0;
}
