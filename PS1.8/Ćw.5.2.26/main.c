#include <stdio.h>
#include <stdlib.h>

void maleduze(char *nap)
{
    int i;
    for(i=0;nap[i]!=0; i++)
    {
        nap[i]=toupper(nap[i]);
    }
}

void maleduze2(wchar_t *nap)
{
    int i;
    for (i=0;nap[i]!=0;i++)
    {
        nap[i]=towupper(nap[i]);
    }
}

int main()
{
    char napis[]="Hello World";
    wchar_t napis2[]=L"Witaj Swiecie";

    maleduze(napis);
    maleduze2(napis2);

    printf("%s\n",napis);
    wprintf(L"%s\n",napis2);
}
