#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Napisz strukturê Album z polami nazwa (tablica znaków d³ugoœci 100) oraz
liczba_utworow (typu int). Nastêpnie napisz funkcje i wywo³aj ka¿d¹ z nich co najmniej
jeden raz (upewniaj¹c siê, ¿e to mo¿liwe):
a) initAlbum - funkcja przyjmuje dwa argumenty: nazwê albumu i liczbê utworów, i zwraca
wskaŸnik na nowo-utworzon¹ strukturê ustawiaj¹c¹ sk³adowe z przekazanych argumentów.
Dodatkowo funkcja powinna sprawdziæ, aby nazwa albumu by³a napisem d³ugoœci
co najmniej 3 i liczba utworów wiêksza ni¿ 1. W przypadku nie spe³nienia jednego z
warunków, funkcja powinna zwracaæ NULL.
b) dodajUtwory - funkcja, której argumentem jest wskaŸnik do struktury typu Album. Funkcja
ma dodaæ 5 do liczby utworów w przekazanym argumencie.
*/

struct Album{
    char nazwa[100];
    int liczba_utworow;
};

struct Album* initAlbum(const char* nazwa, int liczba_utworow)
{
    if(strlen(nazwa)<3||liczba_utworow<=1){
        return NULL;
    }

    struct Album* nowy_album=(struct Album*)malloc(sizeof(struct Album*));
    strcpy(nowy_album->nazwa,nazwa);
    nowy_album->liczba_utworow=liczba_utworow;

    return nowy_album;
}

void dodajUtwory(struct Album* album)
{
    album->liczba_utworow+=5;
}

int main()
{
    struct Album* album= initAlbum("Nowy Album", 12);

    printf("Utworzono album o nazwie: %s\n",album->nazwa);
    printf("Ilosc piosenek w albumie: %i\n", album->liczba_utworow);

    dodajUtwory(album);
    printf("Po dodaniu utworow: %i\n", album->liczba_utworow);

    return 0;
}
