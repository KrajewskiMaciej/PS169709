#include <stdio.h>
#include <stdlib.h>

int suma(int n,int*** tab)
{
    int wynik=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<100;j++){
            for(int k=0;k<100;k++)
            {
                wynik+=tab[i][j][k];
            }
        }
    }
    return wynik;
}

int main()
{
    int n=50;
    int*** tab = (int***)malloc(n * sizeof(int**));
    for (int i = 0; i < n; i++) {
        tab[i] = (int**)malloc(100 * sizeof(int*));
        for (int j = 0; j < 100; j++) {
            tab[i][j] = (int*)malloc(100 * sizeof(int));
        }
    }


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 100; j++) {
            for (int k = 0; k < 100; k++) {
                tab[i][j][k] = i + j + k;
            }
        }
    }

    printf("%d",suma(n,tab));

    return 0;
}
