#include <stdio.h>
#include <stdlib.h>

void wypelnij(int n,int m,int** t)
{
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            t[i][j] = 0;
        }
    }

}

int main()
{

    int n = 3;
    int m = 4;
    int** tab = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i) {
        tab[i] = (int*)malloc(m * sizeof(int));
    }

    wypelnij(n,m,tab);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }

    return 0;
}
