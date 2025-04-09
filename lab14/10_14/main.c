/* Napisz funkcjê shiftRight, której argumentami s¹ dodatnia liczba ca³kowita n reprezentuj¹ca rozmiar tablicy oraz n-elementowa tablica tab o elementach typu int. Funkcja ma zwróciæ wskaŸnik do nowo utworzonej dynamicznej tablicy, w której wszystkie elementy zosta³y przesuniête o jedn¹ pozycjê w prawo w stosunku do oryginalnej tablicy,a pierwszy element nowej tablicy jest równy ostatniemu elementowi oryginalnej tablicy. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

int* shiftRight(int n, int tab[]) {
    int* newTab = (int*)malloc(n * sizeof(int));
    if (newTab == NULL) {
        printf("B³¹d alokacji pamiêci.\n");
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

