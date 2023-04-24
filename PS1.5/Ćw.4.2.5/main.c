#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int pierwsza( unsigned int n ) {
    int i , j , pom ;
    bool sito[n] ;
    for ( i =0 ; i<n ; i++)
        sito[i]=true ;
    for( i =2 ; i<n ; i++)
        if (sito[i]) {
            pom= i ;
            for( j =2* i ; j<n ; j+=i )
                sito[j]= false ;
        }
return pom ;
}




int main()
{
    int n;
    printf("Podaj licze calkowita n>=3: ");
    scanf("%i",&n);
    if(n<3)
    {
        printf("liczba mniejsza od 3! Podaj inna: ");
        scanf("%i",n);
    }

    printf("%i",pierwsza(n));
}
