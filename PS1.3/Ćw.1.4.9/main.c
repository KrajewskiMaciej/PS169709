#include <stdio.h>
#include <stdlib.h>

int dzielnik(unsigned int n, unsigned int m)
{
    int wynik=0;
    int i=0;
    if(n<m)
    {
        i=m;
    }
    if(m<n)
    {
        i=n;
    }

    for(i;i>0;i--)
    {
        if((n%i==0)&&(m%i==0))
        {
            wynik=i;
            break;
        }

    }

    return wynik;
}

int main()
{
    unsigned int n;
    unsigned int m;
    printf("podaj liczbe n: ");
    scanf("%d",&n);
    printf("Podaj liczbe m: ");
    scanf("%d",&m);

    printf("Najwiekszy wspolny dzielnik liczb %d i %d, wynosi: %d",n,m,dzielnik(n,m));
}
