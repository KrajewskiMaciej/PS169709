#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    return(*a>*b) ? *b : *a;
}

int main()
{
    int x=6,y=3;
    printf("%i\n",mniejsza(&x,&y));
    x=2;
    y=6;
    printf("%i\n",mniejsza(&x,&y));
    return 0;
}
