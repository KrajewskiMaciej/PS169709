#include <stdio.h>
#include <stdlib.h>

int *zmien()
{
    return malloc(sizeof(int));
}

int main()
{
    printf("%d.",zmien());
    return 0;
}
