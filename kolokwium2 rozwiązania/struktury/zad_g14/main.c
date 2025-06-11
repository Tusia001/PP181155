//Stwórz strukturê Car o dwóch polach: model (napis) i price (float). Nastêpnie stwórz funkcjêgetCar, której argumentami jest niepusta tablica struktur Car oraz rozmiar tablicy. Funkcja ma zwróciæ samochód (jako strukturê) z najni¿sz¹ cen¹. W przypadku kilku samochodów w tablicy z najni¿sz¹ cen¹, to zwróæ pierwszy z mo¿liwych. Stwórz przypadek testowy//
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
    printf("Najtañszy samochód: %s za %.2f PLN\n", cheapest.model, cheapest.price);

    return 0;
}
