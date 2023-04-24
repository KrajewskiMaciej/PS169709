#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int firstFunction(int arg) {
    return arg * 2;
}

int secondFunction(int arg) {
    return arg * arg *4;
}

int checkFunctions(int (*function1)(int), int (*function2)(int), int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (function2(i) != (function1(i)*function1(i))) {
            return -2;
        }
    }
    return 2;
}

int main() {
    int result = checkFunctions(&firstFunction, &secondFunction, 5);
    printf("%d\n", result);
    return 0;
}
