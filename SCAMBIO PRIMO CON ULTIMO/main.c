#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char stringa[100];
    int i;
    char temp;
    int x;
    printf("inserire la stringa \n");
    scanf("%s",stringa);

    x=strlen(stringa);
    printf("la lunghezza della stringa e' %d\n",x);



        temp=stringa[x-1];


      stringa[x-1]=stringa[0];
      stringa[0]=temp;

        printf("\n\n %s",stringa);



    return 0;
}
