#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiujn(char nap1[], char nap2[], int n)
{
    strncat(nap2,nap1,n);
    printf(nap2);
    printf("\n");
}

void kopiujn2(wchar_t nap1[], wchar_t nap2[], int n) {
    int i;
    for (i = 0; i < n && nap1[i] != L'\0'; i++) {
        nap2[i] = nap1[i];
    }
    nap2[i] = L'\0';
}

int main()
{
    char a[]="kajak";
    char b[]="jdsffdsfsdf";
    kopiujn(a,b,10);
    wchar_t c[]=L"kajak";
    wchar_t d[]=L"alamakota";
    kopiujn2(c,d,3);
    return 0;
}
