/*Napisz program realizuj�cy algorytm Euklidesa w wersji iteracyjnej z dzieleniem. Program powinien wczyta� dwie liczby naturalne a i b, a nast�pnie wypisa� ich najwi�kszy wsp�lny dzielnik. */

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
