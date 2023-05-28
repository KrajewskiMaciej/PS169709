#include <stdio.h>
#include <stdlib.h>

void zwolnij(int n,int t[][n])
{
    free(t);
}

int main()
{

    int n = 3;
    int m = 4;
    int tab[n][m];

    zwolnij(n,tab);
    return 0;
}
