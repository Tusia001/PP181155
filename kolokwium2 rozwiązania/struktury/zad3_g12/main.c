//Stwórz strukturê Train o dwóch polach: destination (napis) i cars (int). Nastêpnie stwórz funkcjê getCars, której argumentami jest niepusta tablica struktur Train oraz rozmiar tablicy. Funkcja ma zwróciæ liczbê wagonów poci¹gu o najd³u¿szej nazwie stacji docelowej. Jeœli kilka stacji ma najd³u¿sz¹ nazwê, uwzglêdnij pierwszy z takich poci¹gów. Stwórz przypadek testowy. //
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

