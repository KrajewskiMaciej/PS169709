#include <stdio.h>
#include <stdlib.h>

void a(unsigned int n,int tab1[],int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        tab3[i]=tab1[i]+tab2[i];
    }
}

void b(unsigned int n,int tab1[],int tab2[], int tab3[])
{
    for(int i=0;i<n;i++)
    {
        if(tab1[i]>tab2[i])
            tab3[i]=tab1[i];
        else
            tab3[i]=tab2[i];
    }
}
void wypisz(unsigned int n,int tab[])
{
    for(int i=0;i<n;i++)
    {
        printf("%i, ",tab[i]);
    }
    printf("\n");
}

int c(unsigned int n,int tab1[],int tab2[], int tab3[])
{
    int tab11[6];
    int tab22[6];
    int tab33[6];
    for(int i=0;i<n;i++)
    {
        tab33[i]=tab1[i];
        tab11[i]=tab2[i];
        tab22[i]=tab3[i];

    }

    tab1[6]=tab11[6];
    tab2[6]=tab22[6];
    tab3[6]=tab33[6];
}



int main()
{
    int tab1[6]={1,2,3,4,5,6};
    int tab2[6]={2,4,6,8,10,12};
    int tab3[6]={0,0,0,0,0,0};

    a(6,tab1,tab2,tab3);
    wypisz(6,tab1);
    wypisz(6,tab2);
    wypisz(6,tab3);
    printf("\n");

    b(6,tab1,tab2,tab3);
    wypisz(6,tab1);
    wypisz(6,tab2);
    wypisz(6,tab3);
    printf("\n");

    c(6,tab1,tab2,tab3);
    wypisz(6,tab1);
    wypisz(6,tab2);
    wypisz(6,tab3);
    printf("\n");
}

/*
Napisz funkcj�, kt�ra otrzymuje cztery argumenty: dodatni� liczb�
ca�kowit� n oraz trzy n-elementowe tablice tab1, tab2 i tab3 o elementach typu int, i:
a) przypisuje elementom tablicy tab3 sum� odpowiadaj�cych im element�w tablic tab1 i tab2 (do kom�rki tablicy tab3 o indeksie i
powinna trafi� suma element�w tab1[i] i tab2[i]),
b) przypisuje elementom tablicy tab3 wi�kszy spo�r�d odpowiadaj�cych im element�w tablic tab1 i tab2 (do kom�rki tablicy tab3
o indeksie i powinien trafi� wi�kszy spo�r�d element�w tab1[i]
i tab2[i]),
c) przypisuje zawarto�� tablicy tab1 do tablicy tab2, zawarto�� tablicy tab2 do tablicy tab3 oraz zawarto�� tablicy tab3 do tablicy
tab1.
*/
