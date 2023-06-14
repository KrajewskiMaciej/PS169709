#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcjê, która przyjmuje jako argument dwie niepuste listy z g³ow¹ o elementach
typu:
struct element {
int x;
struct element * next;
};
Funkcja ma zwróciæ sumê elementów z drugiej listy wiêkszych ni¿ maksimum pierwszej listy.
Stwórz przypadek testowy.
*/

struct element{
    int x;
    struct element * next;
};

int suma(struct element* lista1, struct element* lista2)
{
    int max_lista1 = lista1->x;
    struct element* aktualny = lista1->next;

    while(aktualny!=NULL)
    {
        if(aktualny->x > max_lista1)
        {
            max_lista1=aktualny->x;
        }
        aktualny=aktualny->next;
    }

    int suma=0;
    aktualny=lista2;

    while(aktualny!=NULL)
    {
        if(aktualny->x>max_lista1)
        {
            suma +=aktualny->x;
        }
        aktualny = aktualny->next;
    }

    return suma;
}

struct element* utworz(int w)
{
    struct element* nowy=(struct element*)malloc(sizeof(struct element*));
    nowy->x=w;
    nowy->next =NULL;
    return nowy;
}

void dodaj(struct element* lista, int w)
{
    struct element* nowy=utworz(w);
    struct element* aktualny=lista;

    while(aktualny->next!=NULL)
    {
        aktualny=aktualny->next;
    }

    aktualny->next=nowy;
}

int main()
{
    struct element* lista1=utworz(2);
    dodaj(lista1, 5);
    dodaj(lista1, 9);
    dodaj(lista1, 3);

    struct element* lista2 = utworz(8);
    dodaj(lista2, 1);
    dodaj(lista2, 11);
    dodaj(lista2, 12);

    int sum=suma(lista1, lista2);

    printf("Suma elementow %d", sum);

    struct element * tmp;

    while(lista1!=NULL)
    {
        tmp=lista1;
        lista1=lista1->next;
        free(tmp);
    }

    while(lista2!=NULL)
    {
        tmp=lista2;
        lista2=lista2->next;
        free(tmp);
    }

    return 0;
}
