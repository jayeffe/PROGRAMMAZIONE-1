#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringa[100];
    int i;
    int j;
    int presente;
    printf("inserire una stringa da tastiera \n");
    gets(stringa);




        for(j=97;j<=122;j++){
                presente=0;
        for(i=0;stringa[i]!='\0';i++){
            if(j==stringa[i]){
               presente=1;
            }
            }
        if(presente!=1){
            printf("%c\n",j);
        }
        }


    return 0;
}
