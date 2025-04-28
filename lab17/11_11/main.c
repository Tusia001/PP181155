/*Napisz funkcj� rmLower, kt�ra przyjmuje jako argument tablic� znak�w typu char i usuwa z niej wszystkie znaki b�d�ce ma�ymi literami. Nie korzystaj ze wbudowanych funkcji j�zyka opr�cz operacji wej�cia/wyj�cia. Stw�rz przypadek testowy dla tej funkcji. */

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
