#include <stdio.h>
#include <stdlib.h>

void funkcja(unsigned int n,double tab1[],double tab2[])
{
    double wynik=0;
    for(int i=0;i<n;i++)
    {
        wynik=wynik+tab1[i]*tab2[i];
    }
    printf("%.2f",wynik);
}

int main()
{
    double tab1[3]={2.31,1.47,3.21};
    double tab2[3]={3,5,7};

    funkcja(3,tab1,tab2);
}

/*
 Napisz funkcj�, kt�ra otrzymuje dwa argumenty: dodatni� liczb� ca�kowit� n oraz dwie n-elementowe tablice tab o elementach typu double
przechowuj�ce n-wymiarowe wektory i zwraca jako warto�� iloczyn
skalarny wektor�w otrzymanych w argumentach.
*/
