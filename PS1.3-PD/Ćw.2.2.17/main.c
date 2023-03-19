#include <stdio.h>
#include <stdlib.h>

void zlicz()
{
    static unsigned int liczba =0;
        liczba++;
        printf("Funkcja zostala wywolana %d razy\n",liczba);
}

int main()
{
    zlicz();
}
