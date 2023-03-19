#include <stdio.h>
#include <stdlib.h>

void f_1_3_8()
{
    int figura;
    printf("Wybierz figure:\n 1.kwadrat\n2.prostokat\n3.trojkat\n ");
    scanf("%i",&figura);

    int a,b,h;

    switch(figura)
    {
        case 1:
            printf("Podaj wymiary kwadratu:\n");
            printf("a= ");
            scanf("%i",&a);
            float pole=a*a;
            printf("Pole kwadratu: %f",pole);
            break;
        case 2:
            printf("Podaj wymiary prostokata:\n");
            printf("a= ");
            scanf("%i",&a);
            printf("b= ");
            scanf("%i",&b);
            float pole1=a*b;
            printf("Pole prostokata: %f",pole1);
            break;
        case 3:
            printf("Podaj wymiary trojkata:\n");
            printf("a= ");
            scanf("%i ",&a);
            printf("h= ");
            scanf("%i",&h);
            float pole2=(a*h)/2;
            printf("Pole trojkata: %f",pole2);
            break;
        default:
            printf("Podana figura nie istnieje!");
            break;

    }

}

int main()
{
    f_1_3_8();
}
