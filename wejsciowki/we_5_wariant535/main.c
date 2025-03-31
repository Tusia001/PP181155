/* napisz funkcjê, która otrzymuje jako argumenty wskaŸniki do dwóch zmiennych typu int. je¿eli wartoœæ wskazywana przez pierwszy argument jest nieujemna, funkcja powinna przypisaæ do zmiennej wskazywanej przez drugi argument wynik mno¿enia oby wskazywanych zmiennych. stwórz przypadek testowy */

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
