/*Napisz program realizuj�cy algorytm Euklidesa w wersji iteracyjnej z odejmowaniem. Program powinien wczyta� dwie liczby naturalne a i b, a nast�pnie wypisa� ich najwi�kszy wsp�lny dzielnik. */


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
