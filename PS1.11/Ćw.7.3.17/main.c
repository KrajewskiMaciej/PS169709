#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element* next;
};

void usun(struct element** Lista, int a) {
    if (*Lista == NULL) {
        return;
    }

    struct element* usuwany = NULL;
    struct element* aktualny = *Lista;

    if (aktualny->i == a) {
        *Lista = aktualny->next;
        usuwany = aktualny;
    } else {
        while (aktualny->next != NULL) {
            if (aktualny->next->i == a) {
                usuwany = aktualny->next;
                aktualny->next = usuwany->next;
                break;
            }
            aktualny = aktualny->next;
        }
    }

    if (usuwany != NULL) {
        free(usuwany);
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

    usun(&Lista, 10);

    printf("Lista po usunieciu: ");
    wyswietl(Lista);

    return 0;
}
