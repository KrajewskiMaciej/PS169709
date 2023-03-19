#include <stdio.h>
#include <stdlib.h>

int *zmien(unsigned int n)
{
    double blok = malloc(n*sizeof(float));
    return *blok;
}

int main()
{
    printf("%d.",zmien(32));
    return 0;
}
