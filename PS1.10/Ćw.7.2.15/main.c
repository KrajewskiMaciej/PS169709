#include <stdio.h>
#include <stdlib.h>

enum zwierzak {
    KOT,
    PIES,
    CHOMIK,
    KANAREK
};

int main() {

    enum zwierzak moj_zwierzak;

    moj_zwierzak = KOT;

    switch (moj_zwierzak) {
        case KOT:
            printf("Mam kota!\n");
            break;
        case PIES:
            printf("Mam psa!\n");
            break;
        case CHOMIK:
            printf("Mam chomika!\n");
            break;
        case KANAREK:
            printf("Mam kanarka!\n");
            break;
        default:
            printf("Nie mam zwierzaka.\n");
            break;
    }

    return 0;
}

