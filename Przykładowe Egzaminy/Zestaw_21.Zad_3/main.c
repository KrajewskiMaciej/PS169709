#include <stdio.h>
#include <stdlib.h>
/*
Stw�rz typ wyliczeniowy Kwiat przechowuj�cy gatunki kwiat�w. Nast�pnie stw�rz
program zawieraj�cy tablic� 5 element�w typu Kwiat. Wypisz na konsoli zawarto�� tablicy
u�ywaj�c instrukcji warunkowej i p�tli.
*/

typedef enum {
    Roza,
    Tulipan,
    Fiolet,
    Stokrotka,
    Lilia,
    Przebisnieg
} Kwiat;

int main()
{
    Kwiat kwiaty[5]={Roza,Tulipan,Stokrotka,Lilia,Fiolet};

    printf("Zawartosc tablicy kwiaty:\n");

    for(int i=0;i<5;i++)
    {
        switch (kwiaty[i]){
            case Roza:
                printf("Kwiat %d: Roza\n", i+1);
                break;
            case Tulipan:
                printf("Kwiat %d: Tulipan\n", i+1);
                break;
            case Stokrotka:
                printf("Kwiat %d: Stokrotka\n", i+1);
                break;
            case Lilia:
                printf("Kwiat %d: Lilia\n", i+1);
                break;
            case Fiolet:
                printf("Kwiat %d: Fiolet\n", i+1);
                break;
            case Przebisnieg:
                printf("Kwiat %d: Przebisnieg\n",i+1);
                break;
            default:
                printf("Kwiat %d: Nieznany\n", i+1);
        }
    }
}
