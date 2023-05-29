#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

struct element* usunw(struct element* Lista, struct element* elem) {
    if (elem == NULL) {
        return Lista;
    }

    if (Lista == elem) {
        struct element* temp = Lista;
        Lista = Lista->next;
        free(temp);
    } else {
        struct element* poprzedni = Lista;
        while (poprzedni->next != NULL && poprzedni->next != elem) {
            poprzedni = poprzedni->next;
        }

        if (poprzedni->next != NULL) {
            struct element* temp = poprzedni->next;
            poprzedni->next = poprzedni->next->next;
            free(temp);
        }
    }

    if (Lista == NULL) {
        return NULL;
    } else {
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

    struct element* elem1 = (struct element*)malloc(sizeof(struct element));
    elem1->i = 5;
    elem1->next = NULL;
    Lista = elem1;

    struct element* elem2 = (struct element*)malloc(sizeof(struct element));
    elem2->i = 10;
    elem2->next = NULL;
    elem1->next = elem2;

    struct element* elem3 = (struct element*)malloc(sizeof(struct element));
    elem3->i = 15;
    elem3->next = NULL;
    elem2->next = elem3;

    printf("Lista przed usunieciem: ");
    wyswietl(Lista);

    Lista = usunw(Lista, elem2);

    printf("Lista po usunieciu: ");
    wyswietl(Lista);

    return 0;
}
