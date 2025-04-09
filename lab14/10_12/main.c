/* skonczone Napisz funkcjê shiftRight2, której argumentami s¹ dodatnia liczba ca³kowita n reprezentuj¹ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja
ta ma przesun¹æ wszystkie elementy tablicy o dwa miejsca w prawo. Elementy, które
“wypadn¹” poza tablicê, powinny pojawiæ siê na jej pocz¹tku w tej samej kolejnoœci.
Stwórz przypadek testowy  */


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
