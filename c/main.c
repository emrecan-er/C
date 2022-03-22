#include <stdio.h>
#include <stdlib.h>
int main()
{
    char cumle[100];
    int i=0,j=0;
    printf("Lutfen bir kelime giriniz \n");
    gets(cumle);
   while(i<strlen(cumle))
   {
       while(j<=i)
       {
           printf("%c",cumle[j]);
           j++;
       }
       printf("\n");
       i++;
   }
    return 0;
}
