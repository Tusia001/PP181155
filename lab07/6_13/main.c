/*Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z dzieleniem. Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("%d\n", a);

    return 0;
}
