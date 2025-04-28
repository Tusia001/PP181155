/* Napisz funkcjê, której argumentem jest napis. Funkcja ma zwróciæ ile znaków ma³ych liter z alfabetu ³aciñskiego jest napisane. Nie korzstaj z wbudowanch funkcji jezyka oprócz operacji wejœcia/wyjœcia. Stwórz przypadek testowy dla tej funkcji. */

#include <stdio.h>
#include <stdlib.h>

int countLowerCase(char tab[]) {
    int i = 0, counter = 0;
    while (tab[i] != '\0') {
        if (tab[i] >= 'a' && tab[i] <= 'z') {
            counter++;
        }
        i++;
    }
    return counter;
}

int main() {
    char tekst[] = "HeLlo123!";

    printf("Liczba malych liter: %d\n", countLowerCase(tekst));
    return 0;
}
