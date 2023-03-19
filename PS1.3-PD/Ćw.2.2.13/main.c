#include <stdio.h>
#include <stdlib.h>

int pierw(unsigned int x)
{
    int pocz=0,kon=x,sr;
    while(kon-pocz>1)
    {
        sr=(pocz+kon)/2;
        if(sr*sr<=x)
            pocz=sr;
        else
            kon=sr;
    }
    if(x<=1)
        return kon;
    else
        return pocz;
}

void wypisz_a(unsigned int n)
{
    int i,p;
    for(i=1;i<=pierw(n);i++)
    {
        p=pierw(n-i*i);
        if((p!=0)&&(i*i+p*p==n))
            printf("%d*%d+%d*%d=%d\n",i,i,p,p,n);
    }
}

void wypisz_b(unsigned int n)
{
    int i,p;
    for(i=1;i<=pierw(n);i++)
    {
        p=pierw(n-i*i);
        if((i*i+p*p==n)&&(i<p))
            printf("%d*%d+%d*%d=%d\n",i,i,p,p,n);
    }
}

int main()
{
    unsigned int n;
    printf("Podaj n: ");
    scanf("%d",&n);
    printf("a^2+b^2 i b^2+a^2 to dwa rozne rozklady:\n");
    wypisz_a(n);
    printf("\n");
    printf("a^2+b^2 i b^2+a^2 to te same rozklady:\n");
    wypisz_b(n);
}
