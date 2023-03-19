#include <stdio.h>
#include <stdlib.h>

int suma(const int *a, const int *b)
{
    return *a+*b;
}

int main()
{
    int x=6,y=3;
    printf("%i\n",suma(&x,&y));
    return 0;
}
