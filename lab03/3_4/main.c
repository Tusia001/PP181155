/*Napisz program, kt�ry prosi u�ytkownika o wprowadzenie trzech r�nych liczb ca�kowitych i wy�wietla najmniejsz� z nich. */

#include <stdio.h>

int main() {
    int a, b, c, najmniejsza;

    printf("Podaj trzy rozne liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);

    najmniejsza = a;

    if (b < najmniejsza) {
        najmniejsza = b;
    }

    if (c < najmniejsza) {
        najmniejsza = c;
    }

    printf("Najmniejsza liczba to: %d\n", najmniejsza);

    return 0;
}
