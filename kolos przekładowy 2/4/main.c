/*Napisz funkcj� shiftLeft, kt�rej argumentami s� dodatnia liczba ca�kowita n reprezentuj�ca
rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja ma zwr�ci�
wska�nik do nowo utworzonej dynamicznej tablicy, w kt�rej wszystkie elementy zosta�y przesuni�te o dwie pozycje w lewo w stosunku do oryginalnej tablicy, a dwa ostatnie elementy
nowej tablicy s� r�wne dw�m pocz�tkowym elementom oryginalnej tablicy. Stw�rz przypadek
testowy.
Na przyk�ad, je�li oryginalna tablica wygl�da�a tak: [5, 8, 3, 1, 7], to po przesuni�ciu o dwie pozycje
w lewo b�dzie wygl�da� tak: [3, 1, 7, 5, 8] - pierwsze dwa elementy oryginalnej tablicy trafi�y na
koniec, a reszta zosta�a przesuni�ta. */


#include <stdio.h>
#include <stdlib.h>

int* shiftLeft(int n, int* tab) {
    if (n <= 0) return NULL;
    int* newTab = (int*)malloc(n * sizeof(int));
    if (!newTab) return NULL;

    for (int i = 0; i < n - 2; i++) {
        *(newTab + i) = *(tab + i + 2);  // notacja wska�nikowa
    }
    *(newTab + n - 2) = *tab;           // tab[0]
    *(newTab + n - 1) = *(tab + 1);     // tab[1]

    return newTab;
}

int main() {
    // Przypadek testowy
    int tab[] = {5, 8, 3, 1, 7};
    int n = sizeof(tab) / sizeof(tab[0]);

    int* shiftedTab = shiftLeft(n, tab);

    if (shiftedTab != NULL) {
        printf("Przesunieta tablica: [");
        for (int i = 0; i < n; i++) {
            printf("%d", shiftedTab[i]);
            if (i < n - 1) printf(", ");
        }
        printf("]\n");

        free(shiftedTab);  // zwolnienie pami�ci
    } else {
        printf("Blad alokacji pamieci!\n");
    }

    return 0;
}
