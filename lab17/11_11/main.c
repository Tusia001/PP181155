/*Napisz funkcjê rmLower, która przyjmuje jako argument tablicê znaków typu char i usuwa z niej wszystkie znaki bêd¹ce ma³ymi literami. Nie korzystaj ze wbudowanych funkcji jêzyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

void rmLower(char tab[]) {
    int i = 0, j = 0;
    while (tab[i] != '\0') {
        if (!(tab[i] >= 'a' && tab[i] <= 'z')) {
            tab[j] = tab[i];
            j++;
        }
        i++;
    }
    tab[j] = '\0';
}
int main() {
    char tekst[] = "HeLlo123WorLD!";
    printf("Przed: %s\n", tekst);

    rmLower(tekst);

    printf("Po:    %s\n", tekst);
    return 0;
}
