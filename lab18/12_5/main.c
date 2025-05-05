/*Napisz funkcjê copyMat, która dostaje jako argumenty dwie dodatnie liczby ca³kowite n i m oraz dwie dwumiarowe tablice o elementach typu int o wymiarach n x m. Funkcja ma przepisaæ zawartoœæ drugiej tablicy do pierwszej tablicy. Stwórz przypadek testowy dla funkcji. */


#include <stdio.h>
#include <stdlib.h>

void  copyMat(int n, int m, int tab1[n][m], int tab2[n][m]){
    for (int i = 0; i<n; i++){
        for (int j = 0; j <m; j++){
            tab1[i][j] = tab2[i][j];
        }
    }
}

int main() {
    int mat1[2][3];
    int mat2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    copyMat(2, 3, mat1, mat2);

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

