#include <stdio.h>
#include <stdlib.h>

int indeks(unsigned int n)
{
    if(n==0)
        return 1;
    else
        return 2*indeks(n-1)+5;
}

int main()
{
    unsigned int n;
    printf("Podaj n: ");
    scanf("%d",&n);

    printf("Wartoœc elementu a o indeksie %d: %d",n,indeks(n));
}
