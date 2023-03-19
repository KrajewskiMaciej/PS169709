#include <stdio.h>
#include <stdlib.h>

void f_1_2_1()
{
    printf("Helo World!\n");
}

void f_1_2_2()
{
    printf("Bardo\ndlugi\ntekst");
}

void f_1_2_3()
{
    printf("Napis zawierajacy rozne dziwne znaczki // \\ \\ $ & %% \n");
}

void f_1_2_4()
{
    int r=0;
    printf("Podaj liczbe calkowita: ");
    scanf("%d",&r);

    printf("Liczba: %d \n",r);
}

void f_1_2_5()
{
    float r=0;
    printf("Podaj liczbe wymierna: ");
    scanf("%f",&r);
    printf("Liczba: %f\n",r);
}

void f_1_2_6()
{
    int a,b,c;
    printf("Podaj 3 liczby calkowite:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Liczby:\n %d\n %d\n %d\n",a,b,c);
}

void f_1_2_7()
{
    int i=0;
    printf("Podaj liczbe calkowita:");
    scanf("%d",&i);
    printf("Liczba o jeden wieksza: %d\n",i+1);
}

void f_1_2_8()
{
    int a,b,c;
    printf("Podaj 3 liczby calkowite:");
    scanf("%d %d %d",&a,&b,&c);
    float r=(a+b+c)/3;
    printf("Srednia arytmetyczna liczb: %f\n",r);
}

void f_1_2_9()
{
    float r;
    printf("Podaj liczbe wymierna:");
    scanf("%f",&r);
    float roz=sqrt(r);
    printf("Pierwastek z liczby %f:%f\n",r,roz);
}

void f_1_2_10()
{
    float x;
    printf("Podaj liczbe wymierna:");
    scanf("%f",&x);
    printf("Wartosc bezwzgledna: %f\n",fabs(x));
}

void f_1_2_11()
{
    float r;
    printf("Podaj liczbe wymierna:");
    scanf("%f",&r);
    printf("Liczba zaokraglona: %.2f",r);
}

void f_1_2_12()
{
    float x;
    printf("Podaj liczbe wymierna:");
    scanf("%f",&x);
    printf("Liczba w notacji wykladniczej: %.1e",x);
}

int main()
{
    f_1_2_1();
    f_1_2_2();
    f_1_2_3();
    f_1_2_4();
    f_1_2_5();
    f_1_2_6();
    f_1_2_7();
    f_1_2_8();
    f_1_2_9();
    f_1_2_10();
    f_1_2_11();
    f_1_2_12();
}
