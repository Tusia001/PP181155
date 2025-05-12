/* Napisz funkcj� flipDiag, kt�rej argumentami s� dwie dodatnie liczby ca�kowite n i m oraz dwuwymiarowa tablica element�w (zawieraj�ca zmienne typu int) wymiaru n x m. Funkcja ma zamieni� kolejno�� element�w le��cych na g��wnej przek�tnej. Funkcja powinna dzia�a� tylko dla macierzy kwadratowych, w przeciwnym przypadku nie powinna nic robi�. Stw�rz przypadek testowy.*/


#include <stdio.h>
#include <stdlib.h>

void flipDiag(int n, int m, int **tab) {
    if (n != m) return;

    for (int i = 0; i < n / 2; i++) {
        int temp = tab[i][i];
        tab[i][i] = tab[n - 1 - i][n - 1 - i];
        tab[n - 1 - i][n - 1 - i] = temp;
    }
}
void printTable(int n, int m, int **tab) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d", tab[i][j]);
        }
        printf("\n");
    }
    printf("-----\n");
}

int main() {
    int n = 3, m = 3;

    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
    }
    tab[0][0] =  2; tab[0][1] =  3; tab[0][2] = -3;
    tab[1][0] =  1; tab[1][1] =  4; tab[1][2] =  7;
    tab[2][0] = -3; tab[2][1] = -6; tab[2][2] = 11;

    printf("Przed:\n");
    printTable(n, m, tab);

    flipDiag(n, m, tab);

    printf("Po:\n");
    printTable(n, m, tab);

    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}

