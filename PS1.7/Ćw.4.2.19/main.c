
#include <stdio.h>
#include <stdlib.h>

int* niezerowe(int n, int* tab1, int* rozmiar) {

    int niezerowe = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            niezerowe++;
        }
    }

    int* tab2 = malloc(niezerowe * sizeof(int));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (tab1[i] != 0) {
            tab2[j] = tab1[i];
            j++;
        }
    }

    *rozmiar = niezerowe;

    int wskaznik=tab2[0];

    return wskaznik;
}

int main() {
    int n = 8;
    int tablica1[] = {0, 2, 0, 4, 0, 6, 0, 8};
    int rozmiar = 0;

    int* tablica2 = niezerowe(n, tablica1, &rozmiar);

    printf("Wskaznik: %d ", &tablica2);

    return 0;
}
