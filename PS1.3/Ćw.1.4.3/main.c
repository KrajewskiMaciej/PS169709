#include <stdio.h>
#include <stdlib.h>

int mniejszeWieksze(unsigned int n, unsigned int m, unsigned int k)
{
    int tmp=n;
    while(tmp<m)
    {
        tmp*=n;
    }
    while((tmp>m) && (tmp<k))
    {
        printf("%d\n",tmp);
        tmp*=n;
    }
}

int main()
{
    unsigned int n;
    unsigned int m;
    unsigned int k;
    printf("Podaj n:");
    scanf("%d",&n);
    printf("Podaj m:");
    scanf("%d",&m);
    printf("Podaj k:");
    scanf("%d",&k);

    mniejszeWieksze(n,m,k);
}
