#include <stdio.h>
#include <stdlib.h>

int sumakwadratow(unsigned int n)
{
    int wynik=0;
    for(int i=0;i<=n;i++)
    {
        wynik=wynik+(i*i);
    }
    return wynik;
}

int main()
{
    unsigned int n;
    printf("Podaj liczbe n: ");
    scanf("%d",&n);

    printf("Suma kwadratow liczb od 0 do %d, wynosi %d",n,sumakwadratow(n));
}
