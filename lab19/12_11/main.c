/*Napisz funkcj� revCols, kt�ra dostaje jako argumenty dwie dodatnie liczby ca�kowite n i m oraz dwuwymiarow� tablic� o elementach typu int o wymiarach . Funkcja ma odwr�ci� kolejno�� element�w w ka�dej kolumnie. Stw�rz przypadek testowy dla funkcji. */

#include <stdio.h>
#include <stdlib.h>

void revCols(int n, int m, int **tab) {
    for (int j = 0; j < m; j++) {
        for (int i = 0; i < n / 2; i++) {
            int temp = tab[i][j];
            tab[i][j] = tab[n - 1 - i][j];
            tab[n - 1 - i][j] = temp;
        }
    }
}

void printTab(int n, int m, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("----\n");
}

int main() {
    int n = 3, m = 4;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
    }

    int licznik = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = licznik++;
        }
    }

    revCols(n, m, tab);
    printTab(n, m, tab);

    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
