#include <stdio.h>
#include <stdlib.h>
/*
Dane s� nast�puj�ce wyrazy i znaki:
void int float const foo a b ( ) , *
U�� je we w�a�ciwej kolejno�ci, aby otrzyma� nag��wek funkcji foo, kt�rej argumentami
s� kolejno wska�nik na sta�� warto�� int oraz liczba wymierna. Nast�pnie dodaj dowoln�
implementacj� funkcji i stw�rz dla niej przypadek testowy.
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
