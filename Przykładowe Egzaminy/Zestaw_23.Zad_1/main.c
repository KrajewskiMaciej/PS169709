#include <stdio.h>
#include <stdlib.h>
/*
Dane s¹ nastêpuj¹ce wyrazy i znaki:
void int float const foo a b ( ) , *
U³ó¿ je we w³aœciwej kolejnoœci, aby otrzymaæ nag³ówek funkcji foo, której argumentami
s¹ kolejno wskaŸnik na sta³¹ wartoœæ int oraz liczba wymierna. Nastêpnie dodaj dowoln¹
implementacjê funkcji i stwórz dla niej przypadek testowy.
*/

void foo(const int* a, float b)
{
    if((const)a>b){
        printf("Wieksza jest liczba: %.2f",a);
    }
    else{
        printf("Wieksza jest liczba: %.2f",b);
    }
}

int main()
{
    const int a=25;
    float b=125.35789;

    foo(a,b);

    return 0;
}
