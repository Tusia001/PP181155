// Napisz funkcj� strDig, kt�ra dostaje w argumencie napis. Funkcja ma zwr�ci� d�ugo�� napisu,gdy napis nie zawiera cyfr. Je�li napis zawiera cyfr�, to za ka�d� cyfr� nale�y doda� 1 do d�ugo�ci napisu i to zwr�ci�. Stw�rz przypadek testowy.//

#include <stdio.h>
#include <stdlib.h>

int strDig(char *napis) {
    int dlugosc = 0;
    for (int i = 0; napis[i] != '\0'; i++) {
        dlugosc += 1;
        if (napis[i] >= '0' && napis[i] <= '9') {
            dlugosc += 1; // za ka�d� cyfr� dodajemy +1
        }
    }
    return dlugosc;
}

int main()
{
    char napis1[] = "Hello World";
    char napis2[] = "He2lo Wor32";
    printf("%d\n", strDig(napis1));
    printf("%d\n", strDig(napis2));
    return 0;
}
