#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char stringa[80];
    int i,j,ok;
    printf("inserire la stringa \n");
    scanf("%s",stringa);

j=strlen(stringa)-1;
    for(i=0;i<strlen(stringa)/2;i++){
       if(stringa[0]!=stringa[j]){
        ok=0;
       }
       else{
        if(stringa[i]==stringa[j]){
            ok=1;
        }
    }


}
if(ok){
    printf("stringa palindroma");

}
else{
    printf("non palindroma");
}
    return 0;
}
