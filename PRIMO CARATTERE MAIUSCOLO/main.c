#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
     char stringa[80];

    int i;
    printf("inserire la stringa \n");
    gets(stringa);

    stringa[0]=toupper(stringa[0]);
    for(i=0;i<strlen(stringa);i++){
       if(stringa[i]==' '){
        stringa[i+1]=toupper(stringa[i+1]);
       }


    }

printf("%s\n",stringa);
    return 0;
}

