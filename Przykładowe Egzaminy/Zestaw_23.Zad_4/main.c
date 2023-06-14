#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcj�, kt�ra przyjmuje jako argumenty dwie listy z g�ow� o elementach typu:
struct element {
int a;
struct element * next;
};
Funkcja ma po��czy� obie listy (najpierw ma by� pierwszy argument, potem drugi) zachowuj�c
g�ow� pierwszej listy. Funkcja ma zwr�ci� wska�nik na now� list�. Stw�rz przypadek testowy.
Przyk�ad:
Lista1:
� g�owa: adres 0400
� adres 0020, warto��:5
� adres 0060, warto��:12
Lista2:
� g�owa: adres 0110
� adres 0130, warto��:54
� adres 0150, warto��:-3
� adres 0170, warto��:11
Lista po po��czeniu:
� g�owa: adres 0400
� adres 0020, warto��:5
� adres 0060, warto��:12
� adres 0130, warto��:54
� adres 0150, warto��:-3
� adres 0170, warto��:11
*/

struct element{
    int a;
    struct element * next;
};

struct element* polacz(struct element* lista1,struct element* lista2)
{
    if(lista1==NULL||lista1->next==NULL){
            return lista2;
    }
    struct element* tmp=lista1->next;

    while(tmp->next!=NULL)
    {
        tmp=tmp->next;
    }
    tmp->next=lista2;

    return lista1;
}

void wypisz(struct element* lista)
{
    printf("Glowa: %x\n",lista);
    struct element* tmp=lista;
    while(tmp!=NULL)
    {
        printf("Adres: %x , Wartosc: %i\n",tmp,tmp->a);
        tmp=tmp->next;
    }
}

int main()
{
    struct element* lista1 = (struct element*)malloc(sizeof(struct element));
    lista1->next = NULL;

    struct element* lista2 = (struct element*)malloc(sizeof(struct element));
    lista2->next = NULL;

    struct element* lista3 = (struct element*)malloc(sizeof(struct element));
    lista3->next = NULL;

    struct element* lista4 = (struct element*)malloc(sizeof(struct element));
    lista4->next = NULL;

    struct element* lista5 = (struct element*)malloc(sizeof(struct element));
    lista5->next = NULL;

    lista1->a = 5;
    lista2->a = 12;
    lista3->a = 54;
    lista4->a = -3;
    lista5->a = 11;

    lista1->next = lista2;
    lista3->next = lista4;
    lista4->next = lista5;


    printf("Lista 1: \n");
    wypisz(lista1);

    printf("Lista 2: \n");
    wypisz(lista3);

    struct element* nowa=polacz(lista1,lista3);
    printf("Listy po polaczeniu:\n");
    wypisz(nowa);


    free(lista1);
    free(lista2);
    free(lista3);
    free(lista4);
    free(lista5);


    return 0;
}
