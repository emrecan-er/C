#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,degisken_a=0;
    for(i=0;i<10;i++)
    {
        if(degisken_a%2==0)
        {
            printf("degisken a degeri %d\n",++degisken_a);
        }
        else
        {
          printf("degisken a degeri %d\n",degisken_a++);
        }
    }





    return 0;
}
