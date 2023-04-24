#include <stdio.h>
#include <stdlib.h>


int ciag(int n) {
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    if (n % 2 == 1) {
        return ciag(n-2) + 1;
    } else {
        return ciag(n-2) * 3;
    }
}

int main() {
    int n = 7;
    printf("Element o indeksie %d wynosi %d\n", n, ciag(n));
    return 0;
}
