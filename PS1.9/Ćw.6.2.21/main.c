#include <stdio.h>
#include <stdlib.h>

void wypisz(int** tab,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%i",tab[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void pom(unsigned int n, int* tab)
{
    int i,p;
    for(i=0;i<n/2;i++){
        p=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=p;
    }
}

void odwroc(int** tab,int n,int m)
{
    int i,j;
    for(i=0;i<n;i++){
        pom(m, tab[i]);
    }
}



int main()
{
    int n = 3;
    int m = 4;

    int** tab = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tab[i] = (int*)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = i + j;
        }
    }

    wypisz(tab,n,m);

    odwroc(tab,n,m);

    wypisz(tab,n,m);
}
