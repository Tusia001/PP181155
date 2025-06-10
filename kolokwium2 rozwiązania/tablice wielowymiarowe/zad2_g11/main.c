//. Napisz funkcję swapCorners, której argumentem jest dwuwymiarowa tablica tablic (zawierająca zmienne typu int) oraz jej wymiary 𝑛 i 𝑚. Funkcja ma zamienić miejscami elementyw rogach tablicy: lewy górny z prawym dolnym oraz prawy górny z lewym dolnym. Stwórz przypadek testowy//
#include <stdio.h>
#include <stdlib.h>
void swapCorners(int **tab, int n, int m) {
    int temp;
    temp = tab[0][0];
    tab[0][0] = tab[n-1][m-1];
    tab[n-1][m-1] = temp;
    temp = tab[0][m-1];
    tab[0][m-1] = tab[n-1][0];
    tab[n-1][0] = temp;
}
int main() {
    int n = 3, m = 3;
    int **tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
    }
    int val = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            tab[i][j] = val++;
        }
    }

    swapCorners(tab, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%3d ", tab[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}
