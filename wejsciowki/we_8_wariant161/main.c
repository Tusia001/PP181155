/* we 8 wariant 161 Napisz funkcjê, której argumentem jest napis. Funkcja ma wyci¹æ wszystkie znaki '!' (wykrzyknik) o ile wystêpuj¹. Swtórz przypadek testowy funkcji.*/

#include <stdio.h>
#include <stdlib.h>

void removeExclamations(char txt[]) {
    int i = 0, j = 0;

    while (txt[i] != '\0') {
        if (txt[i] != '!') {
            txt[j] = txt[i];
            j++;
        }
        i++;
    }
    txt[j] = '\0';
}

int main() {
    char tekst[] = "Uwaga! To! jest! testowy! tekst!!!";
    removeExclamations(tekst);
    printf("%s\n", tekst);

    return 0;
}
