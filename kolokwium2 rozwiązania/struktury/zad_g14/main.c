//Stw�rz struktur� Car o dw�ch polach: model (napis) i price (float). Nast�pnie stw�rz funkcj�getCar, kt�rej argumentami jest niepusta tablica struktur Car oraz rozmiar tablicy. Funkcja ma zwr�ci� samoch�d (jako struktur�) z najni�sz� cen�. W przypadku kilku samochod�w w tablicy z najni�sz� cen�, to zwr�� pierwszy z mo�liwych. Stw�rz przypadek testowy//
#include <stdio.h>
#include <stdlib.h>
struct Car {
    char *model;
    float price;
};
struct Car getCar(struct Car tab[], int size) {
    struct Car temp = tab[0];
    for (int i = 1; i < size; i++) {
        if (tab[i].price < temp.price) {
            temp = tab[i];
        }
    }
    return temp;
}
int main() {
    struct Car tab[] = {
        {"Skoda", 20000},
        {"Mazda", 50000},
        {"Subaru", 50000}
    };

    struct Car cheapest = getCar(tab, 3);
    printf("Najta�szy samoch�d: %s za %.2f PLN\n", cheapest.model, cheapest.price);

    return 0;
}
