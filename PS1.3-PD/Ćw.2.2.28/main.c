#include <stdio.h>
#include <stdlib.h>

int funkcja(unsigned int n,unsigned int m)
{
    if(m==0)
        return n;
    else if(n==m)
        return n,m;
    else
        return n-m+funkcja(n-1,m)+funkcja(n,m-1);

}

int main()
{
    unsigned int n;
    unsigned int m;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);

    printf("Funkcja liczb (%d,%d),wynosi: %d",n,m,funkcja(n,m));
}
