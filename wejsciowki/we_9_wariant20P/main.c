/* WARIANT 20P napisz funkcj�, kt�ra dostaje jako argumenty dwie  dodatnie liczby ca�kowite n i m oraz dwuwymiarow� tablic� tablic o elementach typu int o wymiarach n xm. Funkcj ma zwr�ci� ile elemnt�w parzystych jest w tablicy tabic. stw�rz przyadek testowy. wskaz�wka: tablica tablic powinna by� deklarowana przez podw�jny wska�nik*/

#include <stdio.h>
#include <stdlib.h>

int countEven(int n, int m, int **tab) {
    int counter = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if (tab[i][j] % 2 == 0) {
                counter++;
            }
        }
    }
    return counter;
}

void printTable(int n, int m, int **tab) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            printf("[%d][%d] = %d, ", i, j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main() {
    int **tab = malloc(3 * sizeof(int*));
    for(int i = 0; i < 3; i++) {
        tab[i] = malloc(4 * sizeof(int));
    }

    tab[0][0] = 2; tab[0][1] = 3; tab[0][2] = 4; tab[0][3] = 5;
    tab[1][0] = 6; tab[1][1] = 7; tab[1][2] = 8; tab[1][3] = 9;
    tab[2][0] = 10; tab[2][1] = 11; tab[2][2] = 12; tab[2][3] = 13;

    printTable(3, 4, tab);

    int result = countEven(3, 4, tab);
    printf("Liczba elementow parzystych: %d\n", result);

    for(int i = 0; i < 3; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
