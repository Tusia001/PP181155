/*Napisz funkcj� cutStr, kt�ra otrzymuje jako argumenty tablic� znak�w typu char oraz dwie liczby ca�kowite n i m, i wycina z otrzymanego napisu znaki o indeksach od n do m (przy za�o�eniu, �e n<m). Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

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

