/* skonczone Napisz funkcj� shiftRight2, kt�rej argumentami s� dodatnia liczba ca�kowita n reprezentuj�ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja
ta ma przesun�� wszystkie elementy tablicy o dwa miejsca w prawo. Elementy, kt�re
�wypadn�� poza tablic�, powinny pojawi� si� na jej pocz�tku w tej samej kolejno�ci.
Stw�rz przypadek testowy  */


#include <stdio.h>
#include <stdlib.h>

// Funkcja przesuwa elementy tablicy o 2 pozycje w prawo
void shiftRight2(int n, int tab[]) {
    int temp1 = tab[n - 2];
    int temp2 = tab[n - 1];

    for (int i = n - 1; i >= 2; i--) {
        tab[i] = tab[i - 2];
    }

    tab[0] = temp1;
    tab[1] = temp2;
}

int main() {
    int tab[] = {3, 2, 0, -4, 40};
    int n = sizeof(tab) / sizeof(tab[0]);

    shiftRight2(n, tab);

    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }

    printf("\n");
    return 0;
}
