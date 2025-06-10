/*Napisz funkcję cutStr, która otrzymuje jako argumenty tablicę znaków typu char oraz dwie liczby całkowite n i m, 
i wycina z otrzymanego napisu znaki o indeksach od n do m (przy założeniu, że n<m). Nie korzystaj ze wbudowanych funkcji języka oprócz operacji wejścia/wyjścia. 
Stwórz przypadek testowy dla tej funkcji. */

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

