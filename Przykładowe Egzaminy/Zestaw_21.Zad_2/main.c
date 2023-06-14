#include <stdio.h>
#include <stdlib.h>

/*
Napisz funkcjê porównuj¹ca dwie tablice jednowymiarowe o takich samych rozmiarach
o wartoœciach typu int. Funkcja ma zwróciæ 1 jeœli liczba elementów nieparzystych z ka¿dej
tablic z osobna s¹ sobie równe, oraz ma zwróciæ 0 w przeciwnym wypadku.
*/

int porownaj(int tab1[],int tab2[],int n)
{
    int niep1=0;
    int niep2=0;

    for(int i=0;i<n;i++)
    {
        if(tab1[i] % 2 != 0){
            niep1++;
        }

        if(tab2[i] % 2 != 0){
            niep2++;
        }
    }

    if(niep1==niep2){
        return 1;
    }
    else{
        return 0;
    }

}

int main()
{
    int n=5;


    int tab1[5]={13,32,47,71,2};
    int tab2[5]={13,32,47,71,2};

    int tab3[5]={13,23,31,42,6};
    int tab4[5]={12,23,31,42,5};


    printf("Wynik: %i \n",porownaj(tab1,tab2,n));

    printf("Wynik: %i \n",porownaj(tab3,tab4,n));



}
