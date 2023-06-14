#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
Napisz struktur� Album z polami nazwa (tablica znak�w d�ugo�ci 100) oraz
liczba_utworow (typu int). Nast�pnie napisz funkcje i wywo�aj ka�d� z nich co najmniej
jeden raz (upewniaj�c si�, �e to mo�liwe):
a) initAlbum - funkcja przyjmuje dwa argumenty: nazw� albumu i liczb� utwor�w, i zwraca
wska�nik na nowo-utworzon� struktur� ustawiaj�c� sk�adowe z przekazanych argument�w.
Dodatkowo funkcja powinna sprawdzi�, aby nazwa albumu by�a napisem d�ugo�ci
co najmniej 3 i liczba utwor�w wi�ksza ni� 1. W przypadku nie spe�nienia jednego z
warunk�w, funkcja powinna zwraca� NULL.
b) dodajUtwory - funkcja, kt�rej argumentem jest wska�nik do struktury typu Album. Funkcja
ma doda� 5 do liczby utwor�w w przekazanym argumencie.
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
