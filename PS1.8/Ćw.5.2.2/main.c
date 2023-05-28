#include <stdio.h>
#include <stdlib.h>

int dlugosc(char napis[])
{
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}

int dlugosc2(wchar_t napis[])
{
    int i=0;
    for(i=0;napis[i]!=0;i++);
    return i;
}

int main()
{
    char a[]="sakfjfkasfasda";
    printf("%i\n",dlugosc(a));
    wchar_t b[]=L"sakfjfkasfasda123";
    printf("%i\n",dlugosc2(b));
    return 0;

}
