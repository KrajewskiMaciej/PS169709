#include <stdio.h>
#include <stdlib.h>

int wielokrotnosci(unsigned int n,unsigned int m)
{
    int tmp=n;
    while(tmp<m)
    {
        printf("%d\n",tmp);
        tmp*=n;
    }
    return 0;
}

int main()
{
    unsigned int n;
    unsigned int m;

    printf("Podaj n: ");
    scanf("%d",&n);
    printf("Podaj m: ");
    scanf("%d",&m);

    wielokrotnosci(n,m);
}
