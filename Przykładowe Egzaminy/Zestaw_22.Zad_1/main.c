#include <stdio.h>
#include <stdlib.h>
/*
Dane s� nast�puj�ce wyrazy i znaki:
int void int fun w w2 * , * ( )
U�� je we w�a�ciwej kolejno�ci, aby otrzyma� nag��wek funkcji fun, kt�rej argumentami s�
dwa wska�niki. Nast�pnie dodaj dowoln� implementacj� funkcji i stw�rz dla niej przypadek
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
