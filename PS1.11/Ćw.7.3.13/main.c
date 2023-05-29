#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

void dodajk(struct element** Lista, int a) {
    struct element* nowy = (struct element*)malloc(sizeof(struct element));
    nowy->i = a;
    nowy->next = NULL;

    if (*Lista == NULL) {
        *Lista = nowy;
    } else {
        struct element* aktualny = *Lista;
        while (aktualny->next != NULL) {
            aktualny = aktualny->next;
        }

        aktualny->next = nowy;
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

    dodajk(&Lista, 5);
    dodajk(&Lista, 10);
    dodajk(&Lista, 15);

    printf("Lista: ");
    wyswietl(Lista);

    return 0;
}
