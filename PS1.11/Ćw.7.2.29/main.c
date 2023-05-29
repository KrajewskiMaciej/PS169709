#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

// Funkcja kopiuj dla listy z g³ow¹
struct element* kopiuj_z_glowa(struct element* Lista) {
    if (Lista == NULL) {
        return NULL;
    }

    struct element* kopia_glowy = (struct element*)malloc(sizeof(struct element));
    kopia_glowy->i = Lista->i;
    kopia_glowy->next = NULL;

    struct element* kopia_aktualnego = kopia_glowy;
    struct element* aktualny = Lista->next;

    while (aktualny != NULL) {
        struct element* nowy_element = (struct element*)malloc(sizeof(struct element));
        nowy_element->i = aktualny->i;
        nowy_element->next = NULL;

        kopia_aktualnego->next = nowy_element;
        kopia_aktualnego = kopia_aktualnego->next;
        aktualny = aktualny->next;
    }

    return kopia_glowy;
}

// Funkcja kopiuj dla listy bez g³owy
struct element* kopiuj_bez_glowy(struct element* Lista) {
    if (Lista == NULL) {
        return NULL;
    }

    struct element* kopia = NULL;
    struct element** wskaznik_na_kopia = &kopia;

    struct element* aktualny = Lista;

    while (aktualny != NULL) {
        struct element* nowy_element = (struct element*)malloc(sizeof(struct element));
        nowy_element->i = aktualny->i;
        nowy_element->next = NULL;

        *wskaznik_na_kopia = nowy_element;
        wskaznik_na_kopia = &(nowy_element->next);
        aktualny = aktualny->next;
    }

    return kopia;
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
    Lista->i = 5;
    Lista->next = (struct element*)malloc(sizeof(struct element));
    Lista->next->i = 10;
    Lista->next->next = (struct element*)malloc(sizeof(struct element));
    Lista->next->next->i = 15;
    Lista->next->next->next = NULL;

    printf("Lista oryginalna: ");
    wyswietl(Lista);

    struct element* kopia_z_glowa = kopiuj_z_glowa(Lista);
    printf("Kopia z glowa: ");
    wyswietl(kopia_z_glowa);

    struct element* kopia_bez_glowy = kopiuj_bez_glowy(Lista);
    printf("Kopia bez glowy: ");
    wyswietl(kopia_bez_glowy);

    struct element* nowy_element = (struct element*)malloc(sizeof(struct element));
    nowy_element->i = 20;
    nowy_element->next = NULL;
    Lista->next->next->next = nowy_element;

    printf("Lista oryginalna po dodaniu nowego elementu: ");
    wyswietl(Lista);
    printf("Kopia z glowa po dodaniu nowego elementu: ");
    wyswietl(kopia_z_glowa);
    printf("Kopia bez glowy po dodaniu nowego elementu: ");
    wyswietl(kopia_bez_glowy);

    return 0;
}

