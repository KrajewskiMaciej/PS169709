#include <stdio.h>
#include <stdlib.h>

int indeks(int n)
{
    if(n==1)
        return 1;
    else
    {
        if(n%2==0)
            return indeks(n-1)+n;
        else
            return indeks(n-1)*n;
    }
}

int main()
{
    unsigned int n;
    printf("Podaj n: ");
    scanf("%d",&n);

    printf("Wartosc elementu a o indeksie %d: %d",n,indeks(n));
}
