/* Napisz funkcj� shiftRight, kt�rej argumentami s� dodatnia liczba ca�kowita n reprezentuj�ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja ma zwr�ci� wska�nik do nowo utworzonej dynamicznej tablicy, w kt�rej wszystkie elementy zosta�y przesuni�te o jedn� pozycj� w prawo w stosunku do oryginalnej tablicy,a pierwszy element nowej tablicy jest r�wny ostatniemu elementowi oryginalnej tablicy. Stw�rz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int* shiftRight(int n, int tab[]) {
    int* newTab = (int*)malloc(n * sizeof(int));
    if (newTab == NULL) {
        printf("B��d alokacji pami�ci.\n");
        exit(1);
    }

    newTab[0] = tab[n - 1];

    for (int i = 1; i < n; i++) {
        newTab[i] = tab[i - 1];
    }

    return newTab;
}

int main() {
    int tab[] = {1, 2, 3, 4, 5};
    int n = sizeof(tab) / sizeof(tab[0]);

    int* shifted = shiftRight(n, tab);
    printf("Nowa tablica: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", shifted[i]);
    }
    printf("\n");
    free(shifted);
    return 0;
}

