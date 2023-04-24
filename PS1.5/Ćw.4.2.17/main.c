#include <stdio.h>
#include <stdlib.h>
double* kopia(unsigned int n, double tab[])
{
    double nowa[n];
    for(int i=0;i<n;i++)
    {
        nowa[i]=tab[i];
    }

    double* wynik=&nowa;
    return wynik;
}

int main()
{
    double tab[6]={1.23,12,421,6,1.5421,7};

    printf("Wskaznik: %i\n",*tab);
    printf("Wzkaznik do kopii: %i\n",kopia(6,tab));
}
