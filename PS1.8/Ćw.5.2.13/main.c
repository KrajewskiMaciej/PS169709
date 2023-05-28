#include <stdio.h>
#include <stdlib.h>

void wytnijtm(char *nap1, const char *nap2)
{
    int i,j;
    for(i=0,j=0;nap1[i]!=0;i++)
    {
        if(nap1[i]!=nap2[i])
        {
            if(j<i)
                nap1[j]=nap1[i];
            j++;
        }
    }
    nap1[j]=0;
}

int main()
{

}
