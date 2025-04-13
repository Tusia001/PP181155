/*Napisz funkcjê shiftLeft, której argumentami s¹ dodatnia liczba ca³kowita n reprezentuj¹ca
rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja ma zwróciæ
wskaŸnik do nowo utworzonej dynamicznej tablicy, w której wszystkie elementy zosta³y przesuniête o dwie pozycje w lewo w stosunku do oryginalnej tablicy, a dwa ostatnie elementy
nowej tablicy s¹ równe dwóm pocz¹tkowym elementom oryginalnej tablicy. Stwórz przypadek
testowy.
Na przyk³ad, jeœli oryginalna tablica wygl¹da³a tak: [5, 8, 3, 1, 7], to po przesuniêciu o dwie pozycje
w lewo bêdzie wygl¹daæ tak: [3, 1, 7, 5, 8] - pierwsze dwa elementy oryginalnej tablicy trafi³y na
koniec, a reszta zosta³a przesuniêta. */


#include <stdio.h>
#include <stdlib.h>

int* shiftLeft(int n, int* tab) {
    if (n <= 0) return NULL;
    int* newTab = (int*)malloc(n * sizeof(int));
    if (!newTab) return NULL;

    for (int i = 0; i < n - 2; i++) {
        *(newTab + i) = *(tab + i + 2);  // notacja wskaŸnikowa
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

        free(shiftedTab);  // zwolnienie pamiêci
    } else {
        printf("Blad alokacji pamieci!\n");
    }

    return 0;
}
