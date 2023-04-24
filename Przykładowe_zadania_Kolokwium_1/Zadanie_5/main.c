#include <stdio.h>
#include <stdlib.h>

void print_unique_integers(int n, int tab[]) {
    int unique_values[n];
    int num_unique_values = 0;

    for (int i = 0; i < n; i++) {
        int is_unique = 1;

        // Check if current element is already in unique_values
        for (int j = 0; j < num_unique_values; j++) {
            if (tab[i] == unique_values[j]) {
                is_unique = 0;
                break;
            }
        }

        if (is_unique && tab[i] > 0) {
            unique_values[num_unique_values] = tab[i];
            num_unique_values++;
            printf("%d\n", tab[i]);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 6, 7, -1, -2};
    print_unique_integers(13, arr);
    return 0;
}
