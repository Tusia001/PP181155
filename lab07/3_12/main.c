/*Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z odejmowaniem. Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik. */


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    while (a != b){
        if (a > b) {
            a = a -b;
        }
        else{
            b = b - a;
        }
    }
    printf("NWD = %d", a);

    return 0;
}
