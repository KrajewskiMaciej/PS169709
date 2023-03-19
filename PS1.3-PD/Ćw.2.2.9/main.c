#include <stdio.h>
#include <stdlib.h>

int potega(int a,int b)
{
    int wynik=1;
    for(int i=0;i<b;i++)
    {
        wynik=wynik*a;
    }
    return wynik;
}

int pierwiastek(int m,unsigned int n)
{
    for(int i=1;i<m;i++)
    {
        if(potega(i,n)==m)
        {
            return i;
        }
    }
}

int main()
{
    int m;
    unsigned int n;
    printf("Podaj liczbe m>1: ");
    scanf("%d",&m);
    printf("podaj n: ");
    scanf("%d",&n);

    printf("Pierwiastek %d stopnia z liczby %d, wynosi: %d",n,m,pierwiastek(m,n));
}
