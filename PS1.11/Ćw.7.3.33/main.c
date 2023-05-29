#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

// Funkcja przesun dla listy z g³ow¹
void przesun_z_glowa(struct element** Lista) {
    if (*Lista == NULL || (*Lista)->next == NULL) {
        return;
    }

    struct element* ostatni = *Lista;
    struct element* przedostatni = NULL;
    struct element* aktualny = *Lista;

    while (ostatni->next != NULL) {
        przedostatni = ostatni;
        ostatni = ostatni->next;
    }

    ostatni->next = *Lista;
    przedostatni->next = NULL;
    *Lista = ostatni;
}

// Funkcja przesun dla listy bez g³owy
struct element* przesun_bez_glowy(struct element* Lista) {
    if (Lista == NULL || Lista->next == NULL) {
        return Lista;
    }

    struct element* ostatni = Lista;
    struct element* przedostatni = NULL;
    struct element* aktualny = Lista;

    while (ostatni->next != NULL) {
        przedostatni = ostatni;
        ostatni = ostatni->next;
    }

    ostatni->next = Lista;
    przedostatni->next = NULL;

    return ostatni;
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
    struct element* Lista = (struct element*)malloc(sizeof(struct element));
    Lista->i = 1;
    Lista->next = (struct element*)malloc(sizeof(struct element));
    Lista->next->i = 2;
    Lista->next->next = (struct element*)malloc(sizeof(struct element));
    Lista->next->next->i = 3;
    Lista->next->next->next = (struct element*)malloc(sizeof(struct element));
    Lista->next->next->next->i = 4;
    Lista->next->next->next->next = NULL;

    printf("Lista oryginalna: ");
    wyswietl(Lista);

    przesun_z_glowa(&Lista);
    printf("Lista przesunieta z glowa: ");
    wyswietl(Lista);

    struct element* przesunieta_bez_glowy = przesun_bez_glowy(Lista);
    printf("Lista przesunieta bez glowy: ");
    wyswietl(przesunieta_bez_glowy);

    return 0;
}

