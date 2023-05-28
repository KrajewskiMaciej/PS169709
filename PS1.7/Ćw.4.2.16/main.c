#include <stdio.h>
#include <stdlib.h>

void zwolnij(double* array)
{
    free(array);
}

int main()
{
    int n=5;
    double* array =malloc(n * sizeof(double));

    zwolnij(array);

}
