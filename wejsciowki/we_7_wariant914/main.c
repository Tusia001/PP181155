/* Napisz funkcj�, kt�rej argumentem jest napis. Funkcja ma zwr�ci� ile znak�w ma�ych liter z alfabetu �aci�skiego jest napisane. Nie korzstaj z wbudowanch funkcji jezyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

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
