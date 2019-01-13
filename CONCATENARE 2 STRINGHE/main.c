#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char stringa[30];
    char secondaStringa[30];
    char stringaconcatenata[60];

    int lStringa;
    int lSecstringa;
    int i;

    printf("inserire la prima stringa \n");
    scanf("%s",stringa);
    lStringa=strlen(stringa);


    printf("inserire la seconda stringa\n ");
    scanf("%s",secondaStringa);
    lSecstringa=strlen(secondaStringa);



    // LUNGHEZZA PRIMA STRINGA
for(i=0;i<lStringa;i++){
    stringaconcatenata[i]=stringa[i];

}
for(i=0;i<lSecstringa;i++){
    stringaconcatenata[lStringa+i]=secondaStringa[i];
}

    printf("la stringa concatenata e' %s",stringaconcatenata);
    return 0;
}
