#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}

int dlugosc2(wchar_t napis[])
{
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}

char kopiujn(char nap1[],char nap2[], int n)
{
    int j=dlugosc(nap2);
    int i;
    for(i=0;i<n+1;i++)
    {
        if(i<n){
        nap2[j+i]=nap1[i];
        }
        else
        {
            nap2[j+i]='\0';
        }
    }
    printf("%s\n",nap2);
}

wchar_t kopiujn2(wchar_t nap1[],wchar_t nap2[], int n)
{
    int j=dlugosc2(nap2);
    int i;
    for(i=0;i<n+1;i++)
    {
        if(i<n){
        nap2[j+i]=nap1[i];
        }
        else
        {
            nap2[j+i]='\0';
        }
    }
    wprintf(L"%s\n",nap2);
}

int main()
{
    char tab1[] ={'B', 'a', 's','\0'};
    char tab2[]="Kasiawasie";
    kopiujn(tab1,tab2,3);
    wchar_t tab3[] ={'B', 'w', 's','\0'};
    wchar_t tab4[] = L"Kasiawasie";
    kopiujn2(tab3,tab4,3);
}
