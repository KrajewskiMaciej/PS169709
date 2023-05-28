#include <stdio.h>
#include <stdlib.h>

void zwolnij(unsigned int n, unsigned int m, int **t)
{
    int i;
    for(i=0;i<n;i++)
    {
        free(t[i]);
    }
    free(t);
}

int main()
{

    int n = 3;
    int m = 4;
    int** tab = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i) {
        tab[i] = (int*)malloc(m * sizeof(int));
    }

    zwolnij(n,m,tab);
    return 0;
}
