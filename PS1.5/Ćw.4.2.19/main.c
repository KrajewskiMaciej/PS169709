#include <stdio.h>
#include <stdlib.h>

int* bezZer(unsigned int n,int tab1[])
{
    int tab2[n];
    for(int i=0;i<n;i++)
    {
        if(tab1[i]!=0)
        {
            tab2[i]=tab1[i];
        }
    }
    double* wynik=&tab2[0];
    return wynik;
}

int main()
{
    int tab1[6]={0,23,4,567,0,1};

    printf("Wskaznik: %i",bezZer(6,tab1));

}
