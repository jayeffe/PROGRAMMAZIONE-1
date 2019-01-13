#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringa[100];
    char temp;
    int i;

    printf("Inserisci la stringa \n");
 scanf("%s",stringa);
    for(i=0;stringa[i]!='\0';i++){
        if(i%2==0 &&(i!=0)){
            temp=stringa[i];
            stringa[i]=stringa[i+1];
            stringa[i+1]=temp;
        }
    }
    printf("la stringa e' %s\n",stringa);
    return 0;
}
