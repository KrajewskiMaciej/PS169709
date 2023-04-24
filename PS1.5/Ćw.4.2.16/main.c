#include <stdio.h>
#include <stdlib.h>

int usun(double *tab[])
{
    free(*tab);

}

int main()
{
    double* tab;
    tab=(double*)malloc(5*sizeof(double));

    printf("Dane: %i\n",tab);
    printf("Dane: %i\n",usun(tab));

}
