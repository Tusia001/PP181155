// Napisz funkcjê strDig, która dostaje w argumencie napis. Funkcja ma zwróciæ d³ugoœæ napisu,gdy napis nie zawiera cyfr. Jeœli napis zawiera cyfrê, to za ka¿d¹ cyfrê nale¿y dodaæ 1 do d³ugoœci napisu i to zwróciæ. Stwórz przypadek testowy.//

#include <stdio.h>
#include <stdlib.h>

int strDig(char *napis) {
    int dlugosc = 0;
    for (int i = 0; napis[i] != '\0'; i++) {
        dlugosc += 1;
        if (napis[i] >= '0' && napis[i] <= '9') {
            dlugosc += 1; // za ka¿d¹ cyfrê dodajemy +1
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
