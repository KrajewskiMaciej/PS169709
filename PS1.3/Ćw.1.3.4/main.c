#include <stdio.h>
#include <stdlib.h>

void f_1_3_4()
{
    int a,b;
    printf("Podaj 2 liczby calkowite: ");
    scanf("%d %d",&a,&b);
    printf("Wieksza wartosc bezwzgledna to: ");

    int fa = fabs(a);
    int fb = fabs(b);

    if(fa>fb)
    {
        printf("%i \n",a);
    }
    else
    {
        printf("%i \n",b);
    }
}

int main()
{
    f_1_3_4();
}
