#include <stdio.h>
#include <stdlib.h>

double* skopiuj(int n, double* tab) {

    double* kopia = malloc(n * sizeof(double));

    for (int i = 0; i < n; i++) {
        kopia[i] = tab[i];
    }

    return kopia;
}

int main() {
    int n = 5;
    double tab[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    printf("%i\n",tab);

    double* kopia = skopiuj(n, tab);

    printf("%i\n",kopia);

    free(kopia);

    return 0;
}
