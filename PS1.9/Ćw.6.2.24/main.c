#include <stdio.h>
#include <stdlib.h>

void wypisz(int** tab,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%i ",tab[i][j]);
        }
        printf("\n");
    }
}

void zamienKol(int** tab, int n, int m) {

      int i, j, tmp;

    for (i = 0; i < n; i++) {
        tmp = tab[i][m-1];

        for (j = m; j!=0; j--) {
            tab[i][j] = tab[i][j-1];
        }
        tab[i][0] = tmp;
    }
}

int main() {

    int n = 3;
    int m = 4;
    int** tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
        for (int j = 0; j < m; j++) {
            tab[i][j] = i * m + j + 1;
        }
    }

    printf("Oryginalna tablica:\n");
    wypisz(tab,n,m);

    zamienKol(tab, n, m);

    printf("Tablica po przesunieciu kolumn:\n");
    wypisz(tab,n,m);
    return 0;
}
