#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcj�, kt�rej argumentem jest liczba ca�kowita przekazana jako napis. Funkcja
ma zwr�ci� sum� cyfr nieparzystych liczby przekazanej jako argument funkcji. Stw�rz
przypadek testowy.
Przyk�ad: dla �34821� ma by� zwr�cone 4.
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
