//Stw�rz struktur� Train o dw�ch polach: destination (napis) i cars (int). Nast�pnie stw�rz funkcj� getCars, kt�rej argumentami jest niepusta tablica struktur Train oraz rozmiar tablicy. Funkcja ma zwr�ci� liczb� wagon�w poci�gu o najd�u�szej nazwie stacji docelowej. Je�li kilka stacji ma najd�u�sz� nazw�, uwzgl�dnij pierwszy z takich poci�g�w. Stw�rz przypadek testowy. //
#include <stdio.h>
#include <stdlib.h>
struct Train {
    char *destination;
    int cars;
};
int length(char txt[]) {
    int i = 0;
    while (txt[i] != '\0') {
        i++;
    }
    return i;
}
int getCars(struct Train tab[], int size) {
    struct Train temp = tab[0];
    for (int i = 1; i < size; i++) {
        if (length(tab[i].destination) > length(temp.destination)) {
            temp = tab[i];
        }
    }
    return temp.cars;
}
int main() {
    struct Train tab[] = {
        {"Ada", 30},
        {"Marta", 40},
        {"Alicja", 50}
    };
    printf("Liczba wagonow: %d\n", getCars(tab, 3));
    return 0;
}

