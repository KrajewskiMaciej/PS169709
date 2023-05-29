#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct element {
    int i;
    struct element* next;
};

void bezwzgledna(struct element** Lista) {
    struct element* aktualny = *Lista;

    while (aktualny != NULL) {
        aktualny->i = abs(aktualny->i);
        aktualny = aktualny->next;
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

    struct element* elem1 = (struct element*)malloc(sizeof(struct element));
    elem1->i = -5;
    elem1->next = NULL;
    Lista = elem1;

    struct element* elem2 = (struct element*)malloc(sizeof(struct element));
    elem2->i = 10;
    elem2->next = NULL;
    elem1->next = elem2;

    struct element* elem3 = (struct element*)malloc(sizeof(struct element));
    elem3->i = -15;
    elem3->next = NULL;
    elem2->next = elem3;

    printf("Lista przed modyfikacja: ");
    wyswietl(Lista);

    bezwzgledna(&Lista);

    printf("Lista po modyfikacji: ");
    wyswietl(Lista);

    return 0;
}
