/*.Napisz funkcjê revOddCol, której argumentami s¹ dwie dodatnie liczby ca³kowite n i m oraz dwuwymiarowa tablica elementów (zawieraj¹ca zmienne typu int) wymiaru n x m. Funkcja ma odwróciæ kolejnoœæ elementów w kolumnach o nieparzystych indeksach. Stwórz przypadek testowy. */

#include <stdio.h>
#include <stdlib.h>

void revOddCol(int n, int m, int **tab){
    for(int j = 0; j < m; j++){
        if(j % 2 == 1){
            for(int i = 0; i < n / 2; i++){
                int temp = tab[i][j];
                tab[i][j] = tab[n - 1 - i][j];
                tab[n - 1 - i][j] = temp;
            }
        }
    }
}

void printTable(int n, int m, int **tab){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%4d", tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}

int main(){
    int n = 4, m = 3;
    int **tab = malloc(n * sizeof(int*));
    for(int i = 0; i < n; i++){
        tab[i] = malloc(m * sizeof(int));
    }

    tab[0][0] =  2; tab[0][1] =  3; tab[0][2] = -3;
    tab[1][0] =  1; tab[1][1] =  4; tab[1][2] =  7;
    tab[2][0] = -3; tab[2][1] = -6; tab[2][2] = 11;
    tab[3][0] = -2; tab[3][1] =  8; tab[3][2] = 23;

    printTable(n, m, tab);
    revOddCol(n, m, tab);
    printTable(n, m, tab);

    for(int i = 0; i < n; i++){
        free(tab[i]);
    }
    free(tab);

    return 0;
}
