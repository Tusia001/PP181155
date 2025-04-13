/* W folderze DebugXYZ (XYZ - losowe znaki) na pendrive znajduje siê projekt z kodem w jêzyku C. W pliku main.c w niektórych linijkach s¹ komentarze. Twoim zadaniem jest wpisanie wartoœci odpowiednich zmiennych po wykonaniu konkretnej linii kodu. Dopisanie nowych linijek czy zaburzenie struktury kodu oznacza zero punktów za polecenie. */

#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {32,3,2,3,2,3,2,3,2,3,2,3};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=2
    int c = b+1; // b=2  , c=3
    int d = foo(&b,&c); // b= 2 , c=3  , d=3
    int e = (wsk+=1)[2]; // b= 2 , c= 3 , d=3  , e=3
    e = (d *= 3) + (c /= 3); // b= 2 , c=  1, d=  9, e=10
    c = d + (b+=3); // b= 5 , c=  14, d=  9, e=10
    b = (c += -2) + (e -= 3); // b= 19 , c=  12, d= 9 , e=7
    b = *wsk + e; // b=  10, c= 12 , d=  9, e=7
    return 0;
}
