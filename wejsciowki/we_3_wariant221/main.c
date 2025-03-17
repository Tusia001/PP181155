/* wariant 221 - stwórz program, który pobiera od u¿ytkownika dodatnia liczbê ca³kowit¹ p, a nastêpnie oblicza i wyœwietla iloœæ liczb podzielnych przez 3 w przedziale [-p, p] */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int p, ilosc = 0;
    scanf("%d", &p);

    if (p <= 0) {
        return 1;
    }

    for (int i = -p; i <= p; i++) {
        if (i % 3 == 0) {
            ilosc++;
        }
    }

    printf("Ilosc = %d\n", ilosc);
    return 0;
}
