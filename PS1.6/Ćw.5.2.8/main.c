#include <stdio.h>
#include <stdlib.h>

void maleduze(char *nap)
{
    int i;
    for(i=0;nap[i]!=0;i++)
    {
        if((nap[i]>='a')&&(nap[i]<='z'))
        {
            nap[i]-=('a'-'A');
        }
    }
    printf(nap);
}


int main()
{
    char a[]="kaJaK";
    maleduze(a);
    return 0;
}
