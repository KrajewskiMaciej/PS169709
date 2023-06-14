#include <stdio.h>
#include <stdlib.h>
/*
Stwórz strukturê Kierowca o dwóch polach imie (napis) oraz rekord (dowolny typ
ca³kowity). Nastêpnie stwórz funkcjê, której argumentami jest tablica struktur Kierowca
oraz rozmiar tablicy. Funkcja ma zwróciæ imiê kierowcy z najgorszym (najmniejszym liczbowo)
wynikiem (w przypadku kilku równych wyników, ma zwróciæ wynik ostatniego). Stwórz
przypadek testowy.
*/

struct Kierowca{
    char imie[25];
    int rekord;
};

char* najgorszy_wynik(struct Kierowca* kierowcy, int  n)
{
    int najmniejszy=0;

    for(int i=1; i<n;i++)
    {
        if(kierowcy[i].rekord<=kierowcy[najmniejszy].rekord)
        {
            najmniejszy=i;
        }
    }

    return kierowcy[najmniejszy].imie;
}

int main()
{
    struct Kierowca kierowcy[5];

    strcpy(kierowcy[0].imie, "Adam");
    kierowcy[0].rekord=150;

    strcpy(kierowcy[1].imie, "Damian");
    kierowcy[1].rekord=250;

    strcpy(kierowcy[2].imie, "Piotrek");
    kierowcy[2].rekord=120;

    strcpy(kierowcy[3].imie, "Dawid");
    kierowcy[3].rekord=120;

    strcpy(kierowcy[4].imie, "Filip");
    kierowcy[4].rekord=180;

    char* najgorszy = najgorszy_wynik(kierowcy, 5);

    printf("Kierowca z najgorszym wynikiem: %s\n",najgorszy);

    return 0;
}
