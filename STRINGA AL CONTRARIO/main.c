// PROGRAMMA CHE VISUALIZZA LA STRINGA AL CONTRARIO
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
 char str[100];
 char contrario[100];
 int i;
 int lung;
 int x;
 printf("inserire stringa : ");
 scanf("%s",str);

 contrario[0]='\0';
 lung=strlen(str);

 for(i=0;str[i]!='\0';i++){
 contrario[i] = str[lung-1];
 lung--;
 }
contrario[i]='\0';
 for(x=0;contrario[x]!='\0';x++)printf("%c",contrario[x]);
 return 0;
}
