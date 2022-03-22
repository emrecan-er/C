#include <stdio.h>
#include <stdlib.h>

int main()
{
    int kucukharf[26]={0},i=0,encok;
    char cumle[150],harf;
    printf("Lutfen bir cumle giriniz.\n");
    gets(cumle);
    while(cumle[i])
    {
        if(cumle[i]>='a' && cumle[i]<='z')

        {
            kucukharf[cumle[i]-'a']++;
        }
        i++;

    }

    encok=kucukharf[0];
    for(i=0;i<26;i++)
    {
        if(kucukharf[i] !=0)
        {
            if(kucukharf[i]>encok)
            {
                encok=kucukharf[i];
                harf=i+'a';
            }
        }
    }
    printf("En cok kullanilan harf  = %c",harf);
    return 0;
}
