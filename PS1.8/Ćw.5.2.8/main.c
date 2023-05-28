#include <stdio.h>
#include <stdlib.h>

void maleduze(char *nap )
{
    int i;
    for(i=0;nap[i]!=0;i++)
        if((nap[i]>='a')&&(nap[i]<='z'))
            nap[i]-=('a'-'A');
}

int main()
{
    char napis[]="Ala ma kota, a kot ma Ale";
    maleduze(napis);
    printf("%s\n",napis);
}
