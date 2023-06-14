#include <stdio.h>
#include <stdlib.h>
/*
Dane s¹ nastêpuj¹ce wyrazy i znaki:
int void int fun w w2 * , * ( )
U³ó¿ je we w³aœciwej kolejnoœci, aby otrzymaæ nag³ówek funkcji fun, której argumentami s¹
dwa wskaŸniki. Nastêpnie dodaj dowoln¹ implementacjê funkcji i stwórz dla niej przypadek
testowy.
*/

void fun(int* w, int* w2)
{
    int wynik= *w + *w2;

    printf("Wynik: %d", wynik);
}

int main()
{
    int tab1=5;
    int tab2=7;

    fun(&tab1,&tab2);

    return 0;
}
