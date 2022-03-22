#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cumlem[100];
    char *p1,*p2;


    printf("Lutfen maksimum 100 karakterli bir cumle giriniz.\n");
    gets(cumlem);
    for(p2=cumlem;*p2;p2++)
    {
    }
    p2--;
    for(p1=cumlem;p1<p2;p1++,p2--)
    {
        if(*p1 != *p2)
        {
            GEREKSÝZ ZOR
        }

    }


    return 0;
}
