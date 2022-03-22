#include <stdio.h>
#include <stdlib.h>

int main()
{
    char emre[100];
    char *pointer;
    printf("Lutfen bir karakter dizisi giriniz.\n");
    gets(emre);
    for(pointer=emre;*pointer;*pointer++)
    {

    }
    printf("Karakter Dizimiz '%s' %d kadar karakterden olusmaktadir",emre,pointer-emre);

    return 0;
}
