/*Napisz funkcjê copyArr2D, która dostaje jako argumenty dwie dodatnie liczby ca³kowite n i m oraz dwie dwumiarowe tablice tablic o elementach typu int o wymiarach n x m. Funkcja ma przepisaæ zawartoœæ drugiej tablicy do pierwszej tablicy. Stwórz przypadek testowy dla funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void copyArr2D(int n, int m, int **tab1, int **tab2) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab1[i][j] = tab2[i][j];
        }
    }
}

void printTable(int n, int m, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main() {
    int n = 2, m = 3;

    int **tab1 = malloc(n * sizeof(int *));
    int **tab2 = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab1[i] = malloc(m * sizeof(int));
        tab2[i] = malloc(m * sizeof(int));
    }

    tab2[0][0] = 10; tab2[0][1] = 20; tab2[0][2] = 30;
    tab2[1][0] = 40; tab2[1][1] = 50; tab2[1][2] = 60;

    copyArr2D(n, m, tab1, tab2);

    printTable(n, m, tab1);

    for (int i = 0; i < n; i++) {
        free(tab1[i]);
        free(tab2[i]);
    }
    free(tab1);
    free(tab2);

    return 0;
}
