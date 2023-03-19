#include <stdio.h>
#include <stdlib.h>

int mniejsza(int *a, int *b)
{
    return(*a>*b) ? b:a;
}

int main()
{
    int x=10,y=3;
    printf("%d.\n",mniejsza(&x,&y));
    x=2;
    y=5;
    printf("%d.\n",mniejsza(&x,&y));
    return 0;
}
