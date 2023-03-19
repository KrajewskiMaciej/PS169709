#include <stdio.h>
#include <stdlib.h>

int potega(int n)
{
    int wynik=1;
    for(int i=0;i<n;i++)
    {
        wynik=wynik*2;
    }
    return wynik;
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);

    printf("Potega liczby 2^%d, wynosi: %d",n,potega(n));
}
