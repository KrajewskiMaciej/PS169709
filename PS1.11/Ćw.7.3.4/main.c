#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* dodajk(struct element* Lista, int a) {
    struct element* nowy = (struct element*)malloc(sizeof(struct element));
    nowy->i = a;
    nowy->next = NULL;

    if (Lista == NULL) {
        return nowy;
    } else {
        struct element* aktualny = Lista;
        while (aktualny->next != NULL) {
            aktualny = aktualny->next;
        }

        aktualny->next = nowy;
        return Lista;
    }
}

void wyswietl(struct element* Lista) {
    struct element* aktualny = Lista;
    while (aktualny != NULL) {
        printf("%d ", aktualny->i);
        aktualny = aktualny->next;
    }
    printf("\n");
}

int main() {
    struct element* Lista = NULL;

    Lista = dodajk(Lista, 5);
    Lista = dodajk(Lista, 10);
    Lista = dodajk(Lista, 15);

    printf("Lista: ");
    wyswietl(Lista);

    return 0;
}
