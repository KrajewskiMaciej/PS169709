#include <stdio.h>
#include <stdlib.h>

int *zmien(unsigned int n)
{
    return malloc(n*sizeof(int));
}

int main()
{
    printf("%d.",zmien(8));
    return 0;
}
