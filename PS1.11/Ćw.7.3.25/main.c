#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct element {
    int i;
    struct element* next;
};

int minimum(struct element* Lista) {
    struct element* aktualny = Lista->next;
    int min = INT_MAX;

    while (aktualny != NULL) {
        if (aktualny->i < min) {
            min = aktualny->i;
        }
        aktualny = aktualny->next;
    }

    return min;
}

void wyswietl(struct element* Lista) {
    struct element* aktualny = Lista->next;

    while (aktualny != NULL) {
        printf("%d ", aktualny->i);
        aktualny = aktualny->next;
    }
    printf("\n");
}

int main() {
    struct element* Lista = (struct element*)malloc(sizeof(struct element));
    Lista->next = NULL;

    struct element* elem1 = (struct element*)malloc(sizeof(struct element));
    elem1->i = 5;
    elem1->next = NULL;
    Lista->next = elem1;

    struct element* elem2 = (struct element*)malloc(sizeof(struct element));
    elem2->i = 10;
    elem2->next = NULL;
    elem1->next = elem2;

    struct element* elem3 = (struct element*)malloc(sizeof(struct element));
    elem3->i = -15;
    elem3->next = NULL;
    elem2->next = elem3;

    printf("Lista: ");
    wyswietl(Lista);

    int min = minimum(Lista);

    printf("Najmniejsza wartosc: %d\n", min);

    return 0;
}
