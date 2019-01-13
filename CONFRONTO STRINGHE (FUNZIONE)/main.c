#include <stdio.h>
#include <stdlib.h>

int uguale(char stringa1[],char stringa2[]){
int i=0;
int uguali=1;

while((stringa1[i]!='\0')&& uguali){
  uguali=(uguali &&(stringa1[i]==stringa2[i]));
  i++;
  }


if(uguali==1) return 1;
else return 0;


}
int lunghezza(char vettore[]){
int i;
int lenght=0;
for(i=0;vettore[i]!='\0';i++){
    lenght++;
}
return lenght;
}



int main()
{
    char stringa[100];
    char stringa2[100];
   int equals;
   int lung;
   int i;


    printf("Inserire elementi nella stringa \n");
    scanf("%s",stringa);

    printf("inserire elementi nella seconda stringa \n");
    scanf("%s",stringa2);

    equals=uguale(stringa,stringa2);

    printf(" valore della stringa 1 se uguali %d\n",equals);

printf("la lunghezza e' %d\n",lunghezza(stringa));


for(i=0;stringa[i]!='\0';i++){
    stringa[i]=(stringa[i]+32);
}
printf("la stringa e' %s",stringa);
    return 0;
}
