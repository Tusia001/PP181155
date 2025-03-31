/* napisz funkcj�, kt�ra otrzymuje jako argumenty wska�niki do dw�ch zmiennych typu int. je�eli warto�� wskazywana przez pierwszy argument jest nieujemna, funkcja powinna przypisa� do zmiennej wskazywanej przez drugi argument wynik mno�enia oby wskazywanych zmiennych. stw�rz przypadek testowy */

#include <stdio.h>
#include <stdlib.h>

void wart(const int *a, int *b){
    if (*a >= 0){
        *b = (*a) * (*b);
    }
}

int main() {
    int x = 4;
    int y = 5;
    wart(&x, &y);
    printf("%d, %d\n", x, y);
    return 0;
}
