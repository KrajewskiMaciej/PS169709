#include <stdio.h>
#include <stdlib.h>

int *zmien(unsigned int n)
{
    return (float*)malloc(n);
}

int main()
{
    printf("%d.",zmien(32));
    return 0;
}
