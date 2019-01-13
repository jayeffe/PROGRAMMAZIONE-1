#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
 char stringa[100];
 char ch;
 int i,j;
 printf("inserire stringa \n :");
 scanf("%s",stringa);

fflush(stdin);

 printf("inserire il carattere da cercare \n");
 scanf("%c", &ch);

 for(i=0;stringa[i]!='\0';i++){
 if(stringa[i]==ch) {
for(j=i;stringa[j]!='\0';j++) {
 stringa[j]=stringa[j+1];
 printf("la i vale %d\n j vale %d\n ",i,j);

          }
      }
   }
for(i=0;stringa[i]!='\0';i++) {
 printf("%c",stringa[i]);
}
 return 0;
}
