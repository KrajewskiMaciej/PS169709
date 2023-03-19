#include <stdio.h>
#include <stdlib.h>

int foo(const int* a, int* const b)
{
    *b=*a;
}

int main()
{
    int i=88;
    const int ci=123;
    const int* ToConst=&i;
    int* const ToInt=&ci;

    foo(ToConst,ToInt);
    printf("%d\n",*ToInt);
    return 0;
}
