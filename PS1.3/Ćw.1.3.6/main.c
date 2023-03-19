#include <stdio.h>
#include <stdlib.h>

void f_1_3_6()
{
    float a,b,c,a2,b2,c2;
    printf("\n Podaj wspolczynniki:");
    scanf("%f %f %f %f %f %f",&a,&b,&c,&a2,&b2,&c2);


    float Wx=(c*b2)-(b*c2);
    float Wy=(a*c2)-(c*a2);
    float W=(a*b2)-(b*a2);

    float x = Wx / W;
    float y = Wy / W;

    if(W != 0)
    {
        printf("\n x= %f", x);
        printf("\n y= %f", y,"\n");
    }
    else
    {
        if(Wx==0 && Wy==0)
        {
            printf("Uklad nieoznaczony (wiele rozwiazan)\n");
        }
        else
        {
            printf("Uklad sprzeczny (brak rozwiazan)\n");
        }
    }
}

int main()
{
    f_1_3_6();
}
