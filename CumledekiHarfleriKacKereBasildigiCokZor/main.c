#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    int sayma[26]={0},emrecan,karakter=0,i;
    printf("Lutfen bir text giriniz ve enter'a basiniz.\n");
    while((c=getchar())!='\n')
    {
        emrecan=c-'a';
        if(emrecan>=0 && emrecan<26)
        {
            sayma[emrecan]++;
        }
        else
        {
            karakter++;
        }
    }
    printf("Girdiginiz text %d karakterden olusuyor.\n",karakter);
    for(i=0;i<26;i++)
    {
        printf("%d kez %c \n",sayma[i],'a'+i);
    }



    return 0;
}
