#include <stdio.h>
#include <stdlib.h>

int iloczyn(int n, int m)
{
    int wynik=n;
    for(int i=n+1;i<m;i++)
    {
        wynik*=i;
    }
    wynik*=m;
    return wynik;
}

int main()
{
    int n;
    int m;
    printf("Podaj liczbe n:");
    scanf("%d",&n);
    printf("Podaj liczbe m:");
    scanf("%d",&m);

    printf("Iloczyn liczb od %d do %d, wynosi %d",n,m,iloczyn(n,m));
}
