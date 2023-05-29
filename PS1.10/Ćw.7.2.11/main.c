#include <stdio.h>
#include <stdlib.h>

union Liczba {
    int liczba_calkowita;
    float liczba_wymierna;
};

struct Dane {
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj_dane() {
    struct Dane dane;

    printf("Wybierz typ liczby (0 - calkowita, 1 - wymierna): ");
    scanf("%d", &dane.tp);

    if (dane.tp == 0) {
        printf("Podaj liczbe calkowita: ");
        scanf("%d", &dane.zaw.liczba_calkowita);
    } else if (dane.tp == 1) {
        printf("Podaj liczbe wymierna: ");
        scanf("%f", &dane.zaw.liczba_wymierna);
    } else {
        printf("Nieprawidlowy wybor.\n");
    }

    return dane;
}

int main() {

    struct Dane dane = wczytaj_dane();

    if (dane.tp == 0) {
        printf("Wczytana liczba calkowita: %d\n", dane.zaw.liczba_calkowita);
    } else if (dane.tp == 1) {
        printf("Wczytana liczba wymierna: %f\n", dane.zaw.liczba_wymierna);
    }

    return 0;
}

