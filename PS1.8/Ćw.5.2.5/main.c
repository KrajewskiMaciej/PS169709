#include <stdio.h>
#include <stdlib.h>

void przepisz(char napis1[],char napis2[])
{
    int i=0;
    while(napis1[i]!='\0')
    {
        napis2[i]=napis1[i];
    i++;}
    printf("%s\n",napis2);
}

void przepisz2(wchar_t napis1[],wchar_t napis2[])
{
    int i=0;
    while(napis1[i]!='\0')
    {
        napis2[i]=napis1[i];
    i++;}
    wprintf(L"%s\n",napis2);
}


int main()
{
    char tab1[] = {'B', 'a', 's', 'i', 'a','\0'};
    char tab2[]="Kasia";
    przepisz(tab1,tab2);
    wchar_t tab3[] ={'W', 'a', 's', 'i', '1','\0'};
    wchar_t tab4[]=L"Kasia";
    przepisz2(tab3,tab4);
}
