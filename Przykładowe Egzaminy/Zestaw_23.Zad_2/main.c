#include <stdio.h>
#include <stdlib.h>
/*
Napisz funkcjê porównuj¹ca dwie tablice jednowymiarowe o takich samych rozmiarach
o wartoœciach typu int. Funkcja ma zwróciæ 1 jeœli sumy elementów parzystych z ka¿dej tablic
z osobna s¹ sobie równe, oraz ma zwróciæ 0 w przeciwnym wypadku.
Stwórz dwa przypadki testowe dla funkcji.
*/

int porownaj(int tab1[],int tab2[], int n)
{
    int suma1=0,suma2=0;
    for(int i=0; i<n;i++)
        {
            if(i%2==0)
            {
                suma1+=tab1[i];
                suma2+=tab2[i];
            }
        }
        if(suma1==suma2)
        {
            return 1;
        }
        else{
            return 0;
        }
}

int main()
{
    int tab1[]={1,23,4,6,10};
    int tab2[]={7,23,3,10,5};

    printf("Wynik: %i\n", porownaj(tab1,tab2,5));


    int tab3[]={1,23,4,6,10};
    int tab4[]={7,23,3,10,4};

    printf("Wynik: %i\n", porownaj(tab3,tab4,5));

    return 0;

}
