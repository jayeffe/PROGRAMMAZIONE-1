#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stringa[100];
    char stringa2[100];
    int i = 0;
    int uguale = 1;


    printf("Inserire elementi nella stringa \n");
    scanf("%s",stringa);

    printf("inserire elementi nella seconda stringa \n");
    scanf("%s",stringa2);


while((stringa[i] != '\0')&& uguale)
{
    uguale = (uguale && (stringa[i] == stringa2[i]));
i++;
}
if(uguale==1){
    printf("stringhe uguali ");
}
else{
    printf("stringhe diverse");
}




    return 0;
}
