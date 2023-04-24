#include <stdio.h>
#include <stdlib.h>

double* wskaznik(int n)
{
    double* tab;
    tab=(double*)malloc(n*sizeof(double));
    return &tab[0];
}

int main()
{
    printf("Wskaznik: %i",wskaznik(5));
}
