#include <stdio.h>
#include <stdlib.h>

double*dynTab(int n)
{
    double* array =(double*)malloc(n*sizeof(double));

    if(array==NULL)
    {
        printf("Blad!\n");
        exit(1);
    }

    return array;
    free(array);
}

int main()
{
    printf("%i\n",dynTab(5));
}
