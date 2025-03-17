/* wariant 221 - stw�rz program, kt�ry pobiera od u�ytkownika dodatnia liczb� ca�kowit� p, a nast�pnie oblicza i wy�wietla ilo�� liczb podzielnych przez 3 w przedziale [-p, p] */

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
