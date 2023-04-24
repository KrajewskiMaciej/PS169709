#include <stdio.h>
#include <stdlib.h>

void a(unsigned int n,double tab1[],double tab2[],double tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
    }
    for(int i=0;i<n;i++)
    {
        tab3[i+n]=tab2[i];
    }
}

void b(unsigned int n,double tab1[],double tab2[],double tab3[])
{
    for(int i=0;i<n*2;i++)
    {
        if(i%2==0)
        {
            tab3[i]=tab2[i/2];
        }
        else
        {
            tab3[i]=tab1[i/2];
        }
    }
}

void wypisz(unsigned int n,double tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%.2f, ",tab[i]);
    }
    printf("\n");
}

int main()
{
    double tab1[6]={1,2,3,4,5,6};
    double tab2[6]={2,4,6,8,10,12};
    double tab3[12]={0,0,0,0,0,0,0,0,0,0,0,0};

    a(6,tab1,tab2,tab3);
    wypisz(6,tab1);
    wypisz(6,tab2);
    wypisz(12,tab3);
    printf("\n");

    b(6,tab1,tab2,tab3);
    wypisz(6,tab1);
    wypisz(6,tab2);
    wypisz(12,tab3);
    printf("\n");

}

/*
Napisz funkcjê, która otrzymuje cztery argumenty: dodatni¹ liczbê
ca³kowit¹ n, n-elementowe tablice tab1 i tab2 oraz 2 · n-elementow¹
tablicê tab3 o elementach typu double.
a) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy tab3 w taki sposób, ¿e na pocz¹tku tablicy tab3 powinny siê
znaleŸæ elementy tablicy tab1, a po nich elementy tablicy tab2.
b) Funkcja powinna przepisywaæ zawartoœæ tablic tab1 i tab2 do tablicy tab3 w taki sposób, ¿e w komórkach tablicy tab3 o nieparzystych indeksach powinny siê znaleŸæ elementy tablicy tab1,
a w komórkach tablicy tab3 o parzystych indeksach elementy tablicy tab2.
*/
