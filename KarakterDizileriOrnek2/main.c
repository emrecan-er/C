#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
   char dizi1[100][100]={"bir","iki","uc","dort","bes"};
   printf("Dizimin dorduncu elemani %s\n",dizi1[3]);
   printf("Dorduncu elemanin ucuncu harfi %c\n",dizi1[3][2]);
    return 0;
}
