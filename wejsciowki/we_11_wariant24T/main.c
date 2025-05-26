/* Stworz strukture Computer o dwóch polach brand (napis) oraz ram_gb(dowolny typ calkowity). nastepnie stwórz funkcje, której argumentami jest niepusta tablica struktur Computer oraz rozmiar tablicy. funkcja ma zwrocic najmniejsz¹ ilosc oamieci RAM
. stwórz przypadek testowy*/


#include <stdio.h>
#include <stdlib.h>

struct Computer {
    char brand[30];
    int ram_gb;
};

int findMinRam(struct Computer *tab, int size) {
    int min = tab[0].ram_gb;
    for (int i = 1; i < size; i++) {
        if (tab[i].ram_gb < min) {
            min = tab[i].ram_gb;
        }
    }
    return min;
}

int main()
{
    int size = 3;

    struct Computer *tab = malloc(size * sizeof(struct Computer));
    if (tab == NULL) {
        printf("B³¹d alokacji pamiêci!\n");
        return 1;
    }

    tab[0].ram_gb = 16;
    tab[1].ram_gb = 8;
    tab[2].ram_gb = 32;

    char brand0[] = "Dell";
    char brand1[] = "HP";
    char brand2[] = "Lenovo";

    for (int i = 0; i < 5; i++) tab[0].brand[i] = brand0[i];
    for (int i = 0; i < 3; i++) tab[1].brand[i] = brand1[i];
    for (int i = 0; i < 6; i++) tab[2].brand[i] = brand2[i];

    printf("Najmniejsza ilosc RAM: %d GB\n", findMinRam(tab, size));


    free(tab);
    return 0;
}
