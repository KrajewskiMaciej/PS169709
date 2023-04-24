#include <stdio.h>
#include <stdlib.h>

int CzyPodzielne(int n, int m, int k)
{
    int wynik;

    if (m%n==0 && m%k==0)
    {
        wynik=2;
    }
    else if (m%n==0 || m%k==0)
    {
        wynik=1;
    }
    else
    {
        wynik=0;
    }
    return wynik;
}

int main()
{
    printf("%i", CzyPodzielne(2,8,3));
}
