/*Napisz funkcj� minColIdx, kt�ra dostaje jako argumenty dwie dodatnie liczby ca�kowite n i m oraz dwuwymiarow� tablic� tablic o elementach typu int o wymiarach n x m. Funkcja ma zwr�ci� indeks kolumny, w kt�rym znajduje si� najmniejszy element (w przypadku kilku mo�liwych indeks�w, zwr�� najmniejszy z mo�liwych). Stw�rz przypadek testowy dla funkcji. */

#include <stdio.h>
#include <stdlib.h>

int minColIdx(int n, int m, int **tab) {
    int min = tab[0][0];
    int col = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (tab[i][j] < min) {
                min = tab[i][j];
                col = j;
            }
        }
    }

    return col;
}

int main() {
    int **tab = malloc(2 * sizeof(int *));
    tab[0] = malloc(3 * sizeof(int));
    tab[1] = malloc(3 * sizeof(int));

    tab[0][0] = 4;  tab[0][1] = -2; tab[0][2] = 9;
    tab[1][0] = 8;  tab[1][1] = -7; tab[1][2] = 5;

    int wynik = minColIdx(2, 3, tab);
    printf("Indeks kol z min elementem: %d\n", wynik);

    free(tab[0]);
    free(tab[1]);
    free(tab);
    return 0;
}

