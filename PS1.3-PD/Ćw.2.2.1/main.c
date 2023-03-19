#include <stdio.h>
#include <stdlib.h>

int bezwzgledna(int n)
{
    if(n<0)
    {
        n=n*(-1);
    }
    return n;
}

int main()
{
    int n;
    printf("Podaj n: ");
    scanf("%d",&n);

    printf("Wartosc bezwzgledna liczby %d wynosi: %d",n,bezwzgledna(n));
}
