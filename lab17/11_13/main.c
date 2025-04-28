/*Napisz funkcjê cutStr, która otrzymuje jako argumenty tablicê znaków typu char oraz dwie liczby ca³kowite n i m, i wycina z otrzymanego napisu znaki o indeksach od n do m (przy za³o¿eniu, ¿e n<m). Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

void cutStr(char tab[], int n, int m) {
    int i = 0, j = 0;
    while (tab[i] != '\0') {
        if (i < n || i > m) {
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}

int main() {
    char tekst[] = "kolokwium";

    printf("Przed: %s\n", tekst);

    cutStr(tekst, 2, 5);

    printf("Po:    %s\n", tekst);
    return 0;
}

