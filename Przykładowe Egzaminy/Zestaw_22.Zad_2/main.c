#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcjê, której argumentem jest liczba ca³kowita przekazana jako napis. Funkcja
ma zwróciæ sumê cyfr nieparzystych liczby przekazanej jako argument funkcji. Stwórz
przypadek testowy.
Przyk³ad: dla “34821” ma byæ zwrócone 4.
*/

int suma(const char *liczba)
{
    int wynik=0;
    int i=0;

    while(liczba[i]!='\0')
    {
        int tmp=liczba[i]-'0';

        if(tmp%2 !=0)
        {
            wynik+=tmp;
        }
        i++;
    }

    return wynik;
}

int main()
{
    const char *liczba="34821";

    printf("Wynik: %i \n", suma(liczba));

    return 0;
}
