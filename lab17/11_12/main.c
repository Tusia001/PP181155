/*Napisz funkcjê rmDigits, która przyjmuje jako argument tablicê znaków typu char i usuwa z niej wszystkie znaki bêd¹ce cyframi. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void rmDigits(char tab[]) {
    int i = 0, j = 0;
    while (tab[i] != '\0') {
        if (!(tab[i] >= '0' && tab[i] <= '9')) {
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}


int main() {
    char tekst[] = "Kolokwium123egzamin456!";

    printf("Przed: %s\n", tekst);

    rmDigits(tekst);

    printf("Po:    %s\n", tekst);
    return 0;
}
